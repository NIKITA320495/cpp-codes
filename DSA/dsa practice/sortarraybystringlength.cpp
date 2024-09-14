#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector <string> sortarr(std::vector<std::string>& arr) {
    for (std::size_t i = 0; i < arr.size(); ++i) {
        for (std::size_t j = i + 1; j < arr.size(); ++j) {
            if (arr[j].length() < arr[i].length()) {
                std::swap(arr[j], arr[i]);
            }
        }
    }
    return arr;
}

int  main()
{
    vector<string>arr;
    arr.push_back("apple");
    arr.push_back("banana");
    arr.push_back("kiwi");
    sortarr(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }
}
