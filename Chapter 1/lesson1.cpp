#include<iostream>
using namespace std;

void CalculateSum(int a){
cout<<a<<" : Int";

}

void CalculateSum(string a){
cout<<a<<" : String";
}

void CalculateSum(int a , int b){
    cout<<a+b<<": Sum";
}
void CalculateSum(string a, string b){
    cout<<a+b;
}


void ArithmeticFn(float a , int b){
    cout<<" Sum : "<<a+b<<endl;
    cout<<" Prod : "<<a*b<<endl;
    cout<<" Div : "<<a/b<<endl;
    // cout<<" Mod : "<<a%b;
}

void CalCircle(int r , float pi){
    cout<<"Circle Area = "<< pi*r*r;
}


int main(){
    


   
    return 0;
}

