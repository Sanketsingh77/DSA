[DiagonalFlip](https://www.interviewbit.com/problems/diagonal-flip/)


vector<vector<int> > Solution::solve(vector<vector<int> > &arr) 
{

    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        swap(arr[i][j],arr[j][i]);
    }
    return arr;
}


