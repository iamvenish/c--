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
class TreeNode{
  public : 

    int val;
    TreeNode*left;
    TreeNode*right;

    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
TreeNode* BuildTree(TreeNode* root){
    int val;
    cin >> val;
    root = new TreeNode(val);

    if(val == -1){
        return NULL;
    }
     cout << "enter the number in left" << endl;
    root->left = BuildTree(root->left);
    cout << "enter the number in right " << endl;
    root->right = BuildTree(root->right);

    return root;
}
void inordered(TreeNode* root , vector<int>&ans){
    if(root == NULL){
        return;
    }

    inordered(root->left , ans);
    ans.push_back(root->val);
    inordered(root->right , ans);
}
int main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
    
     TreeNode* root = NULL;

     root = BuildTree(root);
       vector<int>ans;
       inordered(root , ans);

       for(int i=0 ; i<ans.size() ; i++){
          cout << ans[i] << " ";
       }

       

    
    return 0;
}