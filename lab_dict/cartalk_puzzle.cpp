/**
 * @file cartalk_puzzle.cpp
 * Holds the function which solves a CarTalk puzzler.
 *
 * @author Matt Joras
 * @date Winter 2013
 */

#include <fstream>
#include <iostream>

#include "cartalk_puzzle.h"
#include "pronounce_dict.h"

using namespace std;

/**
 * Solves the CarTalk puzzler described here:
 * http://www.cartalk.com/content/wordplay-anyone.
 * @return A vector of (string, string, string) tuples
 * Returns an empty vector if no solutions are found.
 * @param d The PronounceDict to be used to solve the puzzle.
 * @param word_list_fname The filename of the word list to be used.
 */
vector<std::tuple<std::string, std::string, std::string>> cartalk_puzzle(PronounceDict d,
                                    const string& word_list_fname)
{
    vector<std::tuple<std::string, std::string, std::string>> ret;
    ifstream wordsFile(word_list_fname);
      string word;
      string ord;
      string wrd;
      if (wordsFile.is_open()) {
          while (getline(wordsFile, word)) {
              ord = word;
              ord.erase(ord.begin());
              wrd = word;
              wrd.erase(wrd.begin()+1);
              if(d.homophones(word, ord) && d.homophones(ord, wrd)){
                tuple<string, string, string> cur(word, ord, wrd);
                ret.push_back(cur);
              }
          }
      }

    /* Your code goes here! */
    return ret;
}
