//选择排序法

#include<iostream>
#include<iomanip>
using namespace std;
const int N=10;
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int i,j,t,a[N],k; //选择排序法
	cout<<"输入"<<N<<"个整数:"<<endl;
	for(i=0;i<=N-1;i++)
		cin>>a[i];
	cout<<"排序前的序列:"<<endl;
	for (i=0;i<N;i++)
		cout<<setw(4)<<a[i];
	cout<<endl;
	for (i=0;i<N-1;i++)
	{
		for(j=i+1;j<N;j++)
			if(a[i]>a[j]) swap(a[i],a[j]);
	}
	cout<<"输出升序排列结果:"<<endl;
	for (i=0;i<N;i++)
		cout<<setw(4)<<a[i];
	cout<<endl;
	return 0;
}
