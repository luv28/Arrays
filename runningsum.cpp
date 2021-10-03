// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

// Return the running sum of nums.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    
    if(sizeof(a)==1){
        cout<<a[sizeof(a)-1];
    }
    else{
        for(int i=0;i<n;i++){
            sum+=a[i];
            a[i]=sum;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    
    return 0;
}
