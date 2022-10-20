#include<iostream>
using namespace std;
int main()
{
  cout<<2<<" "<<endl;
  int z=3;
  int sum=2; 
  int i;
  FLAG:
  for(z;z<300;z++)
  {
    for(i =2;i<z;i++)
    {
      if(z%i==0)
      {
        z++;
        goto FLAG;
      }
    }
    cout<<z<<" ";
      
  }
  cout<<endl;
  cout<<sum;
  return 0; 
}