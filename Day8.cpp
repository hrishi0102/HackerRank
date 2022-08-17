#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n;
    cin>>n;
    string name;
    long number;
    map<string, long> dict;
    while(n--){
        cin>>name >> number;
        dict[name] = number;
        }
    while(cin>>name){
        if (dict.find(name) != dict.end()) {
        cout << name << "=" << dict.find(name)->second << endl;
    } else {
        cout << "Not found" << endl;
    }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
