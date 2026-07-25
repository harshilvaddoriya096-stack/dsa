// Selection Sort is an in-place, comparison-based sorting algorithm 
// that works by repeatedly selecting the smallest (or largest) element from an unsorted 
// portion of a list and swapping it into its correct position.

#include<iostream>
using namespace std;


void selectionsort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        int minidx=i;
        for(int j=i+1;j<n;j++){
            if(arr[minidx]>arr[j]){
                minidx=j;
            }

        }
        swap(arr[minidx],arr[i]);
    }
}


int main(){

int n;
cout<<"enter number:";
cin>>n;

int arr[n];
cout<<"enter array element:";
for(int i=0;i<n;i++){
    cin>>arr[i];
}

selectionsort(arr,n);

for(int i=0;i<n;i++){
    cout<<arr[i]<<"\t";
}


}



