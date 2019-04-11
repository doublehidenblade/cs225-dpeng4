/**
 * @file common_words.cpp
 * Implementation of the CommonWords class.
 *
 * @author Zach Widder
 * @date Fall 2014
 */

#include "common_words.h"

#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

using std::string;
using std::vector;
using std::ifstream;
using std::cout;
using std::endl;
using std::feof;

string remove_punct(const string& str)
{
    string ret;
    std::remove_copy_if(str.begin(), str.end(), std::back_inserter(ret),
                        std::ptr_fun<int, int>(&std::ispunct));
    return ret;
}

CommonWords::CommonWords(const vector<string>& filenames)
{
    // initialize all member variables
    init_file_word_maps(filenames);
    init_common();
}

void CommonWords::init_file_word_maps(const vector<string>& filenames)
{
    // make the length of file_word_maps the same as the length of filenames
    file_word_maps.resize(filenames.size());

    // go through all files
    for (size_t i = 0; i < filenames.size(); i++) {
        // get the corresponding vector of words that represents the current
        // file
        vector<string> words = file_to_vector(filenames[i]);
        /* Your code goes here! */
        map<string, unsigned int> memo;
        // a memo each file
        for(unsigned j=0;j<words.size();j++){
          map<string, unsigned int>::iterator lookup = memo.find(words[j]);
          if (lookup == memo.end()) {
              memo[words[j]] = 1;
          }else{
            memo[words[j]]++;
          }
        }
        file_word_maps[i] = memo;
    }
    // for(unsigned i=0;i<file_word_maps.size();i++){
    //   //for every file:
    //   std::cout<<"file "<<i<<std::endl;
    //   for(map<string, unsigned int>::iterator fileit = file_word_maps[i].begin();fileit!=file_word_maps[i].end();fileit++){
    //     //for every hashed word
    //     std::cout<<fileit->first<<"=>"<<fileit->second;
    //   }
    //   std::cout<<std::endl;
    // }
}

void CommonWords::init_common()
{
    /* Your code goes here! */
    for(unsigned i=0;i<file_word_maps.size();i++){
      //for every file:
      for(map<string, unsigned int>::iterator fileit = file_word_maps[i].begin();fileit!=file_word_maps[i].end();fileit++){
        //for every hashed word
        map<string, unsigned int>::iterator comit = common.find(fileit->first);
        if(comit==common.end()){
          common[fileit->first] = 1;
        }else{
          common[fileit->first]++;
        }
      }
    }
    // for (map<string, unsigned int>::iterator comit=common.begin(); comit!=common.end(); ++comit){
    //   std::cout<<comit->first<<"=>"<<comit->second<<std::endl;
    // }
}

/**
 * @param n The number of times to word has to appear.
 * @return A vector of strings. The vector contains all words that appear
 * in each file >= n times.
 */
vector<string> CommonWords::get_common_words(unsigned int n) const
{
    vector<string> out;
    bool valid;
    /* Your code goes here! */
      for (map<string, unsigned int>::const_iterator comit=common.begin(); comit!=common.end(); ++comit){
        //for every word in common
        // if(comit->second != file_word_maps.size()){continue;}
        valid = true;
        for(unsigned i=0;i<file_word_maps.size();i++){
          //check every file
          map<string, unsigned int>::const_iterator fileit = file_word_maps[i].find(comit->first);
          if(fileit == file_word_maps[i].end() || fileit->second < n){
            valid = false;
          }
        }
        if(valid){
          out.push_back(comit->first);
        }
      }
    return out;
}

/**
 * Takes a filename and transforms it to a vector of all words in that file.
 * @param filename The name of the file that will fill the vector
 */
vector<string> CommonWords::file_to_vector(const string& filename) const
{
    ifstream words(filename);
    vector<string> out;

    if (words.is_open()) {
        std::istream_iterator<string> word_iter(words);
        while (!words.eof()) {
            out.push_back(remove_punct(*word_iter));
            ++word_iter;
        }
    }
    return out;
}
