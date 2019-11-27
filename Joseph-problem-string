#include <iostream>
#include <iomanip>
using namespace std;
#define Max_size 1000
int main()
{
    int m;  //猴子的个数 
    int n;  //出圈数数的基数 
    int Monkey[Max_size]={0};     //定义最多数的猴子，并初始化为0，表示现在都留下
    //start
    //添加必要的变量声明
    int i=0,k=0,j=0,s=0;
    //end
    cout<<"猴子选大王(数组存储)"<<endl<<"=========================="<<endl<<endl;
    cout<<"请输入猴子总数m:"<<endl;
    cin>>m;
	cout<<"请输入要选的间隔数n:"<<endl;
	cin>>n;
	cout<<"每个猴子的依次编号为:"<<endl;
    //输出猴子的编号,建议采用“cout<<setw(4)<<XXX; ”，XXX表示猴子的序号
    //start
    for(i=0;i<m;i++)
    {
        Monkey[i]=i+1;
        cout<<setw(4)<<Monkey[i];
    }
    //end
  	cout<<"\n猴子离开的顺序如下:"<<endl;	
    //数数、出圈，并记录离开的顺序
    for(k=m,i=-1;k>1;k--)
    {
        //while(Monkey[(i+1)%m]==0)
        //i++;
        s = 0;
        while(s<n)
        {
            i++;
            if(Monkey[i%m]) s++;
        }
        cout<<setw(4)<<Monkey[(i)%m];
        Monkey[(i)%m]=0;
    }
    //采用“cout<<setw(4)<<XXX”形式输出 
	//start
    //end
	cout<<endl;	
	//输出最后的大王,采用“cout<<"\n大王为:"<<XXX;”形式输出。
    //start
    while(Monkey[j]==0)
    {
        j++;
    }
    cout<<"\n大王为:"<<Monkey[j];
    //end
    cout<<endl;
	return 0;
}
