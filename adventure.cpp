#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  srand(time(0));

  cout << "Hello adventurer!\n";

  int health = 10;
  int attack;
  int block;
  int turns = 0;
  int loopCount = 4;
  int Attack = rand() % 4 + 1;
  int Block = rand() % 4 + 1;

  do {
    turns += 1;
    cout << "A monster attacks!!\n";
    cout << "\n";

    attack = rand() % 4 + 1;
    block = rand() % 4 + 1;

    if (block >= attack) {
      cout << "you have blocked sucessfully!\n.";
    } else
      cout << "attack was succesful.\n";
    

  } while
}

while (true) {
  turns += 1;
  cout << "you have been attacked for: " << Attack << "\n";
  cout << "you blocked for: " << Block << "\n";
  if (Attack > Block) {
    health -= Attack;
  }
  cout << "\n";

  cout << "your health is now: " << health << "\n";
}
if (health <= 0) {
  cout << "you are dead.\n";
}
if (health > 0) {
  cout << "congratulation on surviving!\n";
}

//   welcome the player
// set up the game
//     int health = 10, attack, block, turns = 0
//     seed the random number generator
// start the loop
//     add 1 to turns
//     start the encounter
//         randomly generate numbers for attack (range = 0-4) and block (range
//         = 0-4) if block is greater or equal to attack, successful block
//         otherwise, subtract attack value from health.
// keep looping while health is greater than zero and fewer than 4 turns have
// happened

// if health is greater than 0, congratulate player
// otherwise, tell the player they're dead.
}