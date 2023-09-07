#include<iostream>
#include<vector>
using namespace std;
int main(){
    //Declare Vector
    vector<int>v;
    //For defined size
    //vector<int>a(5,1)
    
    //Capcity
    cout<<"Size->"<<v.capacity()<<endl;
    
    //Push Back Data
    v.push_back(1);
    cout<<"Size->"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Size->"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Size->"<<v.capacity()<<endl;

   //SIZE
   cout<<"Size of Vector->"<<v.size()<<endl;

   //Access From Specific Location
   cout<<"At Index 2 postion->"<<v.at(2)<<endl;
   //Front
   cout<<"At Front->"<<v.front()<<endl;
   //Back
   cout<<"At Back->"<<v.back()<<endl;

   //For Deleteing Data
   cout<<"Before Poping Data"<<endl;
   for(int i:v){
    cout<<i<<" ";
   }cout<<endl;
   v.pop_back();
   cout<<"Afer Poping "<<endl;
   for(int i:v){
    cout<<i<<" ";
   }cout<<endl;

   //For Clearing Size
   cout<<"Before Clear Size->"<<v.size()<<endl;
   v.clear();
   cout<<"After Clear Size->"<<v.size()<<endl;
}