// your code here
#include "Foo.h"<<<<<<-------otherwise "unknown type name"
#include <string>
using namespace std;
namespace potd{
  class Bar {
    public:
      Bar(string);
      Bar(Bar & other);//declare copy constructor
      ~Bar();//declare destructor
      Bar & operator= (Bar & other);//operator overload
      string get_name();
    private:
      Foo * f_;
      void _copy(Bar & other);
  };
}
