#include "Pattern.h"
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

bool wordPattern(std::string pattern, std::string str) {
    // std::cout<<pattern<<std::endl;
    std::vector<string> words;
    string word;
    std::vector<char> setp;
    std::vector<string> setw;
    for(unsigned i=0;i<str.size();i++){
      if(i==str.size()-1){
        word = word + str[i];
        // std::cout<<word<<std::endl;
        words.push_back(word);
      }
      if(str[i]!=' '){
        word = word + str[i];
      }else{
        // std::cout<<word<<std::endl;
        words.push_back(word);
        word = "";
      }
    }
    if(words.size()!=pattern.size()){return false;}
    for(unsigned i=0;i<pattern.size();i++){
      if(std::find(setp.begin(), setp.end(), pattern[i])==setp.end()){
        // std::cout<<"setp++"<<setp.size()<<std::endl;
        setp.push_back(pattern[i]);
      }
      if(std::find(setw.begin(), setw.end(), words[i])==setw.end()){
        // std::cout<<"setw++"<<setw.size()<<std::endl;
        setw.push_back(words[i]);
      }
      // std::cout<<"p: "<<setp.size()<<", w: "<<setw.size()<<std::endl;
      if(setp.size()!=setw.size()){return false;}
    }
    return true;
}
