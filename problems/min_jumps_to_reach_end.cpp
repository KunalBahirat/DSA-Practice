#include <climits>
#include <iostream>
using namespace std;
// N = 6
// arr = {1, 4, 3, 2, 6, 7}
// N = 11 
// arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} 
int minJumps(int a[],int n){
  int jumps[n];
  jumps[0]=0;
  for(int i=1;i<n;i++) jumps[i]=INT_MAX-1;
  for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
        if(i<=(j+a[j])){
          if( jumps[i]>(jumps[j]+1))
            jumps[i]=jumps[j]+1;
        }            
    }
  }
  for(int i=0;i<n;i++){
    cout<<jumps[i]<<" ";
  }
  return jumps[n-1];
}
int main(){
  // int N = 11 ;
  int N = 6 ;
// int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}; 
int arr[] ={1, 4, 3, 2, 6, 7}; 

  cout<<endl<<minJumps(arr,N);
  return 0;
}