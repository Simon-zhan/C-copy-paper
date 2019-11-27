#include <iostream>
#include <iomanip>
using namespace std;

int swap(int &num1,int &num2)
{
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
}

int main()
{
	int a, b, c;
	cin>>a>>b>>c;
    if(a>b)
    swap(a,b);
    if(b>c)
    swap(b,c);
    if(a>b)
    swap(a,b);
    cout<<setw(4)<<a<<b<<c;
}
