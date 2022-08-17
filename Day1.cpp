#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int j;
    double e;
    string p;
    
    // Read and save an integer, double, and String to your variables.
    cin>>j;
    cin>>e;
    getline(cin, p);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    int sum = i + j;
    cout<<sum<<endl;
    // Print the sum of the double variables on a new line.
    double sum1 = d + e;
    cout<<sum1<<endl;
    
    cout<<p<<endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;