cmake_minimum_required(VERSION 3.24 FATAL_ERROR)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_DEBUG_POSTFIX "d")
set(MOD_BINARY_PATH "${CMAKE_SOURCE_DIR}/bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${MOD_BINARY_PATH})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${MOD_BINARY_PATH})
set(GAME_EXE_VERSION "" CACHE STRING "Set Game.exe version")
set(GAME_EXE_SUPPORTED "GAME_13X_0" "GAME_13X_1" "GAME_13X_2" "GAME_13X_3" "GAME_13X_4" "GAME_13X_5")

project(pkodev.mod.npcpos LANGUAGES CXX)

if (NOT "${GAME_EXE_VERSION}" IN_LIST GAME_EXE_SUPPORTED)
	message(FATAL_ERROR "The specified version of Game.exe \"${GAME_EXE_VERSION}\" (GAME_EXE_VERSION) is not supported."
		"\r\nSupported Game.exe versions: ${GAME_EXE_SUPPORTED}.")
endif()

add_compile_definitions(MOD_NAME=${PROJECT_NAME})
add_compile_definitions(MOD_VERSION=1.1)
add_compile_definitions(MOD_AUTHOR=V3ct0r)
add_compile_definitions(MOD_EXE_VERSION=${GAME_EXE_VERSION})

include_directories(${CMAKE_SOURCE_DIR}/lib/Detours/include)
link_directories(${CMAKE_SOURCE_DIR}/lib/Detours/lib)

add_library(${PROJECT_NAME} SHARED 
	dllmain.cpp
	address.h
	import.h
	import.cpp
	structure.h
	utils.h
	hook.h
	loader.h)
	
if (${GAME_EXE_VERSION} STREQUAL "GAME_13X_0")
	set(TARGET_NAME "${PROJECT_NAME}.client.13x_0")
elseif (${GAME_EXE_VERSION} STREQUAL "GAME_13X_1")
	set(TARGET_NAME "${PROJECT_NAME}.client.13x_1")
elseif (${GAME_EXE_VERSION} STREQUAL "GAME_13X_2")
	set(TARGET_NAME "${PROJECT_NAME}.client.13x_2")
elseif (${GAME_EXE_VERSION} STREQUAL "GAME_13X_3")
	set(TARGET_NAME "${PROJECT_NAME}.client.13x_3")
elseif (${GAME_EXE_VERSION} STREQUAL "GAME_13X_4")
	set(TARGET_NAME "${PROJECT_NAME}.client.13x_4")
else()
	set(TARGET_NAME "${PROJECT_NAME}.client.13x_5")
endif()

set_target_properties(${PROJECT_NAME} PROPERTIES 
	OUTPUT_NAME ${TARGET_NAME} 
	DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX}
	LIBRARY_OUTPUT_DIRECTORY ${MOD_BINARY_PATH})

target_link_libraries(${PROJECT_NAME} detours)