/*
initializing result & getting rid off the leftmost digit at each iteration and adding it to the double (<< 1 works like * 2 in this case) 
to previously computed result, at each iteration removing the just used leftmost bit with a right shift: >> 1.
*/

unsigned int Solution::reverse(unsigned int A) {
    uint32_t result= 0;
    for(int i=0; i<32; i++)
        result = (result<<1) + (A>>i &1);
    return result;
}
