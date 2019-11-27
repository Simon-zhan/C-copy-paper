//递归函数实现阶乘

#include<iostream>
using namespace std;
int factorial(int a)
{
  if(a==1)
    return 1;
  else
    return a*factorial(a-1);
}
