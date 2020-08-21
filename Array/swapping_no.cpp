#include <iostream>
using namespace std;

int main()
{
	int a , b;
	cout <<"Enter the Value of A  and B \n" << "Before Swapping \n"<< "A = " , cin >> a , cout <<"B = " , cin >> b;
	/*int temp = a;
	a = b;
	b = temp; */
	swap(a , b); // it is same as above line
	
	cout << "After Swapping \n" << "A = " << a << "\nB = " << b;
	return 0;
}
