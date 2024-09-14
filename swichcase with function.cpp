#include<iostream>
#include<cmath>
using namespace std;
int cube()
{
    int side;
    int choice1;
    cout<<"1.Total surface area"<<"\n";
    cout<<"2.Curved surface area"<<"\n";
    cout<<"3.Volume"<<"\n";
    cout<<"Enter your choice";
    cin>>choice1;
    cout<<"enter side"<<"\n";
    cin>>side;

    switch(choice1)
    {
        case 1:int tsa1;
               tsa1=6*side*side;
               cout<<"Total surface area of cube"<<tsa1;
               break;
        case 2:int csa1;
               csa1=4*side*side;
               cout<<"total surface area of cuboid"<<csa1;
               break;
        case 3:int volume;
               volume=side*side*side;
               cout<<"volume of cube"<<volume;
               break;
        default:cout<<"wrong choice";
     }
}
int cuboid()
{
     int l;
     int b;
     int h;
     int choice3;
    cout<<"1.Total surface area"<<"\n";
    cout<<"2.Curved surface area"<<"\n";
    cout<<"3.Volume"<<"\n";
    cout<<"Enter your choice";
    cin>>choice3;
    cout<<"enter length"<<"\n Enter breadth "<<"\n enter height";
    cin>>l>>b>>h;
    switch(choice3)
    { int tsa2;
    int csa2;
    int v2;
        case 1:tsa2=2*(l*b+b*h+l*h);
               cout<<"Total surface area of cuboid is"<<tsa2;
               break;
        case 2:csa2=2*l*h+2*b*h;
               cout<<"Lateral surface area of cuboid is"<<csa2;
               break;
        case 3:v2=l*b*h;
               cout<<"volume of cuboid is"<<v2;
        default:cout<<"wrong choice";
     }
}
int cone()
{
    int b ;
    int h;
    double l;
    int r;
    int v3;
    int choice4;
    cout<<"1.Slant height"<<"\n";
    cout<<"2.Total surface area"<<"\n";
    cout<<"3.Curved surface area"<<"\n";
    cout<<"4.Volume"<<"\n";
    cout<<"Enter your choice";
    cin>>choice4;
    cout<<"Enter base"<<"\n Enter height"<<"\nEnter radius";
    cin>>b>>h>>r;
    int csa3;int tsa3;

    switch(choice4)
    {

        case 1: l=sqrt(b**2+h**2)
                cout<<"Slant height "<<l;
                break;
        case 2: tsa3=3.14*r*(r+l)
                cout<<"total surface area"<<tsa3;
                break;
        case 3: csa3=3.14*r*l;
                cout<<"lateral surface area"<<csa3;
               break;
        case 4:v3=3.14*r*r*l;
                cout<<"volume"<<v3;
               break;
        default:cout<<"wrong choice";
     }
}
int sphere()
{
    int r2;
    int choice5;
    cout<<"1.Total surface area"<<"\n";

    cout<<"2.Volume";<<"\n";
    cout<<"Enter your choice";
    cin>>choice5;
    cout<<"enter radius";
    cin>>r2;
    switch(choice5)
    { int tsa4;
    int csa4;
    int v4;
        case 1:tsa4=4*3.14*r2*r2;
               cout<<"Total surface area of sphere is"<<tsa4;
               break;

        case 2:v2=4/3*3.14*r*r*r;
               cout<<"volume of cuboid is"<<v2;
               break;
        default:cout<<"wrong choice";
     }

}
int main()
{
    cout<<"choose a solid";
    cout<<"1.cube"<<"\n";
    cout<<"2.cuboid"<<"\n";
    cout<<"3.cone"<<"\n";
    cout<<"4.sphere"<<"\n";
    int choice; int choice2;
    switch(choice)
    {
        case 1: cube();
                break;

        case 2: cuboid();
                break;
        case 3: cone();
                break;
        case 4:sphere();
                break;
        default:cout<<"wrong choice":
}
