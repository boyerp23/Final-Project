#include <iostream>
#include <string>
#include "DisplayIntroduction.h"
#include "CAPCOMIntro.h"
#include "ClassFlightCrew.h"
#include "MeetTheCrew.h"
#include "EnterBrief.h"
#include "CrewBrief.h"
#include "PlayerChoice.h"
#include "ClassBriefAudience.h"
#include "playerChoice2.h"
#include "LaunchSequence.h"
#include "FinalLaunchSequence.h"
//used so that I don't have to type std:: every line
using namespace std;

//prototype functions
void playerAnswer();
void shipName();
void enterLaunchCode();
//where the program begins
int main()
{
	//Title and program introduction. 
	displayIntro();
	//Meet CAPCOM and introduce yourself.
	capcomIntro();
	//Allow crew to introduce themselves to you.
	meetCrew();
	//enter the briefing room
	enterBrief();
	//Conduct crew mission brief
	crewBrief();
	//calling the player answer and ship name functions
	playerAnswer();
	shipName();
	//Ask user if they wish to continue.
	playerChoice2();
		//Initate launch sequence and launch.
	launchSequence();
	//calling the enter launch code function
	enterLaunchCode();
	//initiate the final launch sequence
	finalLaunchSequence();
	//pause for user
	system("pause");
	//enter final launch sequence code
	enterLaunchCode();
	//pause for user
	system("pause");
	//where the program ends
	return 0;
}
void playerAnswer()
{
	string playerAnswer;
	cout << "what is your go/no criteria?\n";
	getline(cin, playerAnswer);
	cout << "The go/ no go criteria is " + playerAnswer + " for landing.\n";
}
void shipName()
{
	string playerShipName;
	cout << "What do you want to call the ship?  \n";
	getline(std::cin, playerShipName);
	cout << "The ship is known as " + playerShipName;
}
void enterLaunchCode()
{
	string enterLaunchCode;
	cout << "Please enter launch code: \n";
	getline(cin, enterLaunchCode);
	cout << "Launch code " + enterLaunchCode + " accepted, you may proceed\n";
}