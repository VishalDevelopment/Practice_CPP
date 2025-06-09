#include<bits/stdc++.h>
using namespace std;

// Find value at particular place in Pasacal triangle
int valueAtPointInPasacalTriangle(int n , int r){
    int result = 1;
    for(int i = 0; i<r; i++){
        result = result *(n-i);
        result= result/(i+1);
    }
    return result;
}

// int valueAtPointInPasacalTriangle(int n , int r){
//     int nfact = 1;
//    for(int i = 1; i<=n; i++){
//     nfact*=i;
//    }
//    int rfact = 1; 
//    for(int i = 1; i<=r; i++){
//     rfact*=i;
//    }

//    int n_rfact = 1;
//    for(int i = 1; i<=(n-r); i++){
//     n_rfact*=i;
//    }

//    int result = nfact/((rfact)*(n_rfact));
//     return result;
// }

// int PrintNthRowInPascalTriangle(int n , int r){
//     int result = 1;
//     for(int i = 0; i<r; i++){
//         result*=(n-i);
//         result/=(i+1);
//     }

//     return result;

// }

void PrintNthRowInPascalTriangle(int n ){
    int result = 1; 

    for(int i = 0 ;i<n; i++){
        
        cout<<result<<" ";
        result*=(n-(i+1));
        result/=(i+1);

    }
} 

void PrintCompletePascalTriangle(int n){
    
    for(int i = 0; i<=n; i++){
        int result = 1; 
        cout<<result<<" ";

        if(i!=0){
        for(int j = 0; j<i; j++){
            result*=(i-j);
            result/=(j+1);
            cout<<result<<" ";
        }
    }
        cout<<endl;
    }
 

}
int main(){
// int value = valueAtPointInPasacalTriangle(5-1,3-1);
// cout<<"Pascal Index Value : "<<value;

// int n = 6;
// for(int i = 1;i<=n; i++){
//     int value = PrintNthRowInPascalTriangle(n-1,i-1);
//     cout<<value<<" ";
// }

PrintNthRowInPascalTriangle(4);
// PrintCompletePascalTriangle(6);
}