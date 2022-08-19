#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);
    try {
        int x = stoi(S);
        cout<<x;
        return 0;
    } 
    catch (exception) {
        cout<<"Bad String"<<endl;;
    }
}
