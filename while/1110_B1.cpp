#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int a = 0;
	int n = 0;
	int b = 0;
	int c = 0;

	cin >> a;
		b = a;
	while (1)
	{
		c = b/10 + b%10;
		b = (b%10)*10 + c%10;
		n++;
		if (a == b)
			break ;
	}
	cout << n << endl;
}