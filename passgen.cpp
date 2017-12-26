#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>

int main() {
    
    // init random seed
    srand(time(NULL));

    // print welcome message
    using namespace std;
    cout << "Random Password Generator" << endl;
    
    // list of available characters
    std::vector<std::string> charList = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z","1","2","3","4","5","6","7","8","9","0","!","?","@","=","-","#"};
    
    // other variables
    int charListLen = 68;
    int pwdMinLen = 0;
    int pwdMaxLen = 128;
    int prevRandIndex = 0;
    
    for (int i = 0; i < pwdMaxLen; i++) {
        int randIndex = rand() % charListLen;
        if (randIndex == prevRandIndex) {
            randIndex++;
            cout << charList[randIndex] << ""; }
        else {
            cout << charList[randIndex] << ""; }
        prevRandIndex = randIndex;
    }
    
    cout << "\nPress Return to Exit";
    std::cin.ignore();
    return 0;

}