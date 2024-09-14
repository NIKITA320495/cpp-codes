#include<iostream>
int main()
{
    int a,b,c;
    std::cout<<"enter the value of three numbers";
    std::cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            std::cout<<"largest number="<<a;
        }
        else
        {
            std::cout<<"largest number="<<c;
        }
    }
    else if(b>c)
    {
        if (b>a)
        {
            std::cout<<"largest number="<<b;
        }
        else
        {
            std::cout<<"largest number="<<a;
        }
    }
    else
    {

        std::cout<<"largest number="<<c;
    }

    return 0;
}
