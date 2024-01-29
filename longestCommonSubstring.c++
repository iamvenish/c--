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


    //     string s1  = "abcd";
    //     string s2 = "abzd";

   
   
    //    int n = s1.size();
    //    int m = s2.size();


    //    vector<vector<int>>dp(n+1 , vector<int>(m+1 , 0));
    //     int ans=0;
    //    for(int j=0 ; j<=m ; j++)dp[0][j] = 0;
    //    for(int i=0 ; i<=n ; i++)dp[i][0] = 0;

    //     for(int i=1 ;i<=n ; i++){
    //         for(int j=1 ;j<=m ; j++){
    //             if(s1[i-1] == s2[j-1]){
    //                 dp[i][j] = 1 + dp[i-1][j-1];
    //                 ans = max(ans , dp[i][j]);
    //             }
    //             else {
    //                 dp[i][j] = 0;
    //             }
    //         }
    //     }
    
    //     cout << ans  << endl;


        /*
           optimization  */
          string s1  = "abcd";
        string s2 = "abzd";

   
   
       int n = s1.size();
       int m = s2.size();
         int ans=0;
           vector<int>prev(m+1 , 0) , curr(m+1 , 0);

          for(int i=1 ;i<=n ; i++){
            for(int j=1 ;j<=m ; j++){
                if(s1[i-1] == s2[j-1]){
                    curr[j] = 1 + prev[j-1];
                    ans = max(ans , curr[j]);
                }
                else {
                   curr[j] = 0;
                }
            }
             prev = curr;
        }
    
        cout << ans  << endl;
        
        
        
        
        
        
        

    
    return 0;
}