#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int sum = 0;

	scanf("%d\n%d",&a,&b);
	for (int i = 0; i < 3; i++)
	{
		c = a * (b % 10);
		b = b/10;
		sum += c * pow(10, i);
		cout << c << endl;
	}
	cout << sum << endl;
}