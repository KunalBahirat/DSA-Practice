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
    

    // // no of col of 1st matrix should be equal to rows of 2nd
    // int l,m,n;
    // cin>>l>>m>>n;
    // int a[l][m],b[m][n];
    // for(int i=0;i<l;i++){
    //     for(int j=0;j<m;j++){
    //         cin>>a[i][j];
    //     }
    // }
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>b[i][j];
    //     }
    // }
    // int c[l][n];
    // int sum;
    // for(int i=0;i<l;i++){
    //     for(int j=0;j<n;j++){
    //         sum=0;
    //         for(int k=0;k<m;k++){
    //             sum+=a[i][k]*b[k][j];
    //             c[i][j]=sum;
    //         }
    //     }
    // }
    // cout<<"Matrix A"<<endl;
    //  for(int i=0;i<l;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // cout<<"Matrix B"<<endl;
    //  for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<b[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // cout<<l<<" "<<m<<" "<<n<<endl;

    // cout<<"Multiplication of matrix"<<endl;
    //  for(int i=0;i<l;i++){
    //     for(int j=0;j<n;j++){
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