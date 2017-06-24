#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

void espace(int x=30);
int logaritmo(int,int);
template <class T>
struct Node
{
  T value;
  Node *child[2];
  Node(T v):value(v){child[0]=NULL;child[1]=NULL;}
  T & get_set_value(){return value;}
  Node* get_node_left(){return child[0];}
  Node* get_node_right(){return child[1];}
};

template <class T>
class BST
{
  Node <T> *root;
  int altura;
  int elements;
  int volatil;
public:
  BST():root(NULL),altura(0),volatil(0){}
  int get_altura(){return altura;}
  bool find(Node<T> **& n,T value)
  {
    n=&root;
    while(*n){
      if((*n)->value==value)
        return true;
      n=&(*n)->child[(*n)->value<value];
    }
    return false;
  }
  bool find(T value)
  {
    Node<T> **n;
    return find(n,value);
  }
  bool insert(T value)
  {
    Node<T> **n;
    if(find(n,value))
      return false;
    cout<<"insertando ....."<<endl;
    *n=new Node<T>(value);
    elements++;
    return true;
  }
  void print(vector <Node<T> *> v)
  {
    vector <Node<T> *> n;

    if(v.size()==0){
      altura=volatil-1;
      volatil=0;
      cout<<" \n";
      return ;
    }
    espace();
    for(int i=0;i<v.size();i++){
      if(v[i]){
        cout<<v[i]->get_set_value()<<'\t';
        n.push_back(v[i]->get_node_left());
        n.push_back(v[i]->get_node_right());
      }
      else{
        cout<<"_\t";
      }
    }
    volatil++;
    print(n);
  }
  Node <T>* get_root(){return root;}
};
