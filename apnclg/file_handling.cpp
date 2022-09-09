#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <fstream>
// classes:
//    1. fstreambase
//     2. ifstream --> derived from fstreambase class
//     3. ofstream --> derived from fstreambase class
int main(){
    cout<<"Enter your name "<<endl;
    char arr[100];
    cin.getline(arr,100);

    // we can use fstream also
    ofstream myFile("kunal.txt",ios::app);
    myFile<<arr;
    myFile.close();
    cout<<"File creation done!"<<endl;

    cout<<"Reading started!"<<endl;
    char aray[100];
    ifstream obj("kunal.txt");
    obj.getline(aray,100);
    cout<<"Read succesfully "<<endl;
    cout<<aray<<endl;

    return 0;
}