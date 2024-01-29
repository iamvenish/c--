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

    int maxi = 2*1e9;
    int mini = -2*1e9;

     int n;
     cin >> n;

     while(n--){
        string s;
        cin >> s;
        int y;
        cin >> y;
        string  result;
        cin >> result;

          if(result == "N"){
            if(s == ">") s = "<=";
            else if(s == "<")s=">=";
            else if(s == ">=")s = "<";
            else s = ">";
          }

          if(s == ">"){
            mini = max(mini , y+1);
          }
          else if(s == "<"){
            maxi = min(maxi , y-1);
          }
          else if(s == ">="){
            mini = max(mini , y);
          }
          else {
            maxi = min(maxi , y);
          }

       
     }
       
      if(mini <= maxi){
        cout << mini  << endl;
      }
      else {
        cout << "Impossible" << endl;
      }

    
    return 0;
}