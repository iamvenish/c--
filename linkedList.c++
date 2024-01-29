#include <bits/stdc++.h>
using namespace std ;
struct node{
       
    int data;
    struct node *next;
};
void push(struct node** head , int node_data){
    struct node*NewNode = new node;
    NewNode->data = node_data;
    NewNode->next = (*head);
    (*head) = 
}
int main()
{
    

    
    return 0;
}