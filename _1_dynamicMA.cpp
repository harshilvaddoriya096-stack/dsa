#include<iostream>
using namespace std;

int main(){

//int arr[100]={1,2,3,4,5};

int size;
cout<<"enter size:";
cin>>size;

int *arr=new int[size];



for(int i=0;i<size;i++){

arr[i]=i+1;
cout<<arr[i]<<"  ";

}


}


