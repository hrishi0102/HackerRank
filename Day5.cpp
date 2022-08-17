#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=10; i++){
        int answer = n*i;
        cout <<n<<" "<<"x"<<" "<<i<<" "<<"="<<" "<<answer<< endl;
    }
    return 0;
}
