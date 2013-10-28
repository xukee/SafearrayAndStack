#include <iostream>
using namespace std;




class Stack{
private:
class Node{
public:  int data;
                 Node *pre;
                 Node(int a,Node *p):data(a),pre(p){};
}*node;


public: Stack():node(NULL){}
                ~Stack(){
                        while (node)
                        {
                                Node *p=node;
                                node=node->pre;
                                delete(p);
                        }
                }
                bool isempty(){
                        return node==NULL;
                }
                void putin(int elem){
                        node=new Node(elem,node);
                }
                int getout(){
                        int a=node->data;
                        Node *p=node;
                        node=node->pre;
                        delete p;
                        return a;
                }
};


int main(){
        Stack linkstack;
        linkstack.putin(10);
        linkstack.putin(6);
        linkstack.putin(19);
        while (!linkstack.isempty())
        {
                cout<<linkstack.getout()<<endl;
         };
        system("pause");
        return 0;


};
