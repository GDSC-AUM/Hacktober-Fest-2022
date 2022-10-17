class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        for(int i=1;i<arr.size()-1;++i){
            if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
                return i;
            }
        }
        if(arr[0]>arr[arr.size()-1]) return 0;
        return arr.size()-1;
    }
};
