#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int> > triplet(vector<int> nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<vector<int> >ans;
    for(int i = 0; i < n; i++) {
        if(i > 0 && nums[i] == nums[i-1]) continue;

        int j = i + 1, k = n - 1;

        while(j < k) {
            int sum = nums[i] + nums[j] + nums[k];

            if(sum < 0) j++;
            else if(sum > 0) k--;
            else {
               vector<int> temp;
            temp.push_back(nums[i]);
            temp.push_back(nums[j]);
            temp.push_back(nums[k]);
            ans.push_back(temp);

                j++;
                k--;

                while(j < k && nums[j] == nums[j-1]) j++;
                while(j < k && nums[k] == nums[k+1]) k--;
            }
        }
    }
    return ans;
}


int main() {
    vector<int> nums;
     nums.push_back(-1);
     nums.push_back(1);
     nums.push_back(2);
     nums.push_back(3);
     nums.push_back(4);
     nums.push_back(-2);

    vector<vector<int> > ans = triplet(nums);

    for(int i = 0; i < ans.size(); i++) {
    cout << "[ ";
    for(int j = 0; j < ans[i].size(); j++) {
        cout << ans[i][j] << " ";
    }
    cout << "]";
}
return 0;
    }
    

