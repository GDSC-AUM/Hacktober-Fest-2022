#include<bits/stdc++.h>
#include<stdio.h>
#include<limits>
using namespace std;

int main(){

	// Accepting Size of Array 
	int n;
	cin>>n;
	

	// Inserting Array Element 
	int arr[n];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}

	// Searching for Duplicate Element in Array
	int i,j,k;
	for ( i = 0; i < n; i ++)  
    {  
        for ( j = i + 1; j < n; j++)  
        {  
            // use if statement to check duplicate element  
            if ( arr[i] == arr[j])  
            {  
                // delete the current position of the duplicate element  
                for ( k = j; k < n - 1; k++)  
                {  
                    arr[k] = arr [k + 1];  
                }  
                // decrease the size of array after removing duplicate element  
                n--;  
                  
            // if the position of the elements is changes, don't increase the index j  
                j--;      
            }  
        }  
    }  
    for (int i=0;i<n;i++){
    	cout<<arr[i]<<" ";
    }
  return 0;
}
