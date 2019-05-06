// Your code here!
#include "Thing.h"
#include <sstream>
#include <iostream>
#include <string>

namespace potd{
  Thing::Thing(int size){
    props_max_ = size;
    props_ct_ = 0;
    properties_ = new std::string[size];
    values_ = new std::string[size];
  }
  Thing::Thing(const Thing & other){
   //_destroy();<<copy ctr dont need to destroy any memory, it's just making new memory
   _copy(other);
  }

  Thing & Thing::operator=(const Thing & other){
    _copy(other);
    return *this;
  }
  Thing::~Thing(){
    _destroy();
  }
  int Thing::set_property(std::string prop, std::string value){
    for (int i = 0; i < props_ct_; i+= 1)  {
      if(properties_[i] == prop){
        values_[i] = value;
        return i;
      }
    }
    if (props_ct_ < props_max_){
      properties_[props_ct_] = prop;
      values_[props_ct_] = value;
      props_ct_ ++;
      return props_ct_-1;
    }
    else{
      return -1;
    }
  }
  std::string Thing::get_property(std::string prop){
    for (int i = 0; i < props_ct_; i++) {
      if(properties_[i] == prop){
        return values_[i];
      }
    }
    return "";
  }
  void Thing::_copy(const Thing & other){
    props_ct_ = other.props_ct_;
    props_max_ = other.props_max_;
    properties_ = new std::string[props_max_];
    values_ = new std::string[props_max_];
    for(int i = 0; i<props_ct_; i++){
      properties_[i] = other.properties_[i];
      values_[i] = other.values_[i];
    }

  }
  void Thing::_destroy(){
    delete [] properties_;
    delete [] values_;
  }
}
