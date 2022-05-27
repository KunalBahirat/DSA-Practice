#include <iostream>
using namespace std;

int main(){
// Transpose of Matrix
    // int m=4;
    // int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    // for(int i=0;i<m;i++){
    //     for(int j=i;j<m;j++){
    //             int temp=a[i][j];
    //             a[i][j]=a[j][i];
    //             a[j][i]=temp;

    //     }
    // }
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }

//Multiplication of matrix
    
    // int n1,n2,n3;
    
    // cin >> n1 >> n2 >> n3;
    // int a[n1][n2],b[n2][n3];
    // for(int i=0;i< n1;i++){
    //     for(int j=0;j<n2;j++){
    //         cin>>a[i][j];
    //     }
    // }
    // cout<<"\nMAtrix 2"<<endl;
    // for(int i=0;i< n2;i++){
    //     for(int j=0;j<n3;j++){
    //         cin>>b[i][j];
    //     }
    // }

    // int c[n1][n3];
    // for(int i=0;i<n1;i++){
    //     for(int j=0;j<n3;j++){
    //         c[i][j]=0;
    //     }
    // }

    // for(int i=0;i<n1;i++){
    //     for(int j=0;j<n3;j++){
    //         for(int k=0;k<n2;k++){
    //             c[i][j]+=a[i][k]*b[k][j];
    //         }
    //     }
    // }
    // for(int i=0;i< n1;i++){
    //     for(int j=0;j<n3;j++){
    //         cout<<c[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }



// Matrix search
    int a,b ,target;
    cin >> a >>b >>target;
    int m[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>m[i][j];
        }
    }
    bool flag=false;
    int r=0,c=b-1;
    while(r<a and c>=0){
        if(m[r][c]==target){
            flag=true;
            
        }
       if(target>m[r][c]){
            r++;
        }
        else{
            c--;
        }
    }
    if(flag){
        cout<<"Element found"<<endl;
    }
    else
        cout<<"Element does not exist";

    return 0;
}