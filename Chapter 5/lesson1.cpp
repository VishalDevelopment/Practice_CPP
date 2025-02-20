#include <iostream>
using namespace std;


void PointerTest(int& a , int &b){
    a=0;
    b=10;
}

void TestPointer2(int &n ){
    cout<<"n : "<<&n;
}

void swap(int* a , int* b){
    int temp = *a ;
    *a = *b;
    *b=temp;
    cout<<" Fun "<<a<<" "<<b;
}

int main(){

int x =10 ;
int y =20 ;
cout<<" Before : ";
cout<<"x : "<<x<<" y: "<<y<<endl;

swap(&x,&y);

cout<<" After : ";
cout<<"x : "<<x<<" y: "<<y;
    return 0;


}