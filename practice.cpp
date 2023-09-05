#include<iostream>
using namespace std;

struct node{
int data;
struct node*next;
};

void insertatbeigning ( struct node**head , int value){
   struct node * newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value ; 
    newnode->next=(*head);
    (*head)=newnode; 
    

}
void display ( struct node*node){
   while(node!= NULL ){
      cout<<node->data<<" ";
      node=node->next;
   }
}
int main(){
   struct node *head=NULL;
   insertatbeigning( &head,2 );
   insertatbeigning(&head,5);
   insertatbeigning(&head,59);
    display(head);

    
}
