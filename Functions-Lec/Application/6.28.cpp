#include <iostream>
using namespace std;

/*
Take 4 inputs (num 1, num2, num3, num4)
swap num1 and num2
swap num3 and num4
*/
//use & to update that num passed in memory with updates that happen in function
void SwapNums(int& userNum1, int& userNum2, int& userNum3, int& userNum4) {
    
    // perform 1st pair swap
    int tempVar1 = userNum1;
    userNum1 = userNum2;
    userNum2 = tempVar1;

    //perform 2nd pair swap
    tempVar1 = userNum3;
    userNum3 = userNum4;
    userNum4 = tempVar1;

}


int main() {
    int userVal1, userVal2, userVal3, userVal4;
    cin >> userVal1 >> userVal2 >> userVal3 >> userVal4;

    SwapNums(userVal1, userVal2, userVal3, userVal4);
    cout << userVal1 << " " << userVal2 << " " << userVal3 << " " << userVal4;


    return 0;
}
