#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// time complexity = o(n*m) space complexity = 0(1)
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    int top = 0 , bottom = n-1;
    int left = 0, right = m-1;

    vector<int> result ;
    while(top<=bottom && left<=right){
        for(int i = left; i<=right; i++){
            result.emplace_back(matrix[top][i]);
        }
        top++;
        for(int i = top; i<=bottom; i++){
            result.emplace_back(matrix[i][right]);
        }
        right--;
        
        if(top<bottom){
        
        for(int i = right; i >= left; i--) {
            result.emplace_back(matrix[bottom][i]);
        }
        bottom--;
    }
     
    if(left<=right){
        for(int i = bottom ; i>=top; i--){
            result.emplace_back(matrix[i][left]);
        }
        left++;
    }
    }

   return result;

}

int main(){
    vector<vector<int>> vec ={
//  {1, 2},
//  {3, 4},
//  {5, 6}

// {1, 2, 3},
//  {4, 5, 6}

//  {1, 2, 3},
//  {4, 5, 6},
//  {7, 8, 9},
//  {10, 11, 12}

// { 1,  2,  3,  4},
// { 5,  6,  7,  8},
// { 9, 10, 11, 12}
{7},
{9},
{6}
    };
  vector<int> ans=spiralOrder(vec);

  for(auto it : ans){
    cout<<it<<" ";
  }

}