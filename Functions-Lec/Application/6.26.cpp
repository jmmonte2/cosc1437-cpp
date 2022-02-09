#include <iostream>
#include <iomanip>
using namespace std;
/*
1 Jiffy = (1 / 100)(second)
numSeconds = (numJiffy) * ( 1 / 100)(sec per jify)
*/

double JiffiesToSeconds(double numJiffies) {
    double numOfSec = numJiffies * (static_cast<double>(1) / 100);

    return numOfSec;
}


int main() {
    double numJiffies;
    cin >> numJiffies;
    cout << fixed << setprecision(3) <<  JiffiesToSeconds(numJiffies) << endl;

    return 0;
}