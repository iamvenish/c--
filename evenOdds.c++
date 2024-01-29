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
    
        int n , k;
        cin >> n >> k;

        int cnt=1;
        vector<int>ans;

        while(cnt<=n){
            if(cnt&1)
                ans.push_back(cnt);
                cnt++;
        }
        

    
    return 0;
}