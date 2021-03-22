#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int t = 0;
	int a = 0, b = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		scanf("%d%d", &a, &b);
		cout << "Case #" << i + 1 << ": " << a + b << endl;
	}
}