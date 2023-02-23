# pkodev.mod.npcpos

[![logo-background](https://user-images.githubusercontent.com/3164064/163711104-29410e0d-3c86-411a-9319-9ffeaa62abb8.png)](http://pkodev.net "PKOdev.NET")

This [**pkodev.mod.loader**](https://github.com/V3ct0r1024/pkodev.mod.loader) modification for the client of the MMORPG game "Tales of Pirates" **displays coordinates under non-player characters** (NPC) and **highlights NPC names in yellow**.

## Documentation

- Please refer to [this page](https://github.com/V3ct0r1024/pkodev.mod.npcpos/blob/master/doc/pkodev.mod.npcpos.doc.en.md) to get information about the modification in **English language**;
- Please refer to [that page](https://github.com/V3ct0r1024/pkodev.mod.npcpos/blob/master/doc/pkodev.mod.npcpos.doc.ru.md) to get information about the modification in **Russian language**.

## Information about the modification

-   **Name:** pkodev.mod.npcpos;
-   **Version:** 1.1;
-   **Author:** [V3ct0r](https://github.com/V3ct0r1024);
-   **Type:** for the game client (Game.exe);
-   **Supported executable files (.exe):** GAME_13X_0, GAME_13X_1, GAME_13X_2, GAME_13X_3, GAME_13X_4, GAME_13X_5.

## How to build

You will need the [**Visual Studio 2022 Community**](https://visualstudio.microsoft.com/vs/community/) IDE installed, which you can download for free from the Microsoft website, and the [**Git**](https://git-scm.com/) VCS.

### Way one - build.bat script

1. Open **Developer Command Prompt for VS 2022**;
2. Execute the following sequence of commands:

	
		git clone https://github.com/V3ct0r1024/pkodev.mod.npcpos.git
		cd pkodev.mod.npcpos
		build

### Way two - CMake

Additionally, you will need to download and install [**CMake**](https://cmake.org/download/) version 3.24 or higher.

1. Open **Command Prompt** (cmd.exe);
2. Execute the following sequence of commands to build modification, for example, for the GAME_13X_1 version:

	
		git clone https://github.com/V3ct0r1024/pkodev.mod.npcpos.git
		cd pkodev.mod.npcpos
		mkdir build
		cd build
		cmake -G "Visual Studio 17 2022" -A "Win32" -D GAME_EXE_VERSION=GAME_13X_1 ..
		cmake --build . --config Release
    
    
### Way three - Visual Studio GUI

1. Open **Command Prompt** (cmd.exe);
2. Execute the following sequence of commands:

	
		git clone https://github.com/V3ct0r1024/pkodev.mod.npcpos.git
		cd pkodev.mod.npcpos
		start .

3. Double click on the file "**pkodev.mod.npcpos.sln**". This will launch Visual Studio 2022 Community;
4. Select the desired version of Game.exe in the drop-down list of configurations and click the green arrow to build the modification.

.DLL files of the modification will appear in the directory **pkodev.mod.npcpos\bin**. You can install them in the client, for example with the following command:

	
	move "Path to the .DLL file" "Path to the client mods directory"
  
## Gallery

![Image 1](https://raw.githubusercontent.com/V3ct0r1024/pkodev.mod.npcpos/master/img/0.png)

## Discussion on the PKOdev.NET forum

 - [English section](https://pkodev.net/topic/5801-displaying-coordinates-under-the-npc/)
 - [Russian section](https://pkodev.net/topic/5796-%D0%BE%D1%82%D0%BE%D0%B1%D1%80%D0%B0%D0%B6%D0%B5%D0%BD%D0%B8%D0%B5-%D0%BA%D0%BE%D0%BE%D1%80%D0%B4%D0%B8%D0%BD%D0%B0%D1%82-%D0%BF%D0%BE%D0%B4-npc/)

## Download

The latest release of the modification can be found **[here](https://github.com/V3ct0r1024/pkodev.mod.npcpos/releases/)**.
