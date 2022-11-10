/*编写一个程序，读取整数，直到用户输入0.
输入结束后，程序应报告用户输入的偶数（不包括0）个数、这些偶数的平均值、输入的奇数个数和这些奇数的平均值。
输出格式：
>>偶数个数，偶数平均值
>>奇数个数，奇数平均值*/
#include<iostream>
#include<vector>
using namespace std;
int n;
vector<int>arr;
int len=arr.size();
int ji,ou=0;
int jsum,osum=0;
int jp,op;

int main()
{
    
    
    while(1)
    {
        cin>>n;
        if(n==0)break;
        arr.push_back(n);
    }
    
    for(int i=0;i<len;i++)
    {
        if(arr[i]%2==1)ji+=1;
        else ou+=1;
    }
    vector<int>j;
    vector<int>o;
    for(int i=0;i<len;i++)
    {
        if(arr[i]%2==1)
        {
            j.push_back(arr[i]);
        }
        else if(arr[i]%2==0)
        {
            o.push_back(arr[i]);
        }
    }
    
    
    for(int i=0;i<ji;i++)
    {
        jsum+=j[i];
    }
    for(int i=0;i<ou;i++)
    {
        osum+=o[i];
    }
    jp=jsum/ji;
    op=osum/ou;
    cout<<ou<<","<<op<<endl;
    cout<<ji<<","<<jp<<endl;
    return 0;
}