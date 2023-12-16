// SilentProvisioner.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>

int main()
{
	// Hide the console window
	::ShowWindow(::GetConsoleWindow(), SW_HIDE);

	// Execute specialize commands
	FILE* iopipe;
	//\\Windows\\OEM\\SpecializeCommands.cmd
	//\\Windows\\OEM\\FirstLogon.cmd
	if ((iopipe = _popen("\\Windows\\OEM\\SpecializeCommands.cmd", "r")) == NULL)
	{
		return 1;
	}

	// Wait for program to exit by itering through its output
	char psBuffer[128];
	while (!feof(iopipe))
	{
		if (fgets(psBuffer, 128, iopipe) != NULL)
		{

		}
	}
	return 0;
}
