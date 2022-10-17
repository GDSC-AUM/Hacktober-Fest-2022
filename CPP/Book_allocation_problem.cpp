#include <bits/stdc++.h>
bool isPosible(vector<int> arr, int n, int m,int mid){
    int studentCount = 1;
    int pageSum = 0;
    for(int i= 0;i<arr.size();i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }else{
            studentCount++;
            if(studentCount > m || arr[i] > mid ){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}
int allocateBooks(vector<int> arr, int n, int m) {
    // Write your code here.
    int s=0,sum=0;
    for(int i=0;i<arr.size();i++){
        sum += arr[i];
    }
    int e = sum;
    int mid = s +(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(isPosible(arr,n,m,mid)){
            ans = mid;
            e = mid -1;
        }
        else{
            s = mid +1;
        }
     mid = s +(e-s)/2;   
    }
    return ans;
    
}