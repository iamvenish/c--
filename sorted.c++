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


int main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
    

     int n;
     cin >> n;

     vector<int>nums(n);

     for(int i=0 ; i<n ; i++){
        cin >> nums[i];
     }

     set<int>s;

     for(int i=0; i<n ; i++){
        s.insert(nums[i]);
     }

     nums.clear();

     for(auto it:s){
        nums.push_back(it);
     }

       // returing the  vector nums

       for(int i=0 ; i<nums.size(); i++){
          cout << nums[i] << " ";
       }

    
    return 0;
}