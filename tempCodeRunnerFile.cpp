// Counting Sort is a non-comparison-based integer sorting algorithm that organizes 
// elements by counting the occurrences 
// of each unique value in an input array. 


#include<iostream>
using namespace std;


void countsort(int *a,int n){

    int freq[10000]= {0};
    int maxp=INT_MIN, minp=INT_MAX;

    for(int i=0;i<n;i++){
        freq[a[i]]++;
        maxp=max(maxp,a[i]);
        minp= min(minp,a[i]);
    }
int j=0 ;
    for(int i=minp; i<=maxp ; i++){

        while(freq[i]>0){
            a[j++]=i;
            freq[i]--;
        }

    }





}



int main(){

int n;
cin>>n;

cout<<"enter element:";
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

countsort(arr,n);

for(int i=0;i<n;i++){
    cout<<arr[i]<<  "  ";
}


}






