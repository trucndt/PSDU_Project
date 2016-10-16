/*
 * test_story0018_3.cpp
 *
 *  Created on: Oct 16, 2016
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
	client.addSubscriber_Normal("01257780872", "Power");
	client.receive();
	client.addSubscriber_Normal("01257780871", "Power");
	client.receive();
	client.addSubscriber_Normal("01257780873", "Power");
	client.receive();
	client.getSubscriberList_Normal("Power");
	client.receive();
	client.delSubscriber_Normal("01257780874", "Power");
	client.receive();
	client.getSubscriberList_Normal("Power");
	client.receive();

	return 0;
}

