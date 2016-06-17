#pragma once

#ifdef WIN32
#include <Windows.h>

class Timer
{
public:
	Timer()
	{
		::QueryPerformanceFrequency(&frequency);
		::QueryPerformanceCounter(&start);
		::QueryPerformanceCounter(&end);
	}
	void Reset()
	{
		::QueryPerformanceCounter(&start);
	}
	double Duration()
	{
		::QueryPerformanceCounter(&end);
		return (end.QuadPart - start.QuadPart + 0.0) / frequency.QuadPart * 1000.0f;
	}

private:
	LARGE_INTEGER frequency;
	LARGE_INTEGER start, end;
};										 
#endif