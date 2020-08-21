#include <iostream>
using namespace std;

int main()
{
	int sum =0;
	int size, arr[size] , i;

	cout << "Size of Array: " , cin >> size;

	for(i = 0 ; i < size ; i++)
	{
		cin >> arr[i];
		sum += arr[i];

	}
	cout << sum;
	return 0;
}

