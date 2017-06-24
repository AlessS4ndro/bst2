#include"clases.h"
/*
template<typename T>
bool BST<T>::find(Node<T> **& n,T value)
{
  n=&root;
  while(*n){
    if((*n)->value==value)
      return true;
    n=&(*n)->child[(*n)->value<value];
  }
  return false;
}

template<typename T>
bool BST<T>::find(T value)
{
  Node<T> **n;
  return find(n,value);
}

template<typename T>
bool BST<T>::insert(T value)
{
  Node<T> **n;
  if(find(n,value))
    return false;
  cout<<"insertando ....."<<endl;
  *n=new Node<T>(value);
  return true;
}
/*
void espace(int);

template<typename T>
void BST<T>::print(vector <Node<T> *> v,int x)
{
  vector <Node<T> *> n;

  if(v.size()==0)
    return ;
  espace(x);
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
  print(n,x-3);
}
*/
void espace(int x)
{
  cout<<endl;
  for(int i=0;i<x;i++)
    cout<<" ";
}

int logaritmo(int base,int num)
{
  int i=0;
  while(true){
    if(pow(base,i++)==num)
      return --i;
  }
}
