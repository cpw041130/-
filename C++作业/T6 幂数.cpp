/*幂数（Powerful Number）是指一正整数n ，其所有质因数的平方亦是n 的因数，
换言之，若存在一质因数p ，则 p*p也是 n的因数。很显然，幂数的个数是无限的。
给你一个正整数N ，让你求出所有幂数中<=N 的个数以及它们的和。
输入格式
输入数据仅一行，包含正整数N (N<=1e11)。
输出格式
所有幂数中<=N 的个数以及它们的和。*/
#include<iostream>
using namespace std;
bool zhi(int n)
{
    bool temp=true;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            temp=false;
            break;
        }
    
    } 
    return temp;
}
int main()
{
    int n;
    int a=0;
    cin>>n;
    long long num=1;
    long long sum=1;
    int j;
    for(int i=4;i<=n;i++)
    {
        if(zhi(i))
        goto FLAG2;
        for(j=2;j<i;j++)
        {
            if(i%j==0&&zhi(j))
            {
                if(i%(j*j)==0)
                goto FLAG1;
                else 
                goto FLAG2;

            }FLAG1:a+=1;
        }
        num+=1;
        sum+=i;
        FLAG2:a++;
    }
    cout<<num<<endl;
    cout<<sum<<endl;
    return 0;
}