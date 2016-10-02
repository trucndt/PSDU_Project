/*
 * test_story0014_5.cpp
 *
 *  Created on: Oct 2, 2016
 *      Author: trucndt
 */

#include "ClientSimulator.h"

using namespace std;

int main(int argc, char **argv)
{
	if (processCommandLineArgument(argc, argv) < 0)
	{
		return 0;
	}

	ClientSimulator client;
	client.connectToPSDU();
	client.sessionInitiation_WrongUser();
	client.receive();
	return 0;
}


