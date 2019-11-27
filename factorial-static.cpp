//用静态变量写阶乘函数

#include<iostream>
using namespace std;

int factorial(int a)
{
	static int i = 1;
	i *= a;
	return i;
}

int main()
{
	int fact = 0, n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		fact = factorial(i);
	}
	cout << fact;
}
