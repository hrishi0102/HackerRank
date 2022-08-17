#include <bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
    vector<vector<int>> arr(6, vector<int>(6));
    int max_sum = -1000;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
        
            int temp_sum = 0;
            // top row
            temp_sum += arr[i][j];
            temp_sum += arr[i][j+1];
            temp_sum += arr[i][j+2];
            //middle 
            temp_sum += arr[i+1][j+1];
            //bottom row
            temp_sum += arr[i+2][j];
            temp_sum += arr[i+2][j+1];
            temp_sum += arr[i+2][j+2];

            //if first hourglass, set as max
            if(temp_sum > max_sum){
                max_sum = temp_sum;
           }
        }
    }
    cout<<max_sum;
}
