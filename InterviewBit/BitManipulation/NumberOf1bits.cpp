/* https://www.interviewbit.com/problems/number-of-1-bits/

Using count to store the occurence of '1' bit in the binary representation and running a loop until n is not equal to zero. n & 1 gives the right-most bit or the LSB(least signigicant bit).

For example - Lets say 3 which can be represented as '101' in binary form, (101 & 1) gives the last bit '1' (if both the bits are 1 then the output is 1 and if one of the bits is 0 then output is 0). This way we can tell if the last bit is zero or one.

if the bit is 1, 'count' is incremented.

n = n >> 1 right shifts the number by 1 bit and this happends till the number becomes 0 and loop ends. */

int Solution::numSetBits(unsigned int A) {
    int count = 0;
    while(A != 0)
    {
        if(A & 1)
        {
            count++;
        }
        A = A >> 1;
    }
    return count;
}
