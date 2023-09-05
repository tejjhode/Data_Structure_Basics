#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node * next;
};
struct Node * addToEmpty(struct Node * last,int data){
    if(last!=NULL) return last;
    // allocate memory  to the new node
    struct Node * new_node=(struct Node*)malloc(sizeof(struct Node));
    //assign data
    new_node->data=data;
    //assign last
    last=new_node;
    //create link to itself
    last->next=last;
    return last;
}
//add to the node
struct Node * addEnd(struct Node* last, int data){
    //check if  the node is empty
    if(last==NULL)return addToEmpty(last,data); 
    //allocate of memory 
    struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
    //assign data
    new_node->data=data;
    new_node->next=last->next;
    last->next=new_node;
    return last;
}
// add node to the front
struct Node* addFront(struct Node* last, int data) {
  // check if the list is empty
  if (last == NULL) return addToEmpty(last, data);

  // allocate memory to the new node
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

  // add data to the node
  newNode->data = data;

  // store the address of the current first node in the newNode
  newNode->next = last;

  // make newNode as head
  last->next = newNode;

  return last;
}
//insert node after
struct Node * addAfter(struct Node*last,int data,int item){
   if(last == NULL) return NULL;
   struct Node * new_node,*p;
   p=last->next;
   do{
    //if the item is found , place new node after it
    if(p->data==item){
        new_node=(struct Node *)malloc(sizeof(struct Node));
        new_node->data=data;
        new_node->next=p->next;
        p->next=new_node;

        //if p is the last node,make new node
        if(p==last)last=new_node;
        return last;
    }
    p=p->next;
   }while(p!=last->next);
   cout<<"\n The given node is present in list"<<endl;
   return last;
}
//delete a node
void deleteNode(struct Node**last,int key){
    // if linkedf list is empty
    if(*last==NULL)return;
    //if the list contain only singly node
    if((*last)->data==key && (*last)->next==*last){
        free(*last);
        *last=NULL;
        return;
    }
    Node *temp=*last,*d;
    //if last is to be deleted
    if((*last)->data==key){
        //find the node before the last node
    while(temp->next!=*last)temp=temp->next;
    //point temp to the next of next node
    temp->next=(*last)->next;
    free(*last);
    *last=temp->next;
    }

    //travel to the node to be detected
    while(temp->next!=*last && temp->next->data!=key){
        temp=temp->next;
    }

    //if node to be detected was found
    if (temp->next->data==key){
        d=temp->next;
        temp->next=d->next;
        free(d);
    }
}
void tranverse(struct Node * last){
    struct Node * p;
    if(last == NULL){
        cout<<"The list is empty "<<endl;
        return;
    }
    p=last->next;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=last->next);
}
int main(){
    struct Node * last =NULL;
    last=addToEmpty(last,6);
    last=addEnd(last,8);
    last=addFront(last,2);

    last=addAfter(last,10,2);

    tranverse(last);

    deleteNode(&last,8);
    cout<<endl;
    tranverse(last);
    return 0;
}