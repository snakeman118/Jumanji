// Jumanji.cpp : Defines the entry point for the console application.

//insert libraries
#include "stdafx.h"
#include "pch.h"
#include <stdlib.h>
#include <string>
#include <iostream>

//std - standard library
//shorten cout - console out and endl - end line
//shorten string and cin
using std::cout;
using std::cin;
using std::endl;
using std::string;

//start program
int main()
{
	//set constants and variables
	const int GOLD_PIECES = 900;
	int adventurers, killed, survivors;
	string leader;

	//Allow player to know the name and let them know they will be inserting their own parts to the story
	cout << "Welcome to Jumanji\n\n";
	cout << "Please enter the following information for your adventure\n";

	//Player enters a number for the amount of adventurers and number becomes variable "adventurers"
	cout << "Enter a number:";
	cin >> adventurers;

	//Player enters a number for the amount of adventurers killed and number becomes variable "killed"
	cout << "Enter a number that is smaller than the first:";
	cin >> killed;

	//Set number of survivors
	survivors = adventurers - killed;

	//Player enters their name and they become variable "leader"
	cout << "Enter your last name:";
	cin >> leader;

	//Input story using variables set by the player and allow them to read the set story
	cout << "\nAs " << adventurers << " friends decided to play a game they found hidden in " << leader;
	cout << " attic they found themselves sucked into the board.\nWhen they entered the board they found themselves";
	cout << " inside of the wold of the game they were playing just seconds before.\n" << leader << " set themselves";
	cout << " as the leader of the party at the beginning.\nAfter wading through the jungle for an hour they ";
	cout << " found themselves under attack\nfrom what appeared to be a tribe of locals in the game" << leader;
	cout << " tries to lead his friends to victory\n in the fight, however with the\n" << adventurers << " friends that started,";
	cout << " after an ardeous battle " << killed << " were killed.\nThere was only " << survivors << "friends left.\n";
	cout << "Fortunately that seemed to be the end of the game and the board sucked them back through to the real world.\n";
	cout << survivors << " were left staring at the board and decided not to speak of this again and burned the board.\n";

	// Pause to read
	system("pause");




	//End the text based game
	return 0;
}

