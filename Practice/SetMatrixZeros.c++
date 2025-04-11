#include<bits/stdc++.h>
using namespace std;

// Better Sol. 
// void markRow(int arr[5][5],int cell ,int row ){
//     for(int i = 0; i<row; i++){
//         if(arr[cell][i]!=0){
//             arr[cell][i]=-1;
//         }
//     }
// }

// void markColumn(int arr[5][5],int cell,int column ){
//     for(int i = 0; i<column; i++){
//         if(arr[i][cell]!=0){
//             arr[i][cell]=-1;
//         }
//     }
// }

// void setzeros(int arr[5][5],int row ,int column){
//     vector<pair<int,int>> temp ;
    
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < column; j++) {
//                 if (arr[i][j] == 0) {
//                     markRow(arr, i, column);  
//                     markColumn(arr, j, row); 
//                 }
//         }
//     }
    

//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < column; j++) {
//             if(arr[i][j]==-1){
//                 arr[i][j]=0;
//             }
//                 cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }

// Better Sol 

// void setzeros(int arr[5][5],int row ,int column){

//     vector<int> r;
//     vector<int> c;
//     for(int i=0; i<row; i++){
//         for(int j =0;j<column; j++){
//             if(arr[i][j]==0){
//                 r.push_back(i);
//                 c.push_back(j);
//             }
//         }
//     }

//     for(int i=0; i<row; i++){
//         for(int j =0;j<column; j++){
//             for(auto k: r){
//                 if(k==i){
//                     arr[k][j]=0;
//                 }
//             }
//             for(auto l : c){
//                 if(j==l){
//                     arr[i][l]=0;
//                 }
//             }
//         }



       


//     }
// }

// Optimal Sol.
void setzeros(int arr[3][3], int row, int column) {
    bool r = false, c = false;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (arr[i][j] == 0) {
                if (i == 0) r = true;
                if (j == 0) c = true;
                arr[i][0] = 0;
                arr[0][j] = 0;
            }
        }
    }

    for (int i = 1; i < row; i++) {
        for (int j = 1; j < column; j++) {
            if (arr[i][0] == 0 || arr[0][j] == 0) {
                arr[i][j] = 0;
            }
        }
    }

    if (r) {
        for (int j = 0; j < column; j++) {
            arr[0][j] = 0;
        }
    }

    if (c) {
        for (int i = 0; i < row; i++) {
            arr[i][0] = 0;
        }
    }
}



int main(){

    int arr[3][3] = {
    {1, 1, 0},
    {1, 1, 1},
    {0, 1, 1}
    };
    
    setzeros(arr,3,3);

    
    cout<<endl;
    for(int i=0; i<3; i++){
        for(int j =0;j<3; j++){
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}