//将一个数组中的值按逆序重新存放，例如，原来顺序为：a、b、c、d。要求改为：d、c、b、a。
#include<iostream>
using namespace std;
int main()
{
    string arr;
    cin>>arr;
    int len=arr.length();
    for(int i=len-1;i>=0;i--)
    {
        if(arr[i]!=0)
        {
            cout<<arr[i];
        }
    }
    system("pause");
    return 0;
}