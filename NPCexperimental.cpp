#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <limits>
#include <windows.h>

using namespace std;

int main() 
{
	//AS in this context is ability scores shortened for brevity
	// this is to represent the minimum and maximum amount you can roll on ability scores 
	int ASmaxValue = 18; 
	int ASminValue = 9;

	srand(time(0));
	int ASroll1 = rand() % (ASmaxValue - ASminValue + 1) + ASminValue;
	int ASroll2 = rand() % (ASmaxValue - ASminValue + 1) + ASminValue;
	int ASroll3 = rand() % (ASmaxValue - ASminValue + 1) + ASminValue;
	int ASroll4 = rand() % (ASmaxValue - ASminValue + 1) + ASminValue;
	int ASroll5 = rand() % (ASmaxValue - ASminValue + 1) + ASminValue;
	int ASroll6 = rand() % (ASmaxValue - ASminValue + 1) + ASminValue;

	cout << "Ability Score 1 rolled: " << ASroll1 << endl
	 	 << "Ability Score 2 rolled: " << ASroll2 << endl
	 	 << "Ability Score 3 rolled: " << ASroll3 << endl
	 	 << "Ability Score 4 rolled: " << ASroll4 << endl
	 	 << "Ability Score 5 rolled: " << ASroll5 << endl
	 	 << "Ability Score 6 rolled: " << ASroll6 << endl;
	
	int str;
	int strBonus;

	int dex;
	int dexBonus;

	int con;
	int conBonus;

	int intel;
	int intelBonus;

	int wis;
	int wisBonus;

	int cha;
	int chaBonus;
	
	cout << "please assign these scores:" << endl;
	cout << setw(10) << "STR: ";
	cin >> str;
		if (str <= 9)
		strBonus = -1;
	else if (str <= 11)
		strBonus = 0;
	else if (str <= 13)
		strBonus = 1;
	else if (str <= 15)
		strBonus = 2;
	else if (str <= 17)
		strBonus = 3;
	else if (str <= 19)
		strBonus = 4;
	else
		strBonus = 5;


	cout << setw(10) << "DEX: ";
	cin >> dex;
		if (dex <= 9)
		dexBonus = -1;
	else if (dex <= 11)
		dexBonus = 0;
	else if (dex <= 13)
		dexBonus = 1;
	else if (dex <= 15)
		dexBonus = 2;
	else if (dex <= 17)
		dexBonus = 3;
	else if (dex <= 19)
		dexBonus = 4;
	else
		dexBonus = 5;


	cout << setw(10) << "CON: ";
	cin >> con;
	if (con <= 9)
		conBonus = -1;
	else if (con <= 11)
		conBonus = 0;
	else if (con <= 13)
		conBonus = 1;
	else if (con <= 15)
		conBonus = 2;
	else if (con <= 17)
		conBonus = 3;
	else if (con <= 19)
		conBonus = 4;
	else
		conBonus = 5;

	cout << setw(10) << "INT: ";
	cin >> intel;
	if (intel <= 9)
		intelBonus = -1;
	else if (intel <= 11)
		intelBonus = 0;
	else if (intel <= 13)
		intelBonus = 1;
	else if (intel <= 15)
		intelBonus = 2;
	else if (intel <= 17)
		intelBonus = 3;
	else if (intel <= 19)
		intelBonus = 4;
	else
		intelBonus = 5;

	cout << setw(10) << "WIS: ";
	cin >> wis;
		if (wis <= 9)
		wisBonus = -1;
	else if (wis <= 11)
		wisBonus = 0;
	else if (wis <= 13)
		wisBonus = 1;
	else if (wis <= 15)
		wisBonus = 2;
	else if (wis <= 17)
		wisBonus = 3;
	else if (wis <= 19)
		wisBonus = 4;
	else
		wisBonus = 5;

	cout << setw(10) << "CHA: ";
	cin >> cha;
		if (cha <= 9)
		chaBonus = -1;
	else if (cha <= 11)
		chaBonus = 0;
	else if (cha <= 13)
		chaBonus = 1;
	else if (cha <= 15)
		chaBonus = 2;
	else if (cha <= 17)
		chaBonus = 3;
	else if (cha <= 19)
		chaBonus = 4;
	else
		chaBonus = 5;
	
int profBonus;
cout << "What is your proficiency bonus? " << endl ;
cin >> profBonus;
int miscAttackMod;
cout << "Any other bonuses to physical attacks? " << endl;
cin >> miscAttackMod;

int strBasedAttackBonus = strBonus + profBonus + miscAttackMod;
int dexBasedAttackBonus = dexBonus + profBonus + miscAttackMod;

// in this context SC is Spell Casting abbreviated
cout << "1- WIS" << endl 
	 << "2- INT" << endl
	 << "3- CHA" << endl
	 << "Input the number corresponding with your spell casting ability: ";
	
short SCinput;
cin >> SCinput;
int SCattackBonus;
int spellSaveDC;
// DC stands for Difficulty Class
switch (SCinput)
{	case 1:
		SCattackBonus = (wisBonus + profBonus);
		spellSaveDC = (8 + wisBonus + profBonus);
		break;
	case 2:
		SCattackBonus = (intelBonus + profBonus);
		spellSaveDC = (8 + intelBonus + profBonus);
		break;
	default:
		SCattackBonus = (chaBonus + profBonus);
		spellSaveDC = (8 + chaBonus + profBonus);
		break;
}

cout <<"these are your final scores:" << endl 
 	 << setw(10) << "STR:" << setw(3) << str << setw(3) 
	 << "  STR Bonus: " << setw(3) << strBonus << endl

	 << setw(10) << "DEX:" << setw(3) << dex << setw(3) 
	 << "  DEX Bonus: " << setw(3) << dexBonus << endl 

	 << setw(10) << "CON:" << setw(3) << con << setw(3) 
	 << "  CON Bonus: " << setw(3) << conBonus << endl

	 << setw(10) << "INT:" << setw(3) << intel << setw(3) 
	 << "  INT Bonus: " << setw(3) << intelBonus << endl

	 << setw(10) << "WIS:" << setw(3) << wis << setw(3) 
	 << "  WIS Bonus: " << setw(3) << wisBonus << endl 

 	 << setw(10) << "CHA:" << setw(3) << cha << setw(3) 
	 << "  CHA Bonus: " << setw(3) << chaBonus << endl;

system("pause");

cout << "These are your attack bonuses: " << endl
 	 << "STR based Attack Bonus: " << strBasedAttackBonus << endl
	 << "DEX based Attack Bonus: " << dexBasedAttackBonus << endl << endl << endl;

cout << "Your Spell attack bonus: " << SCattackBonus << endl
	 << "Your Spell Save DC: " << spellSaveDC << endl;


for(int i=0; i<1; i++)
    
    {
    ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=dQw4w9WgXcQ", NULL, NULL, SW_SHOWNORMAL);
    }

system("pause");

return 0;
}