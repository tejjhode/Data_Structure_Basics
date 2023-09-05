#include <iostream>
using namespace std;
 //Craete A Node
 struct Node{
    int data;
    struct Node* next;
 };
 void insertAtbeginning(struct Node**head_ref,int new_data){
    //Allocate to memory
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    //Insert Data
    new_node ->data=new_data;
    new_node->next = (*head_ref);

    //move to head
    (*head_ref)=new_node;
 }

 //Insert After

 void insertAfter(struct Node * prev_node,int new_data){
 if(prev_node==NULL){
    cout<<"The given perious data cannot be NULL";
    return;
 }
 struct Node * new_node=(struct Node*)malloc(sizeof(struct Node));
 new_node->data=new_data;
 new_node->next=prev_node->next;
 prev_node->next=new_node;
 }
 // Insert at The end
 void insetAtEnd(struct Node ** head_ref, int new_data){
    struct Node * new_node =(struct Node *)malloc (sizeof(struct Node));
    struct Node * last =*head_ref;
    new_node->data = new_data;
    new_node->next=NULL;
 if(*head_ref==NULL){
    *head_ref=new_node;
    return;
 }
 while(last->next!=NULL)last=last->next;
 last->next=new_node;
 return;
 }
 // Delete a node
 void deleteNode(struct Node ** head_ref, int key){
    struct Node * temp = *head_ref,*prev;
    if(temp!=NULL && temp->data == key){
        *head_ref=temp->next;
        free(temp);
        return;
    }
 }
  void printlist(struct Node* node){
    while(node!=NULL){
    cout<<node->data<<" ";
    node=node->next;
    }
 }
 

 int main(){
    struct Node* head=NULL;
    insetAtEnd(&head,8);
    insertAtbeginning(&head,2);
    insertAtbeginning(&head,10);
    insertAfter(head->next,6);
    cout<<"Linked List: ";
    printlist(head);
    cout<<"After Deleting ";
    deleteNode(&head,10);
    printlist(head);
 }