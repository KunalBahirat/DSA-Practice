#include <iostream>
#include <vector>
using namespace std;
int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
    if(arr.size()==0) return -1;
    int ans=-1;
    int l, h,mid,temp;int index=0;
    for(int i=0;i<arr.size();i++){
        l=0; h=(ans==-1)?arr[0].size()-1:arr[0].size()-ans-1;
        while(l<=h){
            mid=(l+h)/2;
            if(arr[i][mid]==1 and arr[i][mid-1]==0) break;
            else if(arr[i][mid]==1) h=mid-1;
            else if(arr[i][mid]==0) l=mid+1;
        }
        if(arr[i][mid]==1){
             temp=arr[0].size()-mid;
              if(temp>ans){
                 index=i;
              }
              ans=max(ans,temp);
        }
    }
    if(ans==-1) return -1;
    cout<<index<<endl;
    return ans;
}
int main(){
 int N = 4 ;int M = 4;
 vector<vector<int>> Arr= {{0, 1, 1, 1},
           {0, 0, 1, 1},
           {1, 1, 1, 1},
           {0, 0, 0, 0}};
  cout<<rowWithMax1s(Arr,N,M);
  return 0;
}