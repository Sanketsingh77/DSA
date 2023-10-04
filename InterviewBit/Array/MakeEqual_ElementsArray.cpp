// https://www.interviewbit.com/problems/make-equal-elements-array/

int Solution::solve(vector<int> &A, int B)
 { 
            for(int i = 1; i < A.size(); i++)
           { 
                       int val = abs(A[i] - A[i - 1]);
                       if( val == B or val == 2 * B or val == 0 ) {} 
                       else return 0; 
           } 
           return 1; 
}
