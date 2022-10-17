class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int total = 0;
		// find total of array
        for(auto i : nums) {
            total += i;
        }
        int left=0, right = total;
		// make a for loop to traverse array
        for(int i=0; i<nums.size(); i++) {
			// reduce right side
            right-=nums[i];
			// check left and right same or not
            if(left == right) return i;
			// increase left with currrent number
            left+=nums[i];
        }
        // check for the second rule
        if(total-nums[0] == 0 || total-nums[nums.size()-1] == 0) {return 0;}
        
        return -1;
        
    }
};


