#include<iostream>
using namespace std;

int main()
{
    long int sum=1,i,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum*=i;
        while(sum)
        {
            if(sum%10==0)
            sum=sum/10;
            else
            {
                sum=sum%1000;
                break;
            }
        }
    }
    while(sum)
    {
        if(sum%10==0)
        sum/=10;
        else
        {
            cout<<sum%10;
            break;
        }
    }
}

/*#define M 10000
#define N 10000
int p=1;
int func2(int a);
void func(int*a,int n)
{
    int i, j, k;
    for(j = 2;j<=n;j++)
    {
        k=0;
        for(i=0;i<p;i++)
        {    
            a[i]+=k;
            k=a[i]/M;
            a[i]%=M;
        }
        if(k)
        {
            p++;
            a[p-1]+=k;
        }
    }
    int tempnum = 0;
    for(int i=0;i<p-1;i++)
    {
        if(a[i] != 0)
        {
            tempnum=a[i];
            cout<<func2(tempnum)<<endl;
            break;
        }
    }
}

int func2(int a)
{
    if(a%10!=0)
        return a%10;
    else
        func2(a / 10);
}

int main()
{
    int a[N]={0}, n, i;
    cin>>n;
    for(i=0;i<N;i++)
        a[i]=0;
    a[0]=1;p=1;
    func(a, n);
}*/
/*
int main()
{
    int Data[100000];
    int digit;
    int i,j,r;
    int N;
    
    for(i=0;i<100000;i++)
        Data[i]=0;
    Data[0] = 1;
    Data[1] = 1;
    digit = 1;
        
    cin>>N;
        
    for(i=1;i<N+1;i++)
        {
            for(j=1;j<digit+1;j++)
                Data[j]*=i;
            for(j=1;j<digit+1;j++)
            {
                if(Data[j]>10)
                {
                    for(r=1;r<digit+1;r++)
                    {
                        if(Data[digit]>9)
                            digit++;
                        Data[r+1]+=Data[r]/10;
                        Data[r] = Data[r]%10;
                    }
                }
            }
        }
        for(i=2;;i++)
        {
            if(Data[i])
            {
            cout<<Data[i];
            break;
            }
        }
}*/
