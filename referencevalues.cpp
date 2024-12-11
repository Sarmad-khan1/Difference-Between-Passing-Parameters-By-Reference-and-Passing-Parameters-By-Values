#include <iostream>
using namespace std;
void swapbyVal(int num1, int num2);
void swapbyRef(int &num1, int &num2);

int main()
{
	int i = 10, j = 20;
	swapbyVal(i, j);
	cout << i << " " << j << endl;
	swapbyRef(i, j);
	cout << i << " " << j << endl;
}
void swapbyVal(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}
void swapbyRef(int &num1, int &num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}