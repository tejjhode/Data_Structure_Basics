#include<iostream>
using namespace std;
#define SIZE 10
void push(int);
void pop();
void Display();
int stack[SIZE],top=-1;
int main(){
    int value,choice;
    while(1){
        cout<<"MENU:- \n 1.Push \n 2.Pop \n 3.Display \n 5.Exit "<<endl;
        cin>>choice;
        switch(choice){
           case 1: cout<<"Enter the Value to be insert "<<endl;
            cin>>value;
            push(value);
            break;
            case 2: pop();
            break;
            case 3: Display();
            break;
            case 4: exit(0);
            default:
            cout<<"Wrong Option"<<endl;
        }
    }
}
void push(int value){
    if(top== SIZE-1)
    cout<<"Stack is FULL"<<endl;
    else{
        top ++;
        stack[top]=value;
        cout<<"Sucessfully Inserted"<<endl;
    }
}
void pop(){
    if(top==-1)
    cout<<"Stack is EMPTY"<<endl;
    else{
        cout<<"Deleted: ",stack[top];
        top--;
    }
}
void Display(){
    if(top==-1)
    cout<<"Stack is EMPTY"<<endl;
    else{
        int i;
        cout<<"stack element are:-"<<endl;
        for(i=top;i>0;i--)
        cout<<stack[i]<<endl;
    }
    }