#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    
    cout << "Please enter you exam score: ";
    cin >> score;
    
    
    if(score >= 90 && score <= 100)
        cout << "A";
            
        
    if(score >= 80 && score <= 89)
        cout << "B";
    
        
    if(score >= 70 && score <= 79)
        cout << "C";
            
        
    if(score >= 60 && score <= 69)
        cout << "D";
            
    if(score < 60)
        cout << "F";
    
    return 0;
}