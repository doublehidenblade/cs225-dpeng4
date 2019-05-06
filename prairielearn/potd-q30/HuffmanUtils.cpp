#include "HuffmanNode.h"
#include "HuffmanUtils.h"
#include <string>
#include <iterator>
#include <stack>

using std::string;

/**
 * binaryToString
 *
 * Write a function that takes in the root to a huffman tree
 * and a binary string.
 *
 * Remember 0s in the string mean left and 1s mean right.
 */

string binaryToString(string binaryString, HuffmanNode* huffmanTree) {
  /* TODO: Your code here */
  string res = "";
  HuffmanNode *curr = huffmanTree;
  for (const char& c : binaryString) {
    if(curr==NULL){
      continue;
    }
    if(c=='1'){
      // std::cout<<'1';
      curr = curr->right_;
    }else{
      // std::cout<<'0';
      curr = curr->left_;
    }
    if(curr->left_==NULL && curr->right_==NULL){
      res = res + curr->char_;
      curr = huffmanTree;
    }
  }
  return res;
}

/**
 * stringToBinary
 *
 * Write a function that takes in the root to a huffman tree
 * and a character string. Return the binary representation of the string
 * using the huffman tree.
 *
 * Remember 0s in the binary string mean left and 1s mean right
 */
bool getpath(char c, HuffmanNode* curr, string &path);

string stringToBinary(string charString, HuffmanNode* huffmanTree) {
  /* TODO: Your code here */
  string res = "";
  string path = "";
  std::stack<HuffmanNode*> s;
  HuffmanNode *curr = huffmanTree;
  for (const char& c : charString) {
    path = "";
    getpath(c, curr, path);
    res = res + path;
  }
  return res;
}

bool getpath(char c, HuffmanNode* curr, string & path) {
  //post order
  bool left = 0;
  bool right = 0;
  if(curr==NULL){
    path.pop_back();
    return 0;//0 for not found
  }
  //traverse left
  path = path + '0';
  left = getpath(c, curr->left_, path);
  if(left==1) return 1;//1 for found

  //traverse right
  path = path + '1';
  right = getpath(c, curr->right_, path);
  if(right==1) return 1;

  if(curr->char_==c) return 1;
  path.pop_back();
  return 0;
}
