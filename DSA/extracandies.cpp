#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the elements";
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
       cout<<arr[i];
    }
    int extra;
    cout<<"Enter the value of extra candies";
    cin>>extra;
    int ex[5];
    bool result[5];
    for(int i=0;i<5;i++)
    {
        ex[i]=arr[i]+extra;
    }
     for(int i=0;i<5;i++)
    {
        for(int j=i;j<5;j++)
        {
            if(ex[i]>=arr[j])
            {
                result[i]=true;
            }
            else
            {
                result[i]=false;
            }


    }

}
 for(int i=0;i<5;i++)
    {
        cout<<result[i];
    }
}
