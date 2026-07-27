
#include<iostream>
using namespace std;

int daigonal(int mat[][4],int n){

int sum=0;

for(int i=0;i<n;i++){
    sum+=mat[i][i];
    if(i!=n-i-1){
        sum+=mat[i][n-i-1];
    }
}

cout<<"sum is:"<<sum;
return sum;

}

int main(){

int arr[4][4]={
    {1,2,3,4},
    {5,6,7,8},
    {8,9,10,11},
    {12,13,14,15}
};

int sump=0,sums=0;

for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        if(i==j){
            sums+=arr[i][j];
        }
        if(j==3-i){
            sums+=arr[i][j];
        }
    }
}


int sum=sump+sums;
cout<<"sum of giagonal is:"<<sum;
daigonal(arr,4);
return 0;

}



