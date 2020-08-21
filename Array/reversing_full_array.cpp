#include <iostream>
using namespace std;

int main()
{
	int size , arr[size] , i;
	
	cout << "Enter the Size of Array: " , cin >> size;
	
    cout << "Enter your Array:\n";
	
	for(i = 0 ; i < size ; i ++)
	{
	  cin >> arr[i];
	}
	
	int start = 0;
	int end = size - 1;
	
	while(start <= end)
	{
		swap(arr[start] , arr[end]);
		start++;
		end--;
	}
		cout <<"After Reverse:- \n";
		for(int i = 0 ; i < size ; i++)
		{
			cout << arr[i];
		}
		return 0;
	
	
}
