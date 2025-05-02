#include<bits/stdc++.h>
using namespace std;

// Brutforce Sol. 
// void rotate_image(int arr[3][3],int row ,int column){
//     int k =column;
//     // int arr[3][3]= {
//     //   {1,2,3},
//     //   {4,5,6},
//     //   {7,8,9}
//     // };
//     int vec[3][3];
//     for(int i = 0; i<row; i++){
//       int l = 0;
//     //   k--;
//       for(int j = 0; j<column; j++){
  
//         // cout<<i<<" "<<j<<" : "<<l<<" "<<k<<endl;
//         // // 00 -> 0,2 01-> 1,2 02 ->2,2 
//         // // 1,0 -> 0,1 1,1 -> 1,1 1,2 -> 2,1
//         vec[l][k] = arr[i][j];
//         l++;
//       }
//     }
// }

// Optimal Sol.
void rotate_image(int arr[3][3], int row,int column){


    
}


int main(){
int arr[3][3]= {
      {1,2,3},
      {4,5,6},
      {7,8,9}
    };

    rotate_image(arr,3,3);
    return 0;

}