/* 
https://www.interviewbit.com/problems/array-sum/
*/


vector<int> Solution::addArrays(vector<int> &A, vector<int> &B) {
    if(A.size()<B.size()) A.swap(B); // making A bigger than B
    int i=A.size()-1, j=B.size()-1, carry=0, sum=0;
    while(i>=0){
        sum = (j>=0) ? A[i]+B[j]+carry : A[i]+carry;
        A[i] = sum%10;
        carry = sum/10;
        i--; j--;
    }
    if(carry) A.insert(A.begin(), carry);
    return A;
}
