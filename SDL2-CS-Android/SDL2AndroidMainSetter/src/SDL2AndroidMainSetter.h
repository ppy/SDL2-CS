#pragma once

typedef int (*customMain)();

void setMain(customMain mainFunction);

int SetThisAsMain(int argc, char** argv);
