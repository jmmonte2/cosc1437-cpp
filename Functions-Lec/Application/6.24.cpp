#include <iostream>
#include <iomanip>               
using namespace std;

// 1 lap = 0.25 miles

double LapsToMiles(double numLaps) {
    const double numMilesPerLap = 0.25;
    return numMilesPerLap * numLaps;
}

int main() {
    double numLaps;
    cin >> numLaps;
    cout << fixed << setprecision(2) << LapsToMiles(numLaps);

    return 0;
}