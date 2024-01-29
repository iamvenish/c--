#include <bits/stdc++.h>
using namespace std ;
int solve(int arr1[] , int arr2[] , int n , int m ){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ;){
            if(arr1[i] < arr2[j]){
                return arr2[j] - arr1[i];
            }
            else if(arr1[i]== arr2[j]){
               return 0;
            }
            else {
                j++;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
     int arr1[100];
    for(int i=0 ; i<n ; i++){
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    int arr2[100];
    for(int i=0 ; i<m ; i++){
        cin >> arr2[i];
    }

    cout << solve(arr1 , arr2 , n , m);
    




    

    
    return 0;
}