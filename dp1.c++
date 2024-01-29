#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<vector<int>>
#define mii map<int,int>
#define int long long
#define pi  3.14159265358979323846264338327950288419
#define pii pair<int,int> 
#define f first
#define s second
#define vpii vector<pair<int , int>>
#define pb push_back
#define st(a) sort(a.begin() , a.end())
#define forn(i,n) for(int i=0 ; i<n ; i++)
#define minpq priority_queue<int , vector<int> , greater<int>>
#define maxpq priority_queue<int>pq;
#define minppq priority_queue<pair<int , int> , vector<pair<int , int>> , greater<pair<int , int>>>
#define maxppq priority_queue<pair<int , int>>
#define minpppq priority_queue<pair<pair<int , int> , int>, vector<pair<pair<int , int> , int>> , greater<pair<pair<int , int> , int>>>
#define maxpppq priority_queue<pair<pair<int , int> , int>>

 // ******************************************************************************************************************************************************
int gcd(int a , int b){if(b>a){return gcd(b , a);} if(b==0)return a; return gcd(b , a%b);}
vector<int> sieve(int n) {int*arr = new int[n + 1](); vector<int> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
 int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
bool cmpfst(pii &a , pii &b){ if(a.f <= a.f)return true;else{return false;}}
bool cmpscnd(pii &a , pii &b){if(a.s<=b.s){return true;}else{return false;}}
bool cmpeql(pii &a , pii &b){if(a.f <= a.f)return true;else if(a.s == b.s){return true;}else return false;}
int solve(int i , int j , string &s , string &s1){
    int n = s.size() , m = s1.size();
    if(i<0 && j<0)return  -1e9;

    if(s[i] == s1[j]){
      return 1 + solve(i-1 , j-1, s , s1);
    }
    
    return max(solve(i-1 , j , s , s1) , solve(i , j-1 , s , s1));
}
int32_t main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);

   string s = "babad";

     int n = s.size();
      string s1  = s;
      reverse(s1.begin() , s1.end());

      int m = s1.size();

     cout <<  solve(n-1 , m-1 , s , s1);

    // cout << s << "  " << s1 << endl;

    //    vector<vector<int>>dp(n+1 , vector<int>(m+1 , 0));

    //    for(int i=1 ; i<=s.size() ; i++){
    //        for(int j=1 ; j<=s1.size() ; j++){

    //            if(s[i-1] == s1[j-1]){
    //                dp[i][j] = 1 + dp[i-1][j-1];
    //            }

    //            dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
    //        }
    //    }

    //     for(int i=0 ; i<dp.size() ; i++){
    //         for(int j=0 ; j<dp.size() ; j++){
    //             cout << dp[i][j] << " ";
    //         }
    //         cout << endl;
    //     }
    return 0;
}