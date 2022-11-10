#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==0||n==1)
    cout<<1;
    else 
    cout<<n*factorial(n--);
}
int main()
{
    int num;
    cin>>num;
    factorial(3);
    return 0;
}