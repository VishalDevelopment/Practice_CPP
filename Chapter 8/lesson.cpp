// #include <iostream>
// using namespace std;

// // 2-D Array


// int* StudentMarks(int arr[3][3]){

//     int n =3; 
//     for(int i =0 ; i<n; i++){
//         for(int j =0; j<n; j++){
//             cin>>arr[i][j];
//         }
//     }
//     return *arr;
// }


// // Practicing return Array to function (Using pointer to return address)
// int* Arr1(int arr[3][3]){

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             arr[i][j] = rand() % 100;  // Generate random numbers between 0-99
//         }
//     }

//     return &arr[3][3];
// }

// int* Arr2(int arr[3][3]){
    
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             arr[i][j] = rand() % 100;  // Generate random numbers between 0-99
//         }
//     }

//     return &arr[3][3];
// }

// int main(){


//     int arr[3][3];
//     // int* data = StudentMarks(arr);

//     // for(int k=0; k<3; k++){
//     //     for(int l = 0; l<3;l++){
//     //         cout<<"arr["<<k<<"]["<<l<<"]"<<arr[k][l]<<" ";
//     //     }
//     //     cout<<endl;
//     // }


//     // Add to Matrix [2D Array]


//     int* arr1 = Arr1(arr);
//     int* arr2 = Arr2(arr);

//     int NewArr[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             /* code */
//             NewArr[i][j]= arr1[i][j] +arr2[i][j];
//         }
        
//     }
    
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             /* code */
//             cout<<NewArr[i][j];
//         }
        
//     }

//     return 0;
// }