class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        for(int n:nums){

//take elements 1 by 1 and make them positive if negative
            n=abs(n);
//go to element at ith index and and from that value go to that index by reducing its value by 1 as indexing start from 0;
            if(nums[n-1]>0){
                nums[n-1]*=-1;//make it negative 
            }
            else{
                result.push_back(n);
//if no. is already negative means that element is twice in the array
            }
        }
        return result;
    }
};

