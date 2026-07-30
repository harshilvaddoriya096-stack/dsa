#include<iostream>
using namespace std;

// tanspose the 2D array/matrix/table

void tanspose(int arr[][2],int n,int m){

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[j][i];
    }
    cout<<endl;
}

}

int main(){

int mat[4][2]={
    {1,2},
    {3,4},
    {5,6},
    {7,8}
};

tanspose(mat,4,2);


}









