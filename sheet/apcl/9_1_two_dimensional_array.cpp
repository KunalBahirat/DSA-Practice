 	// 1->20->7
	// 	  |
	// 20	  5
	// |	  | 
	// 8<-19<-20
#include <iostream>
using namespace std;

signed main(){
    // int a[3][3]={1,20,7,20,0,5,8,19,-20};
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }

    // printing spiral order matrix
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int row_start=0,col_start=0,row_end=m-1,col_end=n-1;
    while(row_start<=row_end && col_start<=col_end){
        for(int col=col_start;col<=col_end;col++){
            cout<<a[row_start][col]<<" ";
        }
        row_start++;
        for(int row=row_start;row<=row_end;row++){
            cout<<a[row][col_end]<<" ";
        }
        col_end--;
        for(int col=col_end;col>=col_start;col--){
            cout<<a[row_end][col]<<" ";
        }
        row_end--;
        for(int row=row_end;row>=row_start;row--){
            cout<<a[row][col_start]<<" ";
        }
        col_start++;
    }

    
    
        


    return 0;
}