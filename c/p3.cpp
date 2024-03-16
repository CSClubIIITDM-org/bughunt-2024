#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> ans(nums.size());
    ans[0] = 1;
    for(int i = 1; i < nums.size(); i++) {
        ans[i] = ans[i - 1] * nums[i - 1];
    }
    int r = 1;
    for(int i = nums.size() - 2; i >= 0; i--) { // Corrected loop starting index
        r *= nums[i + 1]; // Update r before multiplication
        ans[i] *= r;
    }
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = productExceptSelf(nums);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
