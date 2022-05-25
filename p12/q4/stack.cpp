#include "stack.h"

Stack::Stack(int n){
  size = n;
  top = 0;
  pitems = new Item[n];
}

Stack::Stack(const Stack &st){
  size = st.size;
  top = st.top;
  pitems = new Item[size];
  for (int i = 0; i<top; ++i) {
  pitems[i] = st.pitems[i];
  }
}

Stack::~Stack(){
  delete [] pitems;
}

bool Stack::isempty(){
  if (top ==0) {
    return true;
  }else{
    return false;
  }
}

bool Stack::isfull(){
  if(top == size){
    return true;
  }else{
    return false;
  }
}


bool Stack::pop(Item &item){
  
  if(top == 0 ){
    return false;
  }else{
      item=pitems[--top];
	    return true;
  }
}

bool Stack::push(const Item &item){
  if(top == size){
    return false;
  }else{
    pitems[top++] = item;
	return true;
  }
}

Stack & Stack::operator=(const Stack &st){
   delete [] pitems;
   pitems = new Item[st.size];
   for(int i = 0; i < st.top; ++i)
   {
    pitems[i] = st.pitems[i];
   }
   top = st.top;
   size = st.size;
   return *this;
}

// std::ostream& operator<<(std::ostream &os, bool _bl){
//   if(_bl){
//     os << "true";
//     return os;
//   }else{
//     os<<"false";
//     return os;
//   }
// }