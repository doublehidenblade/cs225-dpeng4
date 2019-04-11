/**
 * @file anagram_dict.cpp
 * Implementation of the AnagramDict class.
 *
 * @author Matt Joras
 * @date Winter 2013
 */

#include "anagram_dict.h"

#include <algorithm> /* I wonder why this is included... */
#include <fstream>
#include <iostream>

using std::string;
using std::vector;
using std::ifstream;

/**
 * Constructs an AnagramDict from a filename with newline-separated
 * words.
 * @param filename The name of the word list file.
 */
AnagramDict::AnagramDict(const string& filename)
{
    /* Your code goes here! */
    ifstream wordsFile(filename);
    string word;
    string key;
    vector<string> vec;
    if (wordsFile.is_open()) {
      while (getline(wordsFile, word)) {
        //std::cout<<word<<std::endl;
        key = word;
        std::sort(key.begin(), key.end());
        std::map<string, vector<string>>::iterator it = dict.find(key);
        if(it==dict.end()){
          dict[key] = vec;
        }
        dict[key].push_back(word);
      }
    }

}

/**
 * Constructs an AnagramDict from a vector of words.
 * @param words The vector of strings to be used as source words.
 */
AnagramDict::AnagramDict(const vector<string>& words)
{
    /* Your code goes here! */
    string key;
    vector<string> vec;
    for(unsigned i=0;i<words.size();i++){
      // std::cout<<words[i]<<std::endl;
      key = words[i];
      std::sort(key.begin(), key.end());
      std::map<string, vector<string>>::iterator it = dict.find(key);
      if(it==dict.end()){
        dict[key] = vec;
      }
      dict[key].push_back(words[i]);
    }
}

/**
 * @param word The word to find anagrams of.
 * @return A vector of strings of anagrams of the given word. Empty
 * vector returned if no anagrams are found or the word is not in the
 * word list.
 */
vector<string> AnagramDict::get_anagrams(const string& word) const
{
    /* Your code goes here! */
    string key = word;
    std::sort(key.begin(), key.end());
    return dict.find(key)->second;
}

/**
 * @return A vector of vectors of strings. Each inner vector contains
 * the "anagram siblings", i.e. words that are anagrams of one another.
 * NOTE: It is impossible to have one of these vectors have less than
 * two elements, i.e. words with no anagrams are ommitted.
 */
vector<vector<string>> AnagramDict::get_all_anagrams() const
{
    /* Your code goes here! */
    vector<vector<string>> ret;
    for(std::map<string, vector<string>>::const_iterator it = dict.begin();it!=dict.end();it++){
      vector<string> vec = it->second;
      if(vec.size()>=2){
        ret.push_back(vec);
      }
    }
    return ret;
}
