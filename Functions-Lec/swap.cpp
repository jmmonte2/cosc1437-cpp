#include <iostream>
using namespace std;

/*
Syntax:
returnType Function()

Types of Return type:
int
double
void [this means no return type]

*/

// Swap function
// sharing reference of var by using '&'

void Swap(int& first, int& second) {
    int tempVar = first;
    cout << first << " " << second << endl;
    first = second;
    second = tempVar;
}


int main() {
    int a = 1, b = 2;
    cout << "a " << a << " b " << b << endl;

    Swap(a,b);

    cout << "new a: " << a << " new b: " << b << endl;
    return 0;
}