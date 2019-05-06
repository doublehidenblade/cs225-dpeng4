#include <iostream>
#include <vector>
#include "OfficeHour.h"

/*
Given the current Office Hour queue and the currently on-duty staffers, return
how long the nth student will need to wait before a Staffer can reach them
Return -1 if there are no staff available to help the nth student

@param queue A queue containing the students currently waiting for help
@param onDutyStaff  A vector of Staffers currently on duty
@param nthStudent   The student for whom we are calculating a wait time
@return             How many minutes the nth student will have to wait before getting help
*/
int waitTime(queue<Student> queue, vector<Staffer> onDutyStaff, int nthStudent) {
    // Your code here!
    if(nthStudent<1 || nthStudent>int(queue.size())){return -1;}
    int n = 0;
    std::vector<int> count;
    Student *cur;
    for(unsigned i=0;i<onDutyStaff.size();i++){
      count.push_back(0);
    }
    for(unsigned t=0;t<100;t++){
      for(unsigned i=0;i<onDutyStaff.size();i++){
        if(count[i]==0 && onDutyStaff[i].getEnergyLevel()>0){
          cur = &queue.front();
          queue.pop();
          n = n + 1;
          if(n==nthStudent){return t;}
          count[i] = onDutyStaff[i].answerQuestion(cur->getQuestionType(), cur->getTimeNeeded());
        }
        count[i] = count[i]-1;
      }
    }
    return -1;
}
