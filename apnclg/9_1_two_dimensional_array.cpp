#include <iostream>
using namespace std;
int n=5;
int m=3;
void spiralorder(int a[][5]){
  int i=0,j=0;
  int rowst,rowen,colst,colen;
  rowst=colst=0;
  rowen=m-1;colen=n-1;
  while(colst<=colen and rowst<=rowen){
      while(j<=colen and colst<=colen and rowst<=rowen){
        cout<<a[i][j]<<" ";
        j++;
      }
      j--;i++;rowst++;
      while(i<=rowen and colst<=colen and rowst<=rowen){
        cout<<a[i][j]<<" ";
        i++;
      }
      j--;i--;colen--;
      while(j>=colst and colst<=colen and rowst<=rowen){
        cout<<a[i][j]<<" ";
        j--;
      }
      i--;j++;rowen--;
      while(i>=rowst and colst<=colen and rowst<=rowen){
        cout<<a[i][j]<<" ";
        i--;
      }
      colst++;i++;j++;
  }
}
int main(){
  int n=4;
  int a[3][5]={
    6 ,6, 2 ,28 ,2 ,12 ,26 ,3 ,28, 7 ,22 ,25 ,3 ,4 ,23
  };
  spiralorder(a);
  return 0;
}
