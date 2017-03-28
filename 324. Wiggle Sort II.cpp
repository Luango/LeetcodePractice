#Given an unsorted array nums, reorder it such that nums[0] < nums[1] > nums[2] < nums[3]....

#Example:
#(1) Given nums = [1, 5, 1, 1, 6, 4], one possible answer is [1, 4, 1, 5, 1, 6].
#(2) Given nums = [1, 3, 2, 2, 3, 1], one possible answer is [2, 3, 1, 3, 1, 2].

void wiggleSort(vector<int>& nums) {
    vector<int> sorted(nums);
    sort(sorted.begin(), sorted.end());
    for(int i=nums.size()-1,j=0,k=i/2+1;i>=0;i--)
        nums[i]=sorted[i&1 ? k++ : j++];
}