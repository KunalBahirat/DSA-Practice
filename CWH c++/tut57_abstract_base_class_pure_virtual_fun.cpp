#include <bits/stdc++.h>
using namespace std;
// Abstract base class - it is used to make objects thru it 
class CWH{
    protected:
        char title[30];
        int rating;
    public:
        CWH(char *s,int r){
            strcpy(title,s);
            rating=r;
        }
        virtual void display()=0;  // do nothing function - pure virtual function 

};
class CWHVideo : public CWH{
    float videoLength;
    public:
        CWHVideo(char *s,int r,float vl):CWH(s,r){
            videoLength=vl;
        }
        void display(){
            cout<<"Display fun of --Video-- class"<<endl;
            cout<<"this is video with title "<<title<<endl;
            cout<<"rating "<<rating<<" out of 5"<<endl;
            cout<<"videolength is "<<videoLength<<" min"<<endl;
        }
};
class CWHText : public CWH{
    int words;
    public:
        CWHText(char *s,int r,int wc):CWH(s,r){
            words=wc;
        }
        virtual void display(){
            cout<<"Display fun of ** Text ** class"<<endl;
            cout<<"this is text tutorial with title "<<title<<endl;
            cout<<"rating "<<rating<<" out of 5"<<endl;
            cout<<"words are "<<words<<endl;
        }
};
int main(){
    char a[]="DJtutorial";
    char *ptr=a;
    float vdolen=25.49;
    int rating=3;
    CWHVideo djVideo(a,rating,vdolen);
    // djVideo.display();

    int wc=435;
    CWHText djText(ptr,rating,wc);
    // djText.display();

    CWH *x[2];
    x[0]=&djVideo;
    x[1]=&djText;

    x[0]->display();
    x[1]->display();
    return 0;
}

// rules of virtual functions :
//     1. They cannot be static
//     2. They are accessed by object pointers
//     3. virtual functions can be friend of another class 
//     4. virtual fun in base class may not be used
//     5. If a virtual function is defined in a base class there is no neccessity of defining it in derived class 
