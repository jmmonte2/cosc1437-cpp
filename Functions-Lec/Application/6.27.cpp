#include <iostream>
#include <iomanip>               
using namespace std;

/*
need function
DrivingCost() with input parameters milesPerGallon, dollarsPerGallon, and milesDriven 
Output the gas cost for 10 miles, 50 miles, and 400 miles, by calling your DrivingCost() function three times
*/

double DrivingCost(double milesPerGallon, double dollarsPerGallon, double milesDriven) {
    double cost = (1 / milesPerGallon) * dollarsPerGallon * milesDriven; 
    return cost;
}



int main() {
    double carMiPerGal;
    double priceGasPerGal;
    cin >> carMiPerGal >> priceGasPerGal;
    

    cout << fixed << setprecision(2);
    cout << DrivingCost(carMiPerGal, priceGasPerGal, 10.0);
    cout << DrivingCost(carMiPerGal, priceGasPerGal, 50.0);
    cout << DrivingCost(carMiPerGal, priceGasPerGal, 400.0);

    return 0;
}
