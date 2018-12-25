#include <iostream>
using namespace std;

int main()
{
    int myInt = 15;
    int * myPointer = &myInt;
    
    cout << &myInt << " ";
    cout << myPointer << endl;
    cout << myInt << " ";
    cout << *myPointer << endl;
    
    myInt = 10;
    cout << &myInt << " ";
    cout << myPointer << endl;
    cout << myInt << " ";
    cout << *myPointer;
    
    
    return 0;
}