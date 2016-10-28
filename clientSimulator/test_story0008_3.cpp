/*
 * test_story0008_3.cpp
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
	client.sessionInitiation_Normal("admin");
	client.receive();
	client.addSubscriber_Normal("01257780872","aaaaa");
	client.receive();
	return 0;
}

