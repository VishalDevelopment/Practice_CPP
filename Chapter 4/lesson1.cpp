#include<iostream>
using namespace std;

int pNc(int n , int r){

    int factN = 1;
    int factR = 1;
    int factN_R =1;

    for (int i = n; i >= 1; i--)
    {
        factN =factN*i;
    }
    for(int j =r; j>=1; j--){
        factR= factR*j;
    }
    for(int k =(n-r); k>=1;k--){
        factN_R = factN_R*k;
    }

    cout<<"n! = "<<factN<<endl;
    cout<<"r! = "<<factR<<endl;
    cout<<"(n-r)! = "<<factN_R<<endl;


    return factN/(factR*factN_R);
}


void SwapM1(){

    int a = 10;
    int b = 20;

    cout<<" a : "<<a;
    cout<<" b : "<<b;
    
    int temp =a;
    a=b;
    b=temp;
    cout<<" a : "<<a;
    cout<<" b : "<<b;
}

void SwapM2(){

    int a = 10;
    int b = 20;

    a = a+b; //10+20 = 30
    b=a-b;  //30-20 =10
    a = a-b;//30-10 = 20

    cout<<" a : "<<a;
    cout<<" b : "<<b;
}


// *
// **
// ***
void pattern1(int a =3){
    int n =a;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

// ***
// **
// *

void pattern2(){
    int n =3;
    for (int i = 1; i <=n; i++)
    {
        for (int j = n; j >=i; j--)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
}


//     *
//    **
//   ***
//  ****
// *****
void pattern3(){

    int n =5;
    for (int i = 1; i <=n; i++)
    {
        for(int j =1; j<=n; j++){
            if (i+j>n)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
}

int main(){
pattern3();
    return 0;
}