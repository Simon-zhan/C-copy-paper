//冒泡排序法

#include<iostream>
#include<iomanip>
using namespace std;
const int N=6;
void bubble_sort(int unsorted[],int n )//排序
{
    int flag=0,m=0;
	for (int i = 0; i <n-1; i++)
	{
		for (int j = 0; j < n-1-i; j++)
		{
			flag=0; 
			if (unsorted[j] > unsorted[j+1])
			{
				int temp = unsorted[j+1];
				unsorted[j+1] = unsorted[j];
				unsorted[j]=temp;
				flag=1;
			}
		}
        m++;
		if(!flag)  break;

	}
	cout<<"实际进行了"<<m<<"轮的相邻两个元素的比较交换"<<endl;
	cout<<"增加flag标志位可减少"<<n-1-m<<"轮循环"<<endl;
}
void display(int x[],int n)
{
	for (int i = 0; i <n; i++)
		cout<<setw(5)<<x[i];
}
int main( )
{
	int x[N] ;
	for(int i=0;i<N;i++)
	cin>>x[i];
	cout<<"排序前的数据:"<<endl;
	display(x,N);
	cout<<endl;
	bubble_sort(x,N);
	cout<<"排序后的序列:"<<endl;
	display(x,N);
	cout<<endl;
	return 0;
}
