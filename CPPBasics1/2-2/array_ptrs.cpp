#include <iostream>
using namespace std;

int main()
{
    int my_ints[4];
    int *my_ptrs[4];
     
    //User Enters Number
    for(int x = 0; x < 4; x++){
        cout << "Please Enter a Number: ";
        cin >> my_ints[x];
    }
    //Initial state
    for(int x = 0;x < 4;x++){
        my_ptrs[x] = &my_ints[x];
    }
    
    //initial integers
    for(int x = 0;x < 4; x++){
        
        cout << my_ints[x] << endl;
    }
    
    //initial hexadecimal
    for(int x = 0;x < 4; x++){
        
        cout << my_ptrs[x] << endl;
    }
    
    cout << endl;
    
    //
    int n = 4;
	int temp = 0;   
	  for(int i=0; i < n; i++){     
		  for(int j=1; j < (n-i); j++){  
			  if(*my_ptrs[j-1] > *my_ptrs[j]){ 
				  temp = *my_ptrs[j-1];     
				  *my_ptrs[j-1] = *my_ptrs[j]; 
				  *my_ptrs[j] = temp;      
			  }
		  }
	  }
	  
	 //print ptr values
	  for(int x = 0;x < 4; x++){
        
        cout << *my_ptrs[x] << endl;
    }
    
    //print hexadecimal
    for(int x= 0; x < 4; x++){
        cout << my_ptrs[x] << endl;
    }
    
    
    return 0;
}