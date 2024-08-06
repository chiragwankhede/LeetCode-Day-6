#include<iostream>
#include<vector>    
using namespace std;

// Find all duplicates element in an array, the duplicates element are more than one - 


    vector<int> findDuplicates(vector<int>& nums) {
        int n =nums.size();
       
        vector<int> ans;

        for(int i=0;i<n;i++){
             int index = abs(nums[i]);
            if(nums[index - 1] < 0){
                ans.push_back(index);
            }

            nums[index - 1] *= -1;
        }

    
    return ans;
}



int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> duplicates = findDuplicates(nums);

    cout << "Duplicates: ";
    for (int num : duplicates) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}