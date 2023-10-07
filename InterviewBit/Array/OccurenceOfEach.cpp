//Occurence of Each Number

https://www.interviewbit.com/problems/occurence-of-each-number/

    map<int,int> rbmap;

    for(int i = 0 ; i < A.size();i++)
        rbmap[A[i]]++;
    vector<int> ans;
    for(auto i : rbmap)
        ans.push_back(i.second);
    return ans;

