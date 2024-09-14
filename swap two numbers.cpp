#include<iostream>
int main()
{
    int a,b,c;
    std::cout<<"enter the value of a";
    std::cin>>a;
    std::cout<<"enter the value of b";
    std::cin>>b;
    a=b;
    b=c;
    c=a;
    std::cout<<"value of a after swaping:"<<a;
    std::cout<<"\nvalue of b after swaping:"<<b;
    return 0;

}
