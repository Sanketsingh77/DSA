// https://www.interviewbit.com/problems/total-moves-for-bishop/

int Solution::solve(int a, int b) {
int i = min(a - 1, b - 1);
int j = min(8 - a, 8 - b);
int k = min(8 - a, b - 1);
int l = min(a - 1, 8 - b);
return i + j + k + l;
}
