#include <iostream>
#include <string>
using namespace std;

/*
1. Input: ask user for string Output: the string entered
2. Create fucntions get num of chars
3. Call getNum function  and output returned result
4. Create func output/whitespaces and tabs (\t)
 */

int GetNumOfCharacters(string userInput) {
    return userInput.length();
}

string OutputWithoutWhitespace(string userInput) {
    string updatedString = "";
    int someChar;

    // add chars to new string except white spaces
    for (int i = 0; i < userInput.length(); ++i) {
        someChar = userInput.at(i);
        
        // add char to new string
        if (someChar != ' ') {
            updatedString += someChar;
        }
    }
    
    return updatedString;
}


int main() {
    string userInput;

    cout << "Enter a sentence or phrase:" << endl;
    getline(cin, userInput);
    cout << "You entered: " << userInput << endl;

    int num = GetNumOfCharacters(userInput);
    cout << num << endl;
    cout << OutputWithoutWhitespace(userInput) << endl;

    return 0;
}