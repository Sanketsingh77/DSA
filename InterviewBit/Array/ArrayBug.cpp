//https://www.interviewbit.com/problems/arraybug/
/*


A : [1 2 3 4 5 6]
B : 1

The output :

[2 3 4 5 6 1]

vector<int> Solution::rotateArray(vector<int> &A, int B) {
	vector<int> ret; 
	for (int i = 0; i < A.size(); i++) {
		ret.push_back(A[i + B]);
	}
	return ret; 
}
*/


vector<int> Solution::rotateArray(vector<int> &A, int B) {
    vector<int> ret;
    for (int i = 0; i < A.size(); i++) {
        ret.push_back(A[(i + B)%A.size()]); // Works even if B is greater than size of array input.
    }
    return ret; 
}
