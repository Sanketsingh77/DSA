Problem: [Chips Factory](https://www.interviewbit.com/problems/chips-factory/)

Difficulty - Easy

    int k=-1;
    for(int i=0;i<A.size();i++)
    {
    if(A[i]==0) {
    k=i;break;
    }
    
    if(k==-1){
    return A;
    }
    }
    for(int i=k+1;i<A.size();i++) {
    if(A[i]!=0)
    {
     swap(A[i],A[k]); 
     k++;
    }
    }
    return A;

    
