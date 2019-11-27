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

//函数改写

#include<iostream>
#include <cmath>
using namespace std;

void root(float,float);
void root(float,float,float);
void root1(float,float,float);
void print(float,float);
void print(float,float,float);

int main( )
 { 

  float a,b,c,d;
   cout<<"a=";
   cin>>a;
   cout<<"b=";
   cin>>b;
   cout<<"c=";
   cin>>c;
   d=b*b-4*a*c;
   cout<<"the equation is ";
   if (fabs(a)<1e-6) 
        print(b,c);
   else if (fabs(d)<=1e-6)    //方程有两个相等的实根
   {   print(a,b,c);
       root(a,b);  
   }
   else if (d>1e-6)      	//方程有两个不相等的实根
   {   print(a,b,c);
       root(a,b,d);
   }
   else        				//方程有两个虚根
   {   print(a,b,c);
       root1(a,b,d);
   }
   return 0;
}
//求相等实根函数
void root(float a,float b)  
{  
	cout<<"has two equal roots:\n";
   cout<<"x1=x2="<<-b/(2*a)<<endl;
}
//求方程有两个不相等的实根函数
void root(float a,float b,float c) 
{   
	float x1,x2;
  //start
x1=(-b+sqrt(b*b-4*a*c))/(2*a);
x2=(-b-sqrt(b*b-4*a*c))/(2*a);
//end
    cout<<"has two real roots:\n" ;
    cout<<"x1="<<x1<<",x2="<<x2<<endl;
}
//求方程有两个虚根函数
void root1(float a,float b,float d)   
{ 
    float jp,ip;
	  //start
jp=-b/(2*a);
ip=sqrt(-d)/(2*a);
//end
    cout<<"has two complex roots:\n";
    cout<<"x1="<<jp<<"+"<<ip<<"i\n";
    cout<<"x2="<<jp<<"-"<<ip<<"i\n";
}
//输出a=0时方程的函数
void print(float b,float c)
 { 
	cout<<b<<"x+"<<c<<"=0\n";
   cout<<" not quadratic\n";
  }
//输出a不等于0时方程的函数
void print(float a,float b,float c) 
{  
	cout<<a<<"x*x+"<<b<<"x+"<<c<<"=0\n";
}
