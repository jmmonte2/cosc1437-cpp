#include <iostream>
#include <iomanip>
using namespace std;

/*
treat 1 step as walking 2.5 feet

Need function:
int FeetToSteps(double someVar)

steps = (1 step/ 2.5 feet) (inputFeet)
*/

int FeetToSteps(double inputFeet) {
    const double numFeetInStep = 2.5;
    int numFeet = (1 / numFeetInStep) * inputFeet;
    return numFeet;

}

int main() {
    int inputFeet;
    cin >> inputFeet;
    cout << FeetToSteps(inputFeet) << endl;

    return 0;
}