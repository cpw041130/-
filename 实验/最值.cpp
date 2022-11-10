#include<iostream>
using namespace std;
int max(int arr[])
{
    int len=sizeof(arr)/sizeof(arr[0]);
    int m=arr[0];
    for(int i=1;i<len;i++)
    {
        if(arr[i]>m)
        m=arr[i];
    }
    return m;
}
int main()
{
    int arry[9]={1,2,10,4,45,6,7,8,9};
    cout<<max(arry)<<endl;
}