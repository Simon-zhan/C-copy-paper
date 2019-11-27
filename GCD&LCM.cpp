//求最大公约数和最小公倍数

#include <iostream>
#include <cmath>
using namespace std;
int main()
{  
   int x,y;    
   int m,g;
   int r;//temp
   cout << "输入2个数x,y："<<endl;//输入提示信息
   //start
   cin>>x>>y;
   for(m=(x<y?x:y);m>1;m--)
   {
       if(!(x%m)&&!(y%m))
       break;
   }
   
  //end
   cout << "最大公约数：" << m << endl;
     // 求最小公倍数
 //start
    g=(x*y)/m;
  //end
     cout << "最小公倍数：" << g << endl;
   return 0;
}
