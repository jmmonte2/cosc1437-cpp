#include <iostream>
#include <cstdlib>
using namespace std;

string CoinFlip() {
    int randomNum;
    
    randomNum = rand() % 2;
     
    if (randomNum == 0) {
        return "Tails";
    } else {
        return "Heads";
    }


}


int main() {
    int numCoinFlips;
    cin >> numCoinFlips;
    srand(2); 

    for (int i = 0; i < numCoinFlips; ++i) {
        cout << CoinFlip() << endl;
    }

    return 0;
}