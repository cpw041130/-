/*从标准输入上读入表示鸡兔数量之和的整数 m ，和表示鸡兔脚数之和的整数 n ，
在屏幕上输出鸡的数量 j 和兔的数量 t。
如果输入数据不合法，输出错误信息 "Wrong number" （不含引号）。*/
#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int j=m-(n-2*m)/2;
    int t=(n-2*m)/2;
    if(cin.good())
    cout<<j<<" "<<t;
    else
    cout<<"Wrong number";
}