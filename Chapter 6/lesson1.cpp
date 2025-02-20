
#include <iostream>
using namespace std;

void PrintName(int a){
    if(a==0) return;
    cout<<"Hello Vishal"<<endl;
    PrintName(a-1);
}


void nto1(int n){
    if (n<1)
    {
        return;
    }
    cout<<n<<endl;
    nto1(n-1);
}

// void onetoN(int a , int b){ // 1, 3
//     if (a > b)
//     {
//         return;
//     }
//     onetoN(a+1,b); // 2,3
//     cout<<a<<endl;
// }

void onetoN(int a , int b){ //2,3
    if (a > b)
    {
        return;
    }
    onetoN(a+1,b); // 3,3
    cout<<a<<endl;
}

void onetoN(int a , int b){ //3,3
    if (a > b)
    {
        return;
    }
    onetoN(a+1,b); // 4,3
    cout<<a<<endl;
}

// void onetoN(int a , int b){
//     if (a > b)
//     {
//         return;
//     }
//     onetoN(a+1,b);
//     cout<<a<<endl;
// }

int main(){
int n =3;

    onetoN(1,n);
    return 0;
}