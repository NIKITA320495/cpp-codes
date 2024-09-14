#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;
vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        int n=deck.size();
        vector<int>result(n,0);
        deque<int>indeces;
        for(int i=0;i<deck.size();i++)
        {
            indeces.push_back(i);
        }
        for(int i=0;i<deck.size();i++)
        {
            int idx=indeces.front();
            indeces.pop_front();
            result[idx]=deck[i];
            if(!indeces.empty()){
            int el=indeces.front();
            indeces.pop_front();
            indeces.push_back(el);
            }
        }
        return result;
    }
int main()
{
    vector<int>d={17,13,11,2,3,5,7};
    vector<int>ans=deckRevealedIncreasing(d);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
}
