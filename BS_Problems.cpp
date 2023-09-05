#include<iostream>
using namespace std;

int first_occerence(int arr[],int n,int key){
    int s =0;
    int e=n-1;
    int mid = (s+e)/2;
    int ans =-1;
while(s<=e){
    if(arr[mid]==key){
        ans = mid;
        e= mid-1;
    }
    if(key>arr[mid]){
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=(s+e)/2;
}
}
int last_occerence(int arr[],int n,int key){
    int s =0;
    int e=n-1;
    int mid = (s+e)/2;
    int ans =-1;
while(s<=e){
    if(arr[mid]==key){
        ans = mid;
        s = mid+1;
    }
    if(key>arr[mid]){
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=(s+e)/2;
}

}
int main(){
    int first[6]={2,6,8,8,8,10};
    int first_occ = first_occerence(first,6,8);
    int last_occ = last_occerence(first,6,8);
    cout<<"Index Of First Occrence "<<first_occ<<endl;
    cout<<"Index of Last Occerence "<<last_occ<<endl;
    int Total_Occerence=last_occ - first_occ+1;
    cout<<"Total Number Of Occerenece: "<<Total_Occerence<<endl;
}