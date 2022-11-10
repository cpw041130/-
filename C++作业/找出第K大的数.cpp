/*有一列正整数a（可能有重复），他们是无序摆放的，请你找出其中第k大的数。对于重复的数，我们将它们算成一个数。
输入
第一行为一个整数n，表示这列数的个数
下面n行，每行一个整数
最后一行是一个整数k
输出
两个整数，中间用空格分开，分别表示第k大的数的值和这个数出现的次数*/
#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {  
    cin>>arr[i];
  }
  int k;
  cin>>k;
  for (int i = 0; i < 9 - 1; i++)
  {
    for (int j = 0; j < 9 - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  int num=0;
  for(int i=0;i<n;i++)
  {
    if(arr[i]==arr[n-k])
    num+=1;
  }
  cout<<arr[n-k]<<" "<<num;
}