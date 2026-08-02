#include<iostream>
using namespace std;

void fun(){

int size;
cin>>size;

int *ptr=new int[size];

for(int i=0;i<size;i++){
    cin>>ptr[i];
    cout<<ptr[i]<<" ";
}

 delete[] ptr;


}


int main(){

fun();


}


