#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    // Complete this function
    vector <int> v;
    stringstream ss(str);
    char ch;int a;
    while(ss >>a){
        v.push_back(a);
        ss>>ch;
        
    }
    return v;
    
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}