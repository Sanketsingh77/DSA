int Solution::highestScore(vector<vector<string> > &A) {
    std::sort(A.begin(), A.end());
    int n = A.size();

    int total = stoi(A[0][1]);
    int max = -999999;
    int pointer  = 1;
    string temp(A[0][0]);
   
    for(int i=1;i<n;i++){
       
       if(A[i][0]!=temp){
           
           total/=pointer ;
       
           if(max<total){
               max = total;
           
           }
     
           total = stoi(A[i][1]);
           temp = A[i][0];
           pointer = 1;
           
       }
       else{
           pointer++;
           total  += stoi(A[i][1]);
           
       }
    }
     total/=pointer ;
 
           if(max<total){
               max = total;
           }
   
    return max;

}
