#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> intersection(vector<int> nums1, vector<int> nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int>arr;
        if(n1<n2)
        {
            for(int i=0;i<n1;i++)
            {
               if (find(arr.begin(), arr.end(), nums1[i]) == arr.end()) {
                for (int j = 0; j < n2; j++) {
                    if (nums1[i] == nums2[j]) {
                        arr.push_back(nums1[i]);
                        break;
                    }
                }
               }
        }
        }
        else
        {
             for(int i=0;i<n2;i++)
            {
               if (find(arr.begin(), arr.end(), nums2[i]) == arr.end()) {
                for (int j = 0; j < n1; j++) {
                    if (nums2[i] == nums1[j]) {
                        arr.push_back(nums2[i]);
                        break;
                    }
                }
               }
        }
        }
        return arr;

}
int main()
{
    vector<int>a=intersection({4,9,5,8,2},{9,2,8});
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i];
    }
}
