#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

string accessories[5];

class adventurer {
public:
    string name;
    int mana;
    int favAccessory;

    adventurer() {
        cout << "summoning a new adenturer!\n";
        name = "Adventurer";
        mana = 10;
        favAccessory = rand() % 5;
    }

    adventurer(string givenName, int givenMana) {
        cout << "summoning an adventurer with specific values...\n";
        name = givenName;
        mana = givenMana;
        favAccessory = rand() % 5;
        status();
    }
void status() {
    cout << "[" << name << ": " << mana << "]\n";
}

void accRec() {
    int favAccessory = rand() % 5;
    cout << "you should equip the " << accessories[favAccessory] << ".\n";
}

};


int main() {
srand(time(0));
    
    accessories[0] = "Potion of Greater healing";
    accessories[1] = "Scavengers Broadsword";
    accessories[2] = "Staff of Remnents";
    accessories[3] = "Helm of Fortitude";
    accessories[4] = "Cloak of Swiftness";
    
    adventurer Klause;
    Klause.status();

    Klause.name = "Klause";
    Klause.mana = 23;

    cout << Klause.name << ".\n";
    cout << Klause.name << "'s mana level is " << Klause.mana << ".\n";

    adventurer Sven("Sven", 14);
    Sven.accRec();

    adventurer adventureres[10];

    string advNames[] = {"Charles", "Reigurd", "Alice", "Subaru", "Elm", "Remmy"};

      for(int i = 0; i < 10; i++) {
        adventureres[i] = adventurer(advNames[rand() % 6], rand() % 11 + 5);
    }

        for(int i = 0; i < 10; i++){
            adventureres[i].status();
        }
    
    cout << "another turn has passed...\n";
    for(int i = 0; i < 10; i++) {
        adventureres[i].mana -=1;
        if(adventureres[i].mana <=0) {
            cout << adventureres[i].name << " has ran out of mana.\n";
        }
    }
    cout << "another turn has passed...\n";
    for(int i = 0; i < 10; i++) {
        adventureres[i].mana -=1;
        if(adventureres[i].mana <=0) {
            cout << adventureres[i].name << " has ran out of mana.\n";
        }
    }
    cout << "another turn has passed...\n";
    for(int i = 0; i < 10; i++) {
        adventureres[i].mana -=1;
        if(adventureres[i].mana <=0) {
            cout << adventureres[i].name << " has ran out of mana.\n";
        }
    }
    cout << "another turn has passed...\n";
    for(int i = 0; i < 10; i++) {
        adventureres[i].mana -=1;
        if(adventureres[i].mana <=0) {
            cout << adventureres[i].name << " has ran out of mana.\n";
        }
    }
    cout << "another turn has passed...\n";
    for(int i = 0; i < 10; i++) {
        adventureres[i].mana -=1;
        if(adventureres[i].mana <=0) {
            cout << adventureres[i].name << " has ran out of mana.\n";
        }
    }
    cout << "another turn has passed...\n";
    for(int i = 0; i < 10; i++) {
        adventureres[i].mana -=1;
        if(adventureres[i].mana <=0) {
            cout << adventureres[i].name << " has ran out of mana.\n";
        }
    }
     
}