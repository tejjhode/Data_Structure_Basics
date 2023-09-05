#include<iostream>
using namespace std ;
 
 int BinarySearch(int arr[],int size, int key){
    int start=0;
    int end= size-1;
    int mid= (start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key > arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
      return -1;
 }

 int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,17,36};

    int even_index=BinarySearch(even,6,12);
    cout<<"Index of Your Key is "<<even_index<<endl;

    int odd_index=BinarySearch(odd,5,3);
    cout<<"Index of Your Key is "<<odd_index<<endl;
 }