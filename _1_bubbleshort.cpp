
//Bubble Sort is a basic sorting algorithm that 
//repeatedly steps through a list, compares adjacent
//elements, and swaps them if they are in the wrong order.


#include<iostream>
using namespace std;

void bubblesort(int *a,int n){

    bool check =false;

    for(int i=0;i<n-1;i++){
        cout<<"outer";
        for(int j=0;j<n-i-1;j++){
            cout<<"inner";
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                check=true;
            }
        }
        if(!check){
            return;
        }
    }

}


int main(){
    int n;
    cout<<"enter size of array number:";
    cin>>n;
    int arr[n];
    cout<<"enter array element:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    bubblesort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }

}



