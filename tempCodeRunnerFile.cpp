#include <iostream>
using namespace std;
void spiralorder(int n,int a[][4]){
  int i=0,j=0;
  int rowst,rowen,colst,colen;
  rowst=colst=0;
  rowen=colen=n-1;
  while(colst<colen and rowst<rowen){
      while(j<colen){
        cout<<a[i][j]<<" ";
        j++;
      }
      j--;i++;rowst++;
      while(i<rowen){
        cout<<a[i][j]<<" ";
        i++;
      }
      j--;i--;colen--;
      while(j>=colst){
        cout<<a[i][j]<<" ";
        j--;
      }
      i--;j++;rowen--;
      while(i>=rowst){
        cout<<a[i][j]<<" ";
        i--;
      }
      colst++;i++;j++;
  }
}
int main(){
  int n=4;
  int a[n][n]={
    1,2,3,4,
    5,6,7,8,
    9,10,11,12
  };
  spiralorder(n,a);
  return 0;
}