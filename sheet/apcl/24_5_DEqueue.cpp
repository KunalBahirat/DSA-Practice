// #include <iostream>
// #include "bits/stdc++.h"
// using namespace std;
// void showdq(deque<int> x){
//     for(auto element:x){
//         cout<<element<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     deque <int> d;
//     d.push_back(10);
//     d.push_back(20);
//     d.push_back(30);
//     d.push_front(40);
//     d.push_front(50);
//     showdq(d);

//     cout<<d.max_size()<<endl;
//     cout<<d.size()<<endl;
//     cout<<d.front()<<endl;
//     cout<<d.back()<<endl;
//     cout<<d.at(2)<<endl;

//     d.pop_back();
//     d.pop_front();
//     showdq(d);
//     return 0;
// }

#include <iostream>
using namespace std;
class deque{
    int front;
    int rear;
    int *Q;
    int size;
    public:
        deque(){
            front=rear=-1;
            size=10;
            Q=new int[10];
        }
        dequeu(int size){
            this.size=size;
            front=rear=-1;
            Q=new int[this->size];
        }
        ~dequeu(){
            delete Q;
        }
        void insertFront(int x);
        void insertBack(int x);
        int deleteFront();
        int deleteBack();
};
void deque :: insertFront(int x){
    if(front)
}
int main(){
    
    return 0;
}