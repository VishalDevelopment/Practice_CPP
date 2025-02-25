
#include <iostream>
using namespace std;

// void PrintName(int a){
//     if(a==0) return;
//     cout<<"Hello Vishal"<<endl;
//     PrintName(a-1);
// }


// void nto1(int n){
//     if (n<1)
//     {
//         return;
//     }
//     cout<<n<<endl;
//     nto1(n-1);
// }

// void onetoN(int a , int b){ // 1, 3
//     if (a > b)
//     {
//         return;
//     }
//     onetoN(a+1,b); // 2,3
//     cout<<a<<endl;
// }


// void onetoN(int a , int b){ //3,3
//     if (a > b)
//     {
//         return;
//     }
//     cout<<a<<endl;
//     onetoN(a+1,b); // 4,3
// }


// int sumN(int n){
//     if (n==0)
//     {
//         return 0;
//     }
//    if (n==1)
//    {
//     return 1;
//    }
//     return n+sumN(n-1);
// }

// 0 , 1 ,1 , 2 ,3,5,8

// int fibo(int n){

//     if(n==1) return 0;
//     if(n==2) return 1;

//     return fibo(n-1) + fibo(n-2);
// }

// int factorial(int n){
// if (n==0) return 0;
// if(n==1) return 1;
// return n*factorial(n-1);
// }

void Nto1(int i ,int n){
    if(n<i) return ;
    cout<<i<<endl;
    
     Nto1(i+1,n);
}
int main(){
    // int val = Nto1(3);
    int n =5;
    Nto1(1,n);

    return 0;
}