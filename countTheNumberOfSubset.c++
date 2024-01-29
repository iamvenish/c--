#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<vector<int>>
#define mii map<int,int>
#define ll long long
#define pi  3.14159265358979323846264338327950288419
#define pii pair<int,int> 
#define f first
#define s second
#define vpii vector<pair<int , int>>
#define pb push_back
int solve(vector<int>&nums , int index , int target){
   if(target == 0)return 0;
   if(index == 0)return (nums[0] == target);

    // recursion take notTake 

    int notTake = solve(nums , index-1 , target);

    int take=0;
    if(nums[index] <= target){
        take = solve(nums , index-1 , target-nums[index]);
    } 

    return notTake + take; 
   
}

int main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
    
         int n , target;
         cin >> n >> target;

         vector<int>nums;

         for(int i=0 ; i<n ; i++){
             cin >> nums[i];
         }

         // solution 

         return solve(nums , n-1 , target);
    
    return 0;
}