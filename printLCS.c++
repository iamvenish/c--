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
     
        string s1  = "abcde";
        string s2 = "bdgek";

   
   
       int n = s1.size();
       int m = s2.size();


       vector<vector<int>>dp(n+1 , vector<int>(m+1 , 0));

       for(int j=0 ; j<=m ; j++)dp[0][j] = 0;
       for(int i=0 ; i<=n ; i++)dp[i][0] = 0;

        for(int i=1 ;i<=n ; i++){
            for(int j=1 ;j<=m ; j++){
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else {
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }

        int len = dp[n][m];

        string result = "";

        for(int i=0 ; i<len ; i++){
            result+= '$';
        }

        int index = len-1;
        int i=n , j=m;

        while(i>0 && j>0){
            if(s1[i-1] == s2[j-1]){
                result[index] = s1[i-1];
                index--;
                i--;
                j--;
            }
            else if(dp[i-1][j] > dp[i][j-1]){
                i--;
            }
            else {
                j--;
            }
        }

        cout << result;
    return 0;
}