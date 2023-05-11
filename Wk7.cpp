#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

string inventory[10];
int nextEmptySpot = 0;

void add() {
  cout << "what did you just pick up?\n";
  string input;
  cin >> input;

  inventory[nextEmptySpot++] = input;
}

void show() {
  cout << "here are the items in your inventory:\n";
  for (int i = 0; i < nextEmptySpot; i++) {
    cout << inventory[i] << "\n";
  }
}

void edit() {
  while (true) {
    cout << "what item would you like to replace?\n";
    string input;
    cin >> input;

    for (int i = 0; i < nextEmptySpot; i++) {
      if (inventory[i] == input) {
        cout << "what do you want to replace " << inventory[i] << " with?\n";
        cin >> input;

        inventory[i] = "input";
        return;
      }

      if (i + 1 == nextEmptySpot) {
        cout << "I couldn't find it, would you like to try again? (y/n)\n";
        char input;
        cin >> input;

        if (input != 'y') {
          return;
        }
      }
    }
  }
}

void show(string array[]) {
  for (int i = 0; i < 3; i++) {
    cout << array[i] << "\n";
  }
}

void add(string array[]) {
  cout << "adding 4th game...\n";
  array[3] = "Kirby";
}

int main() {
  srand(time(0));

  add();
  add();
  add();
  show();
  edit();

  return 0;
}