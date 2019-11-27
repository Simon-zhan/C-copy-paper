//利用循环计算阶乘（最基础）

#include<iostream>
using namespace std;

int factorial(int a)
{
  int fac=1;
  for(int i=1;i<=a;i++)
  {
    fac*=i;
  }
  return fac;
}
