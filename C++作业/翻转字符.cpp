/*给一个只有小写字母的字符串，输出 n 次区间翻转操作之后的字符串
输入
第一行一个长度不超过1000的小写字符串 
第二行一个整数n(1≤n≤100) 接下来 n 行，每行 2 个整数l,r(0≤l<r<字符串长度)，表示你要将下标 l,r 之间的字符串翻转，下标从 0 开始
输出
输出翻转后的字符串*/
#include<iostream>
using namespace std;
int main()
{
    string arr;
    cin>>arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int l,r;
        cin>>l>>r;
        int len=r-l;
        for(int i=0;i<(len+1)/2;i++)
        {
            swap(arr[l+i],arr[r-i]);
        }
    }
    cout<<arr;
}