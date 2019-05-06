#include "MinHeap.h"
#include <iostream>

vector<int> lastLevel(MinHeap & heap)
{
        // Your code here
        vector<int> ans;
        vector<int> last;
        // int inf = numeric_limits<int>::min();
        heap.insert(999999999);
        while(heap.peek()!=999999999){
          ans.push_back(heap.pop());
        }
        std::cout<<ans.size()<<std::endl;
        unsigned lastLevel = 1;
        while(lastLevel*2<=ans.size()){
          lastLevel*=2;
        }
        std::cout<<lastLevel<<std::endl;
        for(unsigned i=0;i<ans.size();i++){
          if(i>=lastLevel-1){
            last.push_back(ans[i]);
          }
        }
        return last;
}
// 4
// 10 30
// 90 110 150 300
// 500
