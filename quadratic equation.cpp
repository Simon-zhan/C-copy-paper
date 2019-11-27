//求一元二次方程的根

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,d,x1,x2,lp,ip;
    cin>>a>>b>>c;
    if(fabs(a)<1e-6)
        cout<<"is not quadratic"<<endl;
    else
    {   d=b*b-4*a*c;
        if(fabs(d)<=1e-6)
        {
            cout<<"has two equal roots:\n";
            x1=x2=-b/(2*a);
            cout<<"x1=x2="<<x1<<endl;
        }
        else if(d>1e-6)
            {
                x1=(-b+sqrt(d))/(2*a);
                x2=(-b-sqrt(d))/(2*a);
                cout<<"has two real roots:\n";
                cout<<"x1="<<x1<<",x2="<<x2<<endl;
            }
            else
            {
                lp=-b/(2*a);
                ip=sqrt(-d)/(2*a);
                cout<<"has two complex roots:\n";
                cout<<"x1="<<lp<<"+"<<ip<<"i\n";
                cout<<"x2="<<lp<<"-"<<ip<<"i\n";
            }
    }
}
