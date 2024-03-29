/*
Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target. 
Return the sum of the three integers. 
You may assume that each input would have exactly one solution.

Example: 
given array S = {-1 2 1 -4}, 
and target = 1.

The sum that is closest to the target is 2. (-1 + 2 + 1 = 2)

https://www.interviewbit.com/problems/3-sum/
*/

int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    auto n = A.size();
    int diff = INT_MAX;
    int result = 0;
    for (auto i = 0; i<n-2; ++i)
    {
        int l = i+1, r = n-1;
        while (l<r)
        {
            auto sum = A[i] + A[l] + A[r];
            auto diff2 = sum>B ? sum-B : B-sum;
            if(diff2<diff)
            {
                result = sum; diff = diff2;
            }
            if(sum>B)
                --r;
            else
                ++l;
        }
    }
    return result;
}
