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

      int arr[n];

      for(int i=0 ; i<n ; i++){
        cin >> arr[i];
      }

       for(int i=0 ; i<n ; i++){
         
         for(int j=0 ; j<n-i-1 ; j++){

            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
         }
       }


        for(int i=0 ; i<n ; i++){
            cout << arr[i] << " ";
        }

    
    return 0;
}