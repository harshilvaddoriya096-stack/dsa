// insertion sort is a simple, comparison-based sorting algorithm that builds a final sorted 
// array or list one element at a time

#include<iostream>
using namespace std;


void insertionsort(int *arr,int n){

    for(int i=0;i<n;i++){
        int temp=arr[i];
        int prev=i-1;

        while(prev>=0 && arr[prev]>temp){
            swap(arr[prev] ,arr[prev+1]);
            prev--;
        }
        arr[prev+1]=temp;

    }

}


int main(){

    int n;
    cout<<"enter number of element :";
    cin>>n;

    int arr[n];
    cout<<"enter elemenent:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    insertionsort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }


}


