#include "stack.h"
#include <iostream>
using namespace std;

int main (int argc, char *argv[])
{
  Stack st(20);
  Stack st2;
  for(unsigned long i = 1; i < 21; ++i){
    cout<<"push st2 ? :"<<st2.push(i)<< endl;
    cout<<"push st ? :" << st.push(i) << endl;
    cout <<"st1 is full?: " << st2.isfull()  << endl;
    cout <<"st2 is empty?: " << st2.isempty() << endl;
  }

  cout << "pop st2 :" <<endl;
  while(!st2.isempty()){
    unsigned long i;
    st2.pop(i);
    cout << i<< endl;
  }

  cout << " st2  = st" << endl;
  st2 = st;
  
  
  while(!st.isempty()){
    unsigned long i;
    st.pop(i);
    cout << i<< endl;
  }
  
  return 0;
}
