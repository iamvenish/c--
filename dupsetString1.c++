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
    
      string s;
      cin >> s;

      bool isGood = true;


      for(int i=0 ; i<s.length() ; i++){
         if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            i+=2;
            if(!isGood){
                cout << " ";
            }
            continue;
         }
         else {
            isGood = false;
            cout << s[i];
         }
      }
    return 0;
}