#include<iostream>
using namespace std;

void change(int arr[]){
arr[2]=100000;
}

int BigNum(int arr[]){
    int greater=0;
    for(int i = 0; i<4; i++){
        if (greater<arr[i])
        {
            greater =arr[i];
           
        }
    }
    return greater;
}


int* reverseArr(int arr[]){
   static int revArr[4];

    for (int i = 0; i <4; i++)
    {
       revArr[i] = arr[3-i];
    }
    
    return revArr;
}

int main(){
int arr[4] = {58,20,50,20};
// int result = BigNum(arr);

// cout<<" Big Number : "<<result;
int* reveArr = reverseArr(arr);

for(int i = 0 ; i<=3;i++){
    cout<<reveArr[i]<<endl;
}
    return 0;
}