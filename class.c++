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
class Reactangle{
    public :   //access specifier 
     
     int length;
     int width;


    int area(int x , int y){
        return x*y;
    }
};
int main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);

    Reactangle r1;

    // cin >> c1.length;
    // cin >> c1.name;
    // cin >> c1.price;

    // cout << c1.length << endl;
    // cout << c1.name  << endl;
    // cout << c1.price  << endl;
   
    cin >> r1.length;
    cin >> r1.width;

    cout <<  r1.area(r1.length , r1.width) << endl;




    
    return 0;
}