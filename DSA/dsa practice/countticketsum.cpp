#include<iostream>
#include<vector>
using namespace std;
int timeRequiredToBuy(vector<int>& tickets, int k) {
    int sum=0;
        while(tickets[k]!=0)
        {
             for(int j=0;j<tickets.size();j++)
            {
                if(tickets[j]!=0)
                {
                    sum=sum+1;
                }
            }
            for (int i=0;i<tickets.size();i++)
            {
                tickets[i]=tickets[i]-1;
            }


        }
        return sum;
    }
int main()
{
    vector<int>tickets={2,3,2};
    int k=2;
    int ans=timeRequiredToBuy(tickets,k);
    cout<<ans;
}
