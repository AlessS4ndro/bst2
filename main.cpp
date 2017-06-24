#include"clases.h"
#include<math.h>

int main(int argc,char *argv[])
{
  vector <Node<int> *> v;
  int x;
  BST <int> ArbolBin;

  for(int i=1;i<5;i++){
    cin>>x;
    ArbolBin.insert(x);
  }

  v.push_back(ArbolBin.get_root());
  ArbolBin.print(v);
  cout<<"la altura es..... "<<ArbolBin.get_altura()<<endl;

  //cout<<logaritmo(atoi(argv[1]),atoi(argv[2]))<<endl;
  return 0;
}
