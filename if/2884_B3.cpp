#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int div = 0;
	
	scanf("%d%d", &a, &b);
	if (b - 45 < 0)
	{
		div = 60 + b - 45;
		if (a == 0)
			cout << "23 " << div << endl;
		else
			cout << a - 1 << " " << div << endl;
	}
	else
		cout << a << " " << b - 45 << endl;
}