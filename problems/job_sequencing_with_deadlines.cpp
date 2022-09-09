#include <map>
#include <iostream>
using namespace std;
void job_sequencing(int profit[],int deadline[],int n,int hrs){
    int ans[hrs+1]={-1,-1,-1,-1,-1};
    int max_profit=0;
    for(int i=0;i<n;i++){
        for(int j=deadline[i];j>0;j--){
            if(ans[j]==-1){
                ans[j]=i;
                max_profit+=profit[i];
                break;
            }
        }
    }
    cout<<max_profit<<endl;
    for(int i=1;i<=hrs;i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int n=5;
    // int profit[5]={20,15,10,5,1};
    // int deadline[5]={2,2,1,3,3};
    // job_sequencing(profit,deadline,n,3);
    n=7;
    int profit[7]={35,30,25,20,15,12,5};
    int deadline[7]={3,4,4,2,3,1,2};
    job_sequencing(profit,deadline,n,4);

    return 0;
}