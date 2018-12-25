#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int pos = 0;
    int neg = 0;
    int sum = 0;
    int zero = 0;
    int avg = 0;
    
    for(int x = 0; x < 10; x++){
        //Ask the user for a number
        cout << "Please enter a number\n";
        cin >> num;
       
       //test for positve or negative 
        if(num > 0)
            pos++;
            
        if(num < 0)
            neg++;
        
        //Test for 0's
        if(num == 0)
            zero++;
            
        //Calculate the sum
        sum += num;
        
        
        
    }
    
    //Calculate the average
    avg = sum/10;
    
    //Print lines
    cout << "Positve Numbers: " << pos << endl;
    cout << "Negative Numbers: " << neg << endl;
    cout << "Number of zeros: " << zero << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;
    
    return 0;
}