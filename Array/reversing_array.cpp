#include <iostream>
using namespace std;

int main()
{
	int size,  arr[size] ,i;
	
	cout <<"Enter the size of Array: " , cin >> size;
	cout << "Enter your Array:\n";
	
	for(i = 0 ; i < size ; i ++)
	{
	  cin >> arr[i];
	}
	
	cout << "Array in Reverse: ";
	for(i = size - 1 ; i >= 0; i--) // i = size - 1 means we will start our loop from last position i>0 MEANS WE'LL run our loop till 0 position 
	{
		cout  << arr[i] << " ";
	}
	
	
	return 0;
	

}



