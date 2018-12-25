 #include <iostream>
using namespace std;

int main()
{
    
    int nums[10];
    
    //User Enters Number
    for(int x = 0; x < 10; x++){
        cout << "Please Enter a Number: ";
        cin >> nums[x];
    }
    
    //Reverse
    cout << "Reverse: ";
    for(int x = 9; x >= 0; x--)
        cout<<" " << nums[x];
    
    cout << endl;
    
    //Sorting
    cout << "Highest to lowest: ";
    int n = 10;
	double temp = 0;   
	  for(int i=0; i < n; i++){     
		  for(int j=1; j < (n-i); j++){  
			  if(nums[j-1] > nums[j]){ 
				  temp = nums[j-1];     
				  nums[j-1] = nums[j]; 
				  nums[j] = temp;      
			  }
		  }
	  }
    
    
    
    for(int x = 0; x < 10; x++)
        cout << " "<< nums[x];
    return 0;
}