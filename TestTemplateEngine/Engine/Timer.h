#ifndef __TIMER_H__
#define __TIMER_H__

#include "Globals.h"
#include "SDL2/SDL.h"

class Timer
{
public:

	// Constructor
	Timer();

	void Start();
	void Stop();

	UINT32 Read();

private:

	bool	running;
	UINT32	started_at;
	UINT32	stopped_at;
};

#endif //__TIMER_H__