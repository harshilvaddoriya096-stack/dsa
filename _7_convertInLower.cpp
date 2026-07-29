// conver string to lower case

#include<iostream>
#include<string.h>
using namespace std;

void tolower(char mat[],int size){



for(int i=0;i<size;i++){
    char ch=mat[i];
    if(ch>='a'&&ch<='z'){
        continue;
    }else{
        mat[i]=ch-'A'+'a';
    }
}


}

int main(){

char arr[]="HARSHIL";

tolower(arr,strlen(arr));

cout<<arr;

return 0;


}





