#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        
        for(auto i : nums){
            m[i]++;
        }
        for(auto i:m){
            if(i.second>1){
                return true;
            }
        }
        return false;
        
       
        
    }
};
int main(){
    Solution s;
    vector<int>nums={1,2,3,1};
    bool x = s. containsDuplicate(nums);
    cout<<x;
    return 0;
}
