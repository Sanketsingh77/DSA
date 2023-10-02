Problem - [GreaterThanAll](https://www.interviewbit.com/problems/greater-than-all/discussion/p/solution-and-explanation/362921/2817/)
Difficulty - Easy

the count of elements that are greater than previous greater element. 
ex- [1,2,3,4]
the ans is 4 as the values are increasing but,
in [1,5,2,3,4,6,7] the ans is 3 as the first max is 5 then the maximum is 6 then 7

taking two variables for count and maximum element
initializing the count to 1 and the max to 1st element of array
then a for loop for elemnts of the array and comparing it with max variable, if condition true increment count and update max value

    int count = 1;

    int max = A[0];

    for(int i=1; i<A.size(); i++){

        if(A[i] > max){

            max = A[i];

            count++;

        }
    }
    return count;
