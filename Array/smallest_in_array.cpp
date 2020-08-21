#include <iostream>
using namespace std; 

int main()
{
	int size , arr[size] , i;
	cout << "Enter the Size of Array:- " , cin >> size;
	
	for(i = 0 ; i < size ; i++)
	{
		cout << "Element [" << i << "] = " , cin >> arr[i];
	}
	
	int smallest = arr[0];
	
	for(i = 0 ; i < size ; i++)
	{
		if(arr[i] < smallest)
		{
			smallest = arr[i];
		}
	}
	
	cout << "Largest Number in the Array is = " << smallest;
	return 0;
}
