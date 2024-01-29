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
      
     vector<int>arr(n);

     for(int i=0 ; i<n ; i++){
      cin  >> arr[i];
     }

    //   set<int>s;
    //  vector<int>result;
    //   for(int i=0 ; i<n ; i++){
    //     s.insert(arr[i]);
    //   }

    //    for(auto i : s){
    //      result.push_back(i);
    //    }

    //    for(int i=0 ; i<result.size() ; i++){
    //     cout << result[i] << " ";
    //    }
     

        // second approach 

        map<int , int>mp;
        vector<int>result;
        for(int i=0 ; i<n ; i++){
          mp[arr[i]]++;
        }

        for(auto it:mp){
           result.push_back(it.first);
        }

        for(int i=0 ; i<result.size() ; i++){
          cout << result[i] << " ";
        }
  return 0;
}