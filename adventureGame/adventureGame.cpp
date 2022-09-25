// adventureGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Area.h"
#include "Feature.h"
#include "Item.h"
#include "Monster.h"
#include "Player.h"

void PrintPlayer(Player details)
{
	std::cout << "Name: " << details.name << std::endl;
	std::cout << "Description: " << details.description << std::endl;
	std::cout << "Current Health: " << details.health << std::endl;
	std::cout << "Current Armour: " << details.armour << std::endl;
	std::cout << "Current Weapon: " << details.weapon << std::endl;
	std::cout << "Attack Power: " << details.attack << std::endl;
}

void PrintMonster(Monster details)
{
	std::cout << "Name: " << details.name << std::endl;
	std::cout << "Description: " << details.description << std::endl;
	std::cout << "Current Health: " << details.health << std::endl;
	std::cout << "Current Armour: " << details.armour << std::endl;
	std::cout << "Current Weapon: " << details.weapon << std::endl;
	std::cout << "Attack Power: " << details.attack << std::endl;
}

void PrintItem(Item details)
{
	std::cout << "Name: " << details.name << std::endl;
	std::cout << "Description: " << details.description << std::endl;
}

void PrintFeature(Feature details)
{
	std::cout << "Name: " << details.name << std::endl;
	std::cout << "Description: " << details.description << std::endl;
}

void PrintArea(Area details)
{
	std::cout << "Name: " << details.name << std::endl;
	std::cout << "Description: " << details.description << std::endl;
}


int main()
{
	//Player details
	Player player1;
	player1.name = "Jason";
	player1.description = "A male with long shaggy hair, medium build with a mean grenade throwing arm.";
	player1.health = 83.0f;
	player1.armour= 23.0f;
	player1.weapon = "Grenade";
	player1.attack = 12.0f;

	Player player2;
	player2.name = "Bob the Bounty Hunter";
	player2.description = "It's Bob.......the Bounty Hunter.";
	player2.health = 02.0f;
	player2.armour = 0.0f;
	player2.weapon = "Pipe Bomb";
	player2.attack = 15.0f;

	Player player3;
	player3.name = "Ronald McRonald";
	player3.description = "A dorky looking Doofus.";
	player3.health = 100.0f;
	player3.armour = 100.0f;
	player3.weapon = "Sticky Grenade";
	player3.attack = 100.0f;

	//Monster Details
	Monster monster1;
	monster1.name = "Jeff the Troll";
	monster1.description = "A big smelly idiot";
	monster1.health = 100.0f;
	monster1.armour = 74.0f;
	monster1.weapon = "Club";
	monster1.attack = 20.0f;

	Monster monster2;
	monster2.name = "Andre the Ogre";
	monster2.description = "A 7 ft green creature, with big rotten teeth it uses to chew down trees";
	monster2.health = 125.0f;
	monster2.armour = 67.0f;
	monster2.weapon = "Tree Trunk";
	monster2.attack = 30.0f;

	Monster monster3;
	monster3.name = "Shawn the Shark";
	monster3.description = "A Great White Shark with a scar across his face";
	monster3.health = 300.0f;
	monster3.armour = 250.0f;
	monster3.weapon = "Sharp Teeth";
	monster3.attack = 35.0f;

	//Item Details
	Item item1;
	item1.name = "Key";
	item1.description = "A rusty old key, it features a crescent moon engraving at the top";

	Item item2;
	item2.name = "Health Spray";
	item2.description = "A bottle of Health Spray";

	Item item3;
	item3.name = "Armour piece";
	item3.description = "A metal patch of armour";

	//Feature Details
	Feature feature1;
	feature1.name = "Use";
	feature1.description = "Allows the player to use an item of their choice";

	Feature feature2;
	feature2.name = "Take";
	feature2.description = "Allows the player to take an item";

	Feature feature3;
	feature3.name = "Examine";
	feature3.description = "Allows the player to examine an item";

	//area details
	Area area1;
	area1.name = "North";
	area1.description = "Exit to a dark cave";
	
	Area area2;
	area2.name = "East";
	area2.description =  "Exit to a dense wooded area";

	Area area3;
	area3.name = "South";
	area3.description = "Exit to a cave featuring a larg body of water";

	
	//Output Statements
	std::cout << "There are currently three players active." << std::endl;
	std::cout << "They are:" << std::endl;
	std::cout << "  " << std::endl;
	PrintPlayer(player1);
	std::cout << "  " << std::endl;
	PrintPlayer(player2);
	std::cout << "  " << std::endl;
	PrintPlayer(player3);

	std::cout << "There are three areas the player can take." << std::endl;
	std::cout << "They are: " << std::endl;
	std::cout << "  " << std::endl;
	PrintArea(area1);
	std::cout << "  " << std::endl;
	std::cout << "Which has the following enemy" << std::endl;
	std::cout << "  " << std::endl;
	PrintMonster(monster1);
	std::cout << "  " << std::endl;
	PrintArea(area2);
	std::cout << "  " << std::endl;
	std::cout << "Which has the following enemy" << std::endl;
	std::cout << "  " << std::endl;
	PrintMonster(monster2);
	std::cout << "  " << std::endl;
	PrintArea(area3);
	std::cout << "  " << std::endl;
	std::cout << "Which has the following enemy" << std::endl;
	PrintMonster(monster3);
	std::cout << "  " << std::endl;

	std::cout << "Each player has the following Items: " << std::endl;
	std::cout << "  " << std::endl;
	PrintItem(item1);
	std::cout << "  " << std::endl;
	PrintItem(item2);
	std::cout << "  " << std::endl;
	PrintItem(item3);
	std::cout << "  " << std::endl;

	std::cout << "Each player posses the ability to: " << std::endl;
	std::cout << "  " << std::endl;
	PrintFeature(feature1);
	std::cout << "  " << std::endl;
	PrintFeature(feature2);
	std::cout << "  " << std::endl;
	PrintFeature(feature3);

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
