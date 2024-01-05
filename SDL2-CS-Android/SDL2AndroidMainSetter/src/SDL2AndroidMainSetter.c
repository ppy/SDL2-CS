#include "SDL2AndroidMainSetter.h"

customMain sdlMain;

void setMain(customMain mainFunction)
{
	sdlMain = mainFunction;
}

int SetThisAsMain(int argc, char** argv)
{
	return sdlMain();
}
