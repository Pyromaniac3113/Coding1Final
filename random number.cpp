#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  srand(time(0));

  cout << "Hello World!\n";
  cout << "Here is a random number beteen 10 and 50.\n";
  cout << rand() % 41 + 10 << "\n\n";

  for (int i = 0; i < 10; i++) {
    cout << i << "\n";
  }

  // the 'break' keyword gets out of a loop or a block.
  // the 'continue' jumps back to the top of the loop.

  cout << "What number shall i count to?\n";
  int input;
  cin >> input;

  for (int i = 0; i < 100; i++) {
    if (i == 13) {
      cout << "not today!\n";
      continue;
    }
    cout << i << "\n";
    if (i == input) {
      cout << "done!\n";
      break;
    }
  }

  for (int i = 0; i < 100; i += 5) {
    cout << i << "\n";
  }

  string fullName = "Braden Martin";

  cout << "My name is " << fullName << ".\n\n";

  cout << "there are " << fullName.size() << " characters in my name.\n\n";

  cout << "My first initial is " << fullName[0] << ".\n";

  cout << "My last initial is " << fullName[7] << ".\n\n";

  // 1, can we use a for loop to add a space between every character?
  // 2, can we find the initials with a for loop?

  for (int i = 0; i < fullName.size(); i++) {
    cout << fullName[i] << " ";
  }

  cout << "\n\n";

  cout << "All the initials.\n";
  cout << fullName[0];
  for (int i = 0; i < fullName.size(); i++) {
    if (fullName[i] == ' ') {
      cout << fullName[i + 1];
    }
  }

  cout << "\n\n";

    // lets build an array.
    // an array is a list.
    // we are going to build an inventory.
    // all the things will be strings.
    string inventory[5];    // here's a list with 5 spots in it.

    inventory[0] = "Onyx Shortsword";
    inventory[1] = "Lions Shield";
    inventory[2] = "Potion of healing";
    inventory[3] = "Teleportation Scroll";
    inventory[4] = "Coin Bag";

    cout << "The first item in my inventory is a " << inventory[0] << ".\n\n";
    cout << "Your items...\n";
    for (int i =0; i < 5; i++) {
        if(inventory[i] == " ") {
            
        }
        cout << inventory[i] << "\n";;
    }

    int highScores[10];

    highScores[0] = 222;

    string colors[] = {"Red", "Green"; "Blue", "Yellow", "Black"};

    for(int i = 0; i < 5; i ++) {
        if(colors[i] == "") {
        break;
         }
         cout << i + 1 << ". " << colors[i] << "\n.";
        }

}