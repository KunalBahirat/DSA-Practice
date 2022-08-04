#include <bits/stdc++.h>
#include "includes/queue.cpp"
int main(){
    Queue q;
    q.enqueue(5);
    q.enqueue(15);
    q.enqueue(25);
    q.enqueue(35);
q.display();
q.dequeue();
std::cout<<std::endl;
q.display();
    return 0;
}