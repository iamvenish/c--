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
// struct Venish
// {
//     int age;
//     string name;
//     double height;
// };

typedef  struct GFG{
       int age;
    string name;
    double height;
} Venish;

int main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
    
     Venish guru;

    cin >> guru.age;
    cin >> guru.name;
    cin >> guru.height;

    cout << guru.age << endl;
    cout << guru.name << endl;
    cout << guru.height << endl;



    
    return 0;
}