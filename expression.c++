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

     int a , b , c;
     cin >> a >> b >> c;   
    
    vector<int>ans;
    
     ans.push_back(a+b*c);
     ans.push_back(a*b+c);
     ans.push_back(a*b*c);
     ans.push_back((a+b)*c);
     ans.push_back(a*(b+c));
     ans.push_back((a*b)+c);
     ans.push_back(a+(b*c));
     ans.push_back(a+b+c);
    
     int maxi = INT_MIN;
     for(int i=0 ; i<ans.size() ; i++){
        maxi = max(maxi , ans[i]);
     }

      cout << maxi << endl;


    
    return 0;
}