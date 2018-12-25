#include <iostream>
using namespace std;

void swapints(int *num1,int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    
}

int main(){
    
    int num1;
    int num2;
    
    cout << "Please enter number 1: ";
    cin >> num1;
    cout << "Please enter number 2: ";
    cin >> num2;
    swapints(&num1, &num2);
    
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;
    
}
