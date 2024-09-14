#include<iostream>
using namespace std;
int main()
{
    int choice;
    int side;
    int length;int breadth; int a1;int a2;int a3;int a4; int radius;
    cout<<"SHAPE";
    cout<<"1.SQUARE";
    cout<<"2.RECTANGLE";
    cout<<"3.CIRCLE";
    cout<<"4.triangle";
    cout<<"Enter your choice";
    cin>>choice;
    switch (choice)
    {
        case 1:cout<<"enter the side";
                cin>>side;
                a1=side*side;
                cout<<"area="<<a1<<"square unit";
                break;
        case 2:cout<<"enter length";
                cin>>length;
                cout<<"enter breadth";
                cin>>breadth;
                a2= length*breadth;
                cout<<"area="<<a2<<"square unit";
                break;
        case 3: {cout<<"enter radius";
                cin>>radius;
                int pi=3.14;
                a3=pi*radius*radius;
                cout<<"area="<<a3<<"square unit";
                break;
        }
        case 4:{int base;int height;
                cout<<"enter base";
                cin>>base;
                cout<<"enter height";
                cin>>height;
                a4=0.5*base*height;
                cout<<"area="<<a4<<"square unit";
                break;}
        default:cout<<"wrong choice";


    }
}
