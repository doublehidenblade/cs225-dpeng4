// your code here
#include "Bar.h"
#include <string>
#include <iostream>
namespace potd{
  void Bar::_copy(Bar & other) {
    delete f_;//////////<<<<<<<<<-----------segfault if "delete [] f_", delete [] calls destructors for array of objects
    f_ = new Foo(other.get_name());
  }

  Bar::Bar(string new_name){
    f_ = new Foo(new_name);
  }
  Bar::Bar(Bar & other){
    f_ = NULL;///////<<<<<<<----------otherwise segfault
    _copy(other);
  }
  Bar::~Bar(){
    delete f_;
  }
  Bar & Bar::operator= (Bar & other){
    //delete f_;
    _copy(other);
    return *this;

  }
  string Bar::get_name(){
    return f_->get_name();
  }
}
