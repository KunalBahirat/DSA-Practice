#include <iostream>
using namespace std;
//Finding length of string in array of any size by finding \0 
int main(){
    char name[10]="KUNAL";
    int i;
    for(i=0;name[i]!='\0';i++){}

    cout<<"\n"<<sizeof(name);
    cout<<"\nLength of name is "<<i<<endl;
    cout<<name<<endl;

//Changing uppercase to lowercase b adding 32 in char i.e. Ascii for A=65 & a=97 -> diff=32
    for(int x=0;x<i;x++){
        name[x]=name[x]+32;       
    }
    cout<<name;

//Toggling the cases (upper-lower) and (lower-upper)
    char name2[10]="wELcomE";
    int j;
    for (j = 0;name2[j]!='\0'; j++){}
    cout<<"\nLength of name2 is "<<j<<endl;
    cout<<name2<<endl;
    for(int i=0;i<j;i++){
        if(65<=name2[i] && name2[i]<=96){
            name2[i]+=32;
        }
        else if(97<=name2[i] && name2[i]<=122){
            name2[i]-=32;
        }
    }
    cout<<name2<<endl;
    

    return 0;
}