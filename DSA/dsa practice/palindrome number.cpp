#include<iostream>
using namespace std;
bool ispalindrome(int num)
{
    int rev;
    int quo;
    int rem;
    int num1=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        quo=num/10;
        num=quo;
    }
    return(rev==num1);
}
int main()
{
    bool x=ispalindrome(121);
    cout<<x;
}
