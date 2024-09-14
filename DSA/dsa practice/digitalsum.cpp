#include<iostream>
using namespace std;
int digital_root(int num)
{
    int sum=0;
    if(num<10)
        return num;
    while (num>0)
    {
    sum=sum+num%10;
    num=num/10;
    }
    return digital_root(sum);
}
int main()
{
  int s=digital_root(1234);
  cout<<s;
  /*int num=1234;
  int sum=0;
  while(num>0)
  {
      sum=sum+num%10;
      num=num/10;
  }
  cout<<sum;*/
}

