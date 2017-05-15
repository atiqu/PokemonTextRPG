#include <iostream>
#include <string>
#include <curses.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

string name;
string starting_pokemon[3] = {"Lemash","Tormite","Penthon" };
string chosen_pokemon;

void get_name(void) {
	while(name.empty() || name.length() > 10) {
		cout << "Welcome to TEXT POKEMON 1.0" << endl;
		cout << "Please give me your name: " << endl;
		cin >> name;
	}
	cout << "Your name is:" << name << endl;
	cout << endl;
}

void get_starting_pokemon(void) {
	int num = 0;
	
	while(num < 1 || num > 3) {
		cout << "Welcome to the world of Pokemon" << endl;
		cout << "Please choose a Pokemon for your adventure" << endl;
		cout << endl;
		for(int i = 0; i < sizeof(starting_pokemon)/sizeof(string); i++) {
			cout << i + 1 << ". " << starting_pokemon[i] << endl;
		}
		cin >> num;
	}
	cout << "Congratulations " << name << " chose " << starting_pokemon[num - 1] << " as the first Pokemon for the adventure!!!" << endl;
}

int main() {

}