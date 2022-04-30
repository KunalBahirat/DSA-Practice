#include <iostream>
using namespace std;
class Array
{
private:
    int *A;
    int length;
    int size;

public:
    Array()
    { // constructor
        A = new int[10];
        length = 0;
        size = 10;
    }
    Array(int sz)
    { // parametrised constructor
        A = new int[sz];
        length = 0;
        size = sz;
    }
    void swap(int *, int *);
    void add();
    void Display();
    void insert(int, int);
    void Delete(int);
    int linearSearch(int);
    int binarySearch(int);
    void get(int);
    void set(int,int);
    void max();
};

void Array::swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Array::add()
{
    cout << "Enter Elements to add in list:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> A[i];
        length++;
    }
};

void Array::Display()
{
    cout << "Array= " << endl
         << "{";
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << "}" << endl
         << "length=" << length << endl;
};

void Array::insert(int index, int number)
{
    if (index >= 0 && index < length - 1)
    {
        for (int i = length; i > index; i--)
        {
            A[i] = A[i - 1];
        }
        A[index] = number;
    }
};

void Array::Delete(int index)
{
    if (index > 0 && index < length)
    {
        for (int i = index; i < length; i++)
        {
            A[i] = A[i + 1];
        }
    }
};

int Array::linearSearch(int number)
{
    int i;
    for (i = 0; i < length; i++)
    {
        if (number == A[i])
        {
            swap(&A[i], &A[0]);
            return i;
        }
    }
    return -1;
};

int Array::binarySearch(int number)
{
    int l, h, mid;
    l = 0;
    h = length - 1;


    while (l <= h)
    {
        mid = (l + h) / 2;
        if (number == A[mid])
        {
            return mid;
        }
        else if (number < A[mid])
        {
            h = mid - 1;

        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
};

void Array::get(int index){
    if(index>0 && index<length){
    cout<<"Element at index "<<index<<"is= "<<A[index]<<endl;

    }
}

void Array::set(int index,int number){
    if(index>0 && index<length){
        A[index]=number;

    }
}

void Array::max(){
    int max=A[0];
    for(int i=0;i<length;i++){
        if(A[i]>max){
            max=A[i];
        }
    }
    cout<<"Maximum No: "<<max<<endl;
}

int main()
{
    Array arr;
    int arrElementsNumber;
    cin >> arrElementsNumber;
    arr = Array(arrElementsNumber);

    arr.add();
    arr.Display();

    // arr.insert(4,55);
    // arr.Delete(5);
    // arr.Display();

    //*******************Linear S***********************
    // cout<<"Enter an number to be searched in array"<<endl;
    // int num;
    // cin>>num;
    // int findex=arr.linearSearch(num);
    // cout<<"element found at index: "<<findex;
    // arr.Display();


    //*******************Binary S***********************
    // cout << "Enter no:";
    // int x, y;
    // cin >> x;
    // y = arr.binarySearch(x);
    // cout << "number found at: "<<y << endl;

    // cout << "Enter index:";
    // int p;
    // cin>>p;
    // arr.get(p);

    // int w,e;
    // cout << "Enter no:";
    // cin>>w;
    // cout << "Enter index:";
    // cin>>e;
    // arr.set(e,w);
    // arr.Display();
    
    arr.max();
    return 0;
}