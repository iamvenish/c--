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
    
     int t;
     cin >> t;

     while(t--){
       int n;
       cin >> n;

         int i = 2;
           int cnt=0;
         while(i<n){
            
            if(n%i == 0){
                cnt++;
            }
            i++;
         }
         

         if(cnt>0){
             cout << "NO" << endl;
         }
         else{
              cout << "YES" << endl;
         }
     }
  
  return 0;
}