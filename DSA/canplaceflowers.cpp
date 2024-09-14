#include<iostream>
#include<vector>
using namespace std;
 bool canPlaceFlowers(vector<int>& flowerbed, int n) {
     int c=0;
    for(int i=0;i<flowerbed.size();i++)
    {
        if((flowerbed[i]==0)&&(flowerbed[1+i]==0))
        {
            flowerbed[i+1]=1;
            c++;
        }
    }
    if(c>=n)
    {
        return true;
    }
    else
    {
        return false;
    }
    }
int main()
{
    vector<int>flowerbed = {1,0,0,0,1};
    int n = 1 ;
    bool ans=canPlaceFlowers(flowerbed,n);
    cout<<ans;

}
