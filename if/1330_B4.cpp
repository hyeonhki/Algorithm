#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int a; 
	int b;
	a = 0;
	b = 0;
	scanf("%d%d", &a, &b);
	if (a > b)
		cout << ">" << endl;
	else if (a < b)
		cout << "<" << endl;
	else
		cout << "==" << endl;
	return (0);
}