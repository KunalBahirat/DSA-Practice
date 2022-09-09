#include <bits/stdc++.h>
using namespace std;
unordered_map <string ,int> identity;
class Edge{
    public:
    int id;
    int distance;
};
class Vertex{
    public:
    int id;
    string state_name;
    list <Edge> edge_list;
};
class Graph{
    vector <Vertex> graph;
    public:
        void addvertex(int id,string stateName){
            Vertex v;
            v.id=id;
            v.state_name=stateName;
            identity[stateName]=id;
            graph.push_back(v);
            // cout<<"vertex "<<stateName<<" with id "<<id<<" added successfully"<<endl;
        }
        void update_vertex(string stateName,string newStateNmae){
            int index=identity[stateName];
            auto it=graph.begin();
            while( it!=graph.end() and it->id !=index){
                it++;
            }
            if(it!=graph.end())
            it->state_name=newStateNmae;
            cout<<"Vertex "<<newStateNmae<<" updated succefully"<<endl;
        }
        void add_edge(string st1,string st2,int dist){
            int index=identity[st1];
            int indexCity2=identity[st2];
            auto it=graph.begin();
            while( it!=graph.end() and it->id !=index){
                it++;
            }
            if(it!=graph.end()){
                Edge e;
                e.distance=dist;
                e.id=indexCity2;
                it->edge_list.push_back(e);
            }
        }
        void print_graph(){
            auto it=graph.begin();
            while(it!=graph.end()){
                cout<<it->id<<" -> "<<it->state_name<<" => \t";
                auto it2=it->edge_list.begin();
                while(it2!=it->edge_list.end()){
                    cout<<it2->id<<"|"<<it2->distance<<" ";
                    it2++;
                }
                it++;
                cout<<endl;
            }
        }
        void update_edge(string st1,string st2,int dist){
            int indexst1=identity[st1];
            int indexst2=identity[st2];
            auto it1=graph.begin();
            while(it1!=graph.end() and it1->id!=indexst1 )it1++;
            if(it1!=graph.end()){
                auto it2=it1->edge_list.begin();
                while(it2!=it1->edge_list.end() and it2->id!=indexst2) it2++;
                if(it2!=it1->edge_list.end()){
                    it2->distance=dist;
                }
            }
            it1=graph.begin();
            while(it1!=graph.end() and it1->id!=indexst2 )it1++;
            if(it1!=graph.end()){
                auto it2=it1->edge_list.begin();
                while(it2!=it1->edge_list.end() and it2->id!=indexst1) it2++;
                if(it2!=it1->edge_list.end()){
                    it2->distance=dist;
                }
            }

        }
        void delete_edge(string st1,string st2){
            int indexst1=identity[st1];
            int indexst2=identity[st2];
            auto it1=graph.begin();
            while(it1!=graph.end() and it1->id!=indexst1) it1++;
            if(it1!=graph.end()){
                auto it2=it1->edge_list.begin();
                while(it2!=it1->edge_list.end() and it2->id!=indexst2) it2++;
                if(it2!=it1->edge_list.end()){
                    it1->edge_list.erase(it2);
                }
            }
            it1=graph.begin();
            while(it1!=graph.end() and it1->id!=indexst2) it1++;
            if(it1!=graph.end()){
                auto it2=it1->edge_list.begin();
                while(it2!=it1->edge_list.end() and it2->id!=indexst1) it2++;
                if(it2!=it1->edge_list.end()){
                    it1->edge_list.erase(it2);
                }
            }
        }
        void delete_vertex(string statename){
            int indexst=identity[statename];
            auto it=graph.begin();
            while(it!=graph.end() and it->id!=indexst) {
                auto it2=it->edge_list.begin();
                while(it2!=it->edge_list.end() and it2->id!=indexst) it2++;
                if(it2!=it->edge_list.end()){
                    it->edge_list.erase(it2);
                }
                it++;
            }
            if(it!=graph.end()){
                graph.erase(it);
            }
            while(it!=graph.end()) {
                auto it2=it->edge_list.begin();
                while(it2!=it->edge_list.end() and it2->id!=indexst) it2++;
                if(it2!=it->edge_list.end()){
                    it->edge_list.erase(it2);
                }
                it++;
            }
        }
        void get_all_neightbours(string statename){
            int indexst=identity[statename];
            auto it=graph.begin();
            while(it!=graph.end() and it->id!=indexst) it++;
            cout<<"Neighbours of "<<statename<<" are ";
            if(it!=graph.end()){
                auto it1=it->edge_list.begin();
                while(it1!=it->edge_list.end()) {
                    cout<<it1->id<<" "<<it1->distance<<" | ";
                it1++;
            } 
        }}
        void check_connected(string st1,string st2){
            int indexst1=identity[st1];
            int indexst2=identity[st2];
            auto it1=graph.begin();
            while(it1!=graph.end() and it1->id!=indexst1) it1++;
            if(it1!=graph.end()){
                auto it2=it1->edge_list.begin();
                while(it2!=it1->edge_list.end() and it2->id!=indexst2) it2++;
                if(it2!=it1->edge_list.end()){
                    cout<<"Yes "<<st1<<" and "<<st2<<" are connected"<<endl; 
                }
                else
                cout<<"No "<<st1<<" and "<<st2<<" are not connected"<<endl; 
            }
        }
        void seach_vertex();
        
};
int main(){
    cout<<"Graph\n";
    Graph g;
    g.addvertex(1,"Maharashtra");
    g.addvertex(2,"Delhi");
    g.addvertex(3,"Uttar Pradesh");
    g.addvertex(4,"Odisha");
    g.addvertex(5,"Goa");
    g.add_edge("Maharashtra","Delhi",1300);
    g.add_edge("Maharashtra","Goa",700);
    g.add_edge("Goa","Delhi",2000);
    g.add_edge("Goa","Odisha",1300);
    g.add_edge("Goa","Maharashtra",700);
    g.add_edge("Goa","Uttar Pradesh",1900);
    g.add_edge("Odisha","Goa",1300);
    g.add_edge("Odisha","Uttar Pradesh",1200);
    g.add_edge("Uttar Pradesh","Odisha",1200);
    g.add_edge("Uttar Pradesh","Goa",1900);
    g.add_edge("Uttar Pradesh","Delhi",400);
    g.add_edge("Delhi","Maharashtra",1300);
    g.add_edge("Delhi","Goa",2000);
    g.add_edge("Delhi","Uttar Pradesh",400);
    auto it=identity.begin();
    while(it!=identity.end()){
        cout<<it->second<<" "<<it->first<<endl;it++;
    }
    g.print_graph();
    cout<<endl;
    // g.update_edge("Maharashtra","Goa",5000);
    // g.delete_edge("Maharashtra","Goa");
    g.addvertex(6,"Madhya Pradesh");
    g.add_edge("Madhya Pradesh","Goa",359);
    g.add_edge("Madhya Pradesh","Uttar Pradesh",120);
    // g.delete_vertex("Odisha");
    g.print_graph();
    cout<<endl;
    // g.get_all_neightbours("Maharashtra");
    g.check_connected("Maharashtra","Odisha");
    g.check_connected("Goa","Uttar Pradesh");
    return 0;
}