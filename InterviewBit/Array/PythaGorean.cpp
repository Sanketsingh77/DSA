https://www.interviewbit.com/problems/pythagorean-triplets/

 int count = 0;
 int arr[A+1];
 arr[0]=0;
 for(int i=1;i<=A;i++){
    arr[i]=i*i;
 }
 for(int i=A;i>=1;i--)
 {
    for(int j=1,k=A;j<k;)
    {
       
        if((arr[j]+arr[k])==arr[i])
        {
            count++;
            k--;
            j++;
        }
        else if((arr[j]+arr[k])>arr[i])
        {  
        k--;
        }
        else
        {  
        j++;
        }
    }
 }
