#include <bits/stdc++.h>
using namespace std;


struct node{
    
    
    int data;
    struct node *prev;
    struct node *next;
    
};

int main() {
    node* head_node = new node();
    
    head_node->data = 5;
    
    head_node->prev = NULL;
    
    node* second_node = new node();
    
    second_node->data = 4;
    
    second_node->prev = head_node;
    
    second_node->next = NULL;
    
    
    head_node->next = second_node;
    
   
    while(head_node != NULL){
        cout<<head_node->data<<" ";
        head_node = head_node->next;
    }
    
    return 0;
}
