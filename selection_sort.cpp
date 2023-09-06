#include<iostream>
using namespace std;

void SelectionSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
       int min=i;
       for(int j=i+1;j<size;j++){
        if(arr[min]>arr[j])
        min = j;
       }
       int temp = arr[min];
       arr[min]=arr[i];
       arr[i]=temp;
    }
    
}
int main(){
    int sample[6]={10,5,2,6,9,4};
    int size= sizeof(sample)/sizeof(sample[0]);
    SelectionSort(sample,6);
    for(int i=0;i<size;i++){
        cout<<sample[i]<<" ";
    }
}
