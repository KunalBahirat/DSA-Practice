#include <iostream>
using namespace std;
int main(){
    cout<<"2D Arrays \n\n"<<endl;
    cout<<"---------------Normal Declaration-----------------\n";
    int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};
    for (int i = 0; i< 3;i++)
    {
        for (int j = 0;j <4; j++)
        {
            cout<<A[i][j]<<" ";
            
        }
        cout<<"\n";
    }

    cout<<"---------------Arrays Of Pointers-----------------\n";

    int *B[3];
    B[0]=new int[4];
    B[1]=new int[4];
    B[2]=new int[4];
    for (int i = 0; i< 3;i++)
    {
        for (int j = 0;j <4; j++)
        {
            cout<<B[i][j]<<"  ";
            
        }
        cout<<"\n";
    }

    cout<<"---------------Double Pointers-----------------\n";

    int **C;
    C=new int*[3];
    C[0]=new int[4];
    C[1]=new int[4];
    C[2]=new int[4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<C[i][j]<<"  ";
        }
        cout<<"\n";
    }

        
    
    return 0;
}