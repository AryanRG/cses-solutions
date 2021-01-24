#include<bits/stdc++.h>
using namespace std;

int main(){
    
/* long long n;
cin>>n;
long long arr[n];
for(long long i=0 ; i<n-1;i++){
    cin>>arr[i];
} 

sort(arr, arr + n);
 
long long x = 1 ;
for(long long i = 0 ; i<n-1;i++){
 if(arr[i] == x){
     x++;
 }
 else if( arr[i] != x){
     cout<< x ;
     break;
 }

 
} */

long long n;
cin>>n;
long long a , sum=0;
for( long long i=0; i<n-1 ;i++){
    cin>>a;
    sum = sum + a;
}

cout << ( n*(n+1)/2) - sum <<"\n";

return 0;
}