#include <bits/stdc++.h>
using namespace std;
class CWH{
    protected:
        string title;
        int rating;
    public:
        CWH(string s,int r){
            title=s;
            rating=r;
        }
        virtual void display(){};

};
class CWHVideo : public CWH{
    float videoLength;
    public:
        CWHVideo(string s,int r,float vl):CWH(s,r){
            videoLength=vl;
        }
        void display(){
            cout<<"this is video with title "<<title<<endl;
            cout<<"rating "<<rating<<" out of 5"<<endl;
            cout<<"videolength is "<<videoLength<<" min"<<endl;
        }
};
// class CWHText : public CWH{
//     int words;
//     public:
//         CWHText(string s,int r,int wc):CWH(s,r){
//             words=wc;
//         }
//         void display(){
//             cout<<"this is text tutorial with title "<<title<<endl;
//             cout<<"rating "<<rating<<" out of 5"<<endl;
//             cout<<"words are "<<words<<endl;
//         }
// };
int main(){
    string a="DJtutorial";
    float vdolen=25.49;
    int rating=3;
    CWHVideo djVideo(a,rating,vdolen);
    djVideo.display();
    return 0;
}