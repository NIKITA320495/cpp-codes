#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter how many lines you want to enter: ";
    cin>>n;
    cin.ignore(); // Consume the newline character left in the input buffer

    char lines[n][1000]; // Assuming a maximum line length of 1000 characters for each line

    for (int i = 0; i < n; i++) {
        cout<<"Enter a line: ";
        cin.getline(lines[i], 1000);
    }
    char*PAR[n];

    // Print the lines
    for (int i = 0; i < n; i++) {
        cout<<"Line "<<i + 1<<": "<<lines[i]<<endl;
        PAR[i]=lines[i];
    }
     for (int i = 0; i < n; i++) {
        cout<<"Line "<<i + 1<<": "<<PAR[i]<<endl;
}
}
