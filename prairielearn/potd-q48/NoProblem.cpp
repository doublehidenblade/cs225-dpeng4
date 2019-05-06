
vector<string> NoProblem(int start, vector<int> created, vector<int> needed) {

    // your code here
    std::vector<string> res;
    int questions = start;
    for(unsigned i=0;i<created.size();i++){
      if(questions>=needed[i]){
        res.push_back("No problem! :D");
        questions -= needed[i];
      }else{
        res.push_back("No problem. :(");
      }
      questions += created[i];
    }
  return res;
}
