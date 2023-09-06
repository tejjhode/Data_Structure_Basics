#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;
}
void Bubble_Sort(int arr[],int n){
    for(int i=1;i<n;i++){
        for (int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}
int main(){
    int data[6]={12,5,8,6,3,9};
    int size =sizeof(data)/sizeof(data[0]);
    Bubble_Sort(data,6);
    for(int i=0;i<size;i++){
        cout<<data[i]<<" ";
    }
}