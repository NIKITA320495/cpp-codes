#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter how many paragraph you want to enter: ";
    cin>>n;
    char p[n][1000]; // Assuming a maximum line length of 1000 characters for each line
    cin.ignore();
    for (int i = 0; i < n; i++) {
        cout<<"Enter a paragraph:";
        cin.getline(p[i], 1000);
    }
    char *PAR[n];

    for (int i = 0; i < n; i++) {
        cout<<"paragraph"<<i + 1<<": "<<p[i]<<endl;
        PAR[i]=p[i];
    }
     for (int i = 0; i < n; i++) {
        cout<<PAR[i][i]<<endl;
}
}
