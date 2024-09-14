#include<iostream>
#include "hero.cpp"
using namespace std;
/*class hero {
//properties
char name[20];
int rn;
};*/
int main()
{
    hero h1;
    cout<<sizeof(h1);
    cout<<h1.name;
    cout<<h1.rn;
}
