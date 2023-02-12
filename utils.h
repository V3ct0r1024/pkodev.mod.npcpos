#pragma once

namespace pkodev { namespace utils {

	template <typename T, int Offset = 0x00>
	T get(void* ptr)
	{
		return *reinterpret_cast<T*>(reinterpret_cast<int>(ptr) + Offset);
	}

	template <typename T, int Offset = 0x00>
	T get(unsigned int address)
	{
		return get<T, Offset>(reinterpret_cast<void*>(address));
	}

	template <typename T, int Offset = 0x00>
	void set(void* ptr, const T& value)
	{
		*reinterpret_cast<T*>(reinterpret_cast<int>(ptr) + Offset) = value;
	}

}}