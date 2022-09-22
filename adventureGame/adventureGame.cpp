// adventureGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Area.h"
#include "Feature.h"
#include "Item.h"
#include "Monster.h"
#include "Player.h"

int main()
{
	//Player details
	Player player;
	player.name = "Jason";
	player.description = "A male with long shaggy hair, medium build with a mean grenade throwing arm.";
	player.health = 83.0f;
	player.armour= 23.0f;
	player.weapon = "Grenade";
	player.attack = 12.0f;

	//Monster Details
	Monster monster;
	monster.name = "Jeff the Troll";
	monster.description;
	monster.health = 100.0f;
	monster.armour = 74.0f;
	monster.weapon = "Club";
	monster.attack = 20.0f;

	//Item Details
	Item item;
	item.name = "Key";
	item.description = "A rusty old key, it features a crescent moon engraving at the top";

	//Feature Details
	Feature feature;
	feature.name = "Use";
	feature.description = "Allows the player to use an item of their choice";

	//area details
	Area area;
	area.name;
	area.description;
	
	   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
