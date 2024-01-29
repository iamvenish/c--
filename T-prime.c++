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
bool temp[1000001];
int32_t main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
     
       for(int i=2 ; i<=1e6 ; i++){
          temp[i]=1;
       }
   
      for(int i=2 ; i*i<=1e6 ; i++){
        if(temp[i]){ 
            for(int j=i*i ; j<=1e6 ; j+=i){
                temp[j]=0;
            }
        }
      }


      map<int , int>mp;

      for(int i=2 ; i<=1e6 ; i++){
        if(temp[i]){
            ll int x = i*i;
            mp[x] = 1;
        }
      }

      int n;
      cin >> n;

      int a[n];

      for(int i=0 ; i<n ; i++){
        cin >> a[i];
      }

      for(int i=0 ; i<n ; i++){
        if(mp[a[i]] == 1){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
      }


    
    return 0;
}