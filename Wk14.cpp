#include <iostream>
#include <fstream>    // ifstream (in from a file) ofstream (out to a file)
using namespace std;

// global array
string favGames[100];
int index = 0;


/* 
    for your assignment:
        create a favgames program.
        use functions for
            add
            show
            remove
            edit
            load previous list from file
            save list to file.
*/

void add() {
    cout << "what game would you like to add?\n";
    
}

void load() {
    // try to open the save file
    // add each line from the file to the array.
    // close the file.
}

void save() {
    // open the file
    // use a for loop to write all of the array lines to the file.
    // file << favGames[i] << "\n";
    // close the file.
}

int main() {
    cout << "Getting Started!\n";

    cout << "Let's save text to a file!\n";

    // create the file variable
    ofstream file;
    // opening the file, specifying filename.
    file.open("data.txt");
    // writing text to the file.
    file << "This text will be saved into the file.\n";

    // let the user decide what to save to the file.
    while(true) {
        cout << "What do you want to say?\n";
        string input;
        getline(cin, input);
        if(input == "quit") break;
        // add input to file, then start a new line.
        file << input << "\n";
        
    }
    
    // close the file, so that some other program can use it.
    file.close();

    cout << "done!\n";

    cout << "Let's read from our save.txt file.\n";
    // create a string variable to hold each line in the file.
    string line;
    // create the file variable
    ifstream save("save.txt");

    // check to see if the file is open
    if(save.is_open()) {
        while(getline(save, line)) {
            cout << line << "\n";
            // favGames[index++] = line;
        }
    }
    else {
        cout << "file could not be loaded.\n";
    }
}