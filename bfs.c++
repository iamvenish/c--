#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<vector<int>>
#define mii map<int,int>
#define int long long
#define pi  3.14159265358979323846264338327950288419
#define pii pair<int,int> 
#define f first
#define s second
#define vpii vector<pair<int , int>>
#define pb push_back
#define st(a) sort(a.begin() , a.end())
#define forn(i,n) for(int i=0 ; i<n ; i++)
#define minpq priority_queue<int , vector<int> , greater<int>>
#define maxpq priority_queue<int>pq;
#define minppq priority_queue<pair<int , int> , vector<pair<int , int>> , greater<pair<int , int>>>
#define maxppq priority_queue<pair<int , int>>
#define minpppq priority_queue<pair<pair<int , int> , int>, vector<pair<pair<int , int> , int>> , greater<pair<pair<int , int> , int>>>
#define maxpppq priority_queue<pair<pair<int , int> , int>>

 // ******************************************************************************************************************************************************
int gcd(int a , int b){if(b>a){return gcd(b , a);} if(b==0)return a; return gcd(b , a%b);}
vector<int> sieve(int n) {int*arr = new int[n + 1](); vector<int> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
 int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
bool cmpfst(pii &a , pii &b){ if(a.f <= a.f)return true;else{return false;}}
bool cmpscnd(pii &a , pii &b){if(a.s<=b.s){return true;}else{return false;}}
bool cmpeql(pii &a , pii &b){if(a.f <= a.f)return true;else if(a.s == b.s){return true;}else return false;}
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int32_t main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
    
       int v;
       cin >> v;

       vector<int>adj[v];

       addEdge(adj , 0,1);
       addEdge(adj , 0,2);
       addEdge(adj , 1,3);
       addEdge(adj , 1,4);
       addEdge(adj , 2,5);
       addEdge(adj , 2,6);
       addEdge(adj , 3,4);
       addEdge(adj , 3,7);
       addEdge(adj , 3,8);
       queue<int>q;

       vector<int>visited(v , 0);
    //    vector<int>store;
       q.push(0);
        cout << 0 << " ";
       visited[0] = 1;

       while(!q.empty()){
        int node = q.front();
        q.pop();

        for(auto it : adj[node]){
            if(!visited[it]){
                cout << it << " ";
                q.push(it);
                visited[it]=1;
            }
        }
       }


   


    return 0;
}