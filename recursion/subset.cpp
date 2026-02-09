#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void findsubset(vector<int> &arr, vector<int> &ans, int i) {

    if(i == arr.size()){
        for(int val : ans){
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    //  Include
    ans.push_back(arr[i]);
    findsubset(arr, ans, i+1);

    // Backtrack
    ans.pop_back();

    //  Skip duplicates
    int index = i + 1;
    while(index < arr.size() && arr[index] == arr[index-1]){
        index++;
    }

    //  Exclude
    findsubset(arr, ans, index);
}

int main() {

    vector<int> arr = {1,2,2};

    // Sort once
    sort(arr.begin(), arr.end());

    vector<int> ans;

    findsubset(arr, ans, 0);

    return 0;
}
