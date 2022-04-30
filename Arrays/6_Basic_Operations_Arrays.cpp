#include <iostream>
using namespace std;
class Array{
    private:
        int *A;
        int length;
        int size;
    public:
        Array(){
            A=new int[10];
            length=0;
            size=10;
        }
        Array(int sz){
            A=new int[sz];
            length=0;
            size=sz;
        }
        ~Array(){
            delete []A;
        }
        void add();
        void display();
        void swap();
        void reverseCopy(int sz);
        void reverseSwap();
        void insertSort(int num);
        bool isSorted();
        void sortNegative();
        void merge(int arr2[],int arr3[]);


};

// void Array::swap(int a,int b){
//     int temp=a;
//     a=b;
//     b=temp;
// };

void Array::add(){
    for(int i=0;i<size;i++){
        cin>>A[i];
        length++;
    }
};
void Array::display(){
    cout<<"\nlength="<<length<<endl;
    cout<<"Array= { ";
    int i;
    for(i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
    cout<<"}";
};
void Array::reverseCopy(int sz){
    int *arr2;
    arr2=new int[sz];
    int i,j;
    for(i=length-1,j=0;i>=0;i--,j++){
        arr2[j]=A[i];
    }
   
    for(i=0,j=0;i<length;i++,j++){
        A[i]=arr2[j];
    }
};
void Array:: reverseSwap(){
    int i,j;
    cout<<"Fun reverseswap called"<<endl;
    for(i=0,j=length-1;i<j;i++,j--){
        int temp;
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
};
void Array::insertSort(int num){
    int i;
    for(i=length-1;i>=0;i--){
        if(A[i]>num){
            A[i+1]=A[i];
        }
        else{

        A[i+1]=num;
        cout<<"Inserted element in sorted Array"<<endl;
        break;
        }
    }
};

bool Array::isSorted(){
    int i;
    for(i=0;i<length;i++){
        if(A[i]>A[i+1]){
            return false;
        }
        
    }
    return true;
}

void Array::sortNegative(){
    int i=0;int j=length-1;
    while(i<j){
        while(A[i]<0){i++;}
        while (A[j]>0){j--;}
        if(i<j){
            int temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
        
        
    }
}



int main(){
    Array arr1;
    int sz;
    cout<<"Enter size of array ";
    cin>>sz;
    
    arr1=Array(sz);
    
    arr1.add();
    arr1.display();

    // arr1.reverseCopy(sz);
    // cout<<"\nReverse Array:"<<endl;
    // arr1.display();

    // arr1.reverseSwap();
    // cout<<"\nReverse Array:"<<endl;
    // arr1.display();

    // arr1.insertSort(20);
    // arr1.display();

    // if(arr1.isSorted()==true){
    //     cout<<"\nSorted";
    // }
    // else
    // {cout<<"\nNot sorted";}

    arr1.sortNegative();
    arr1.display();

    

    return 0;
}