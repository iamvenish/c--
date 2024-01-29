#include <bits/stdc++.h>
#include <thread>
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
void threadFn( mutex & mtx){
        lock_guard<mutex>lock(mtx);
        cout  << "i locked mutex " << endl;
        this_thread::sleep_for(chrono::second(5));
}
int main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
     
     mutex mtx;

     thread th{threadFn , ref(mtx)};

     this_thread::sleep_for(chrono::second(5));

     

    
    return 0;
}