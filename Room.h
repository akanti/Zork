/*
 * Room.h
 *
 *  Created on: Nov 2, 2017
 *      Author: SwaggyKavi
 */

#ifndef ROOM_H_
#define ROOM_H_

#include <string>
#include <vector>
#include "rapidxml.hpp"

using namespace rapidxml;
using namespace std;

class Room {
public:

	string name;
	string status;
	string type;
	string description;
	vector<string> border;
	vector<string> container;
	vector<string> item;
	vector<string> creature;
	vector<string> trigger;

	Room (xml_node<>* name);
	virtual ~Room();

private:
	void createRoom(xml_node<>*);
	void createBorder(xml_node<>*);
};

#endif /* ROOM_H_ */