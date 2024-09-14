#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int average(vector<int>myVector) {
        // Find the maximum element
    auto maxElement = max_element(myVector.begin(), myVector.end());
    double sum=0;
    double avg;
    // Find the minimum element
    auto minElement = min_element(myVector.begin(), myVector.end());
     myVector.erase(std::remove(myVector.begin(), myVector.end(), *maxElement), myVector.end());
    myVector.erase(std::remove(myVector.begin(), myVector.end(), *minElement), myVector.end());
    myVector.resize(myVector.size() - 2);
    for(int i=0;i<myVector.size();i++)
    {
        sum+=myVector[i];
    }
    avg=sum/myVector.size();
    return avg;
    }
int main()
{
    vector<int>v={4000,3000,1000,2000};
    int a=average(v);
    cout<<a;
}
