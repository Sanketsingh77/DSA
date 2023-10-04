// https://www.interviewbit.com/problems/first-missing-integer/

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

bool checkCorrect(int A, int index){
    if((A-1) == index){
        return true;
    }
    return false;
}

void makeCorrect(vector<int>& A, int index){
    if(A[index] < A.size()){
        if(A[A[index]-1] != A[index]){
            swap(A[A[index]-1], A[index]);
            if(A[index] > 0){
                bool a = checkCorrect(A[index], index);
                if(a == false){
                    makeCorrect(A, index);
                }
            }
        }
    }
}

int Solution::firstMissingPositive(vector<int> &A) {

    bool check;
    for(int i = 0; i < A.size(); i++){
        if(A[i] > 0){
            check = checkCorrect(A[i], i);
            if(check == false){
                makeCorrect(A, i);  
            }
        }
    }
    
    for(int i = 0; i < A.size(); i++){
        if(A[i] != (i+1)){
            return i+1;
        }
    }
    return A.size()+1;
}
