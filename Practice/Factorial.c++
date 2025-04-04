#include<bits/stdc++.h>
using namespace std;

long long facto(long long n){
    if(n==1) return 1;
    return (long long)n*facto(n-1);
    }
vector<long long> factorialNumbers(long long n) {
       
    vector<long long> fact;
    long long f=0;
 for(int i =1; i<=n; i++){
     f = facto(i);
     if(f<=n){
         fact.emplace_back(f); 
         }
         else{
            break;
         }
     
 }
 
 return fact;
 
 }

int main(){

   vector<long long> fact =  factorialNumbers(2);

   for(auto i : fact){
    cout<<i<<" ";
   }
    return 0;
}