#include <string>
#include <stack>
#include <iostream>

using namespace std;

bool isValid(string input) {
    stack<char> st;
    for(char& c : input) {
      if(c=='('||c=='{'||c=='['){
        st.push(c);
        continue;
      }

      if(c==']'){
        if(st.empty()){
          return false;
        }
        if(st.top()!='['){
          return false;
        }
        st.pop();
        continue;
      }
      if(c=='}'){
        if(st.empty()){
          return false;
        }
        if(st.top()!='{'){
          return false;
        }
        st.pop();
        continue;
      }
      if(c==')'){
        if(st.empty()){
          return false;
        }
        if(st.top()!='('){
          return false;
        }
        st.pop();
        continue;
      }
    }
    return st.empty();    // modify this!
}
