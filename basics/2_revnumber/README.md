# Problem Statement: Given an integer N return the reverse of the given number.


**Note**: If a number has trailing zeros, then its reverse will not include them. For e.g , reverse of 10400 will be 401 instead of 00401. 


## What i learned?

To solve this i brainstormed a mathematical formula:

`reversednumber = (ognumber%10)* 10^(count-1)`

and then update the ognum = ognum / 10;

do this in a while loop and use count formula from [previous]("https://github.com/apaleblueman/DSA_prep/tree/main/basics/1_digit") problem (logbase10+1) to get total digits early on. Decrement the digits to get right count to use in my formula and this once run the on the number and ognum is reduced to zero returns a reversed number. 

**However** this does not account for trailing zeroes correctly and doesnt do any good for signed numbers.

So another better approach would be to not rely on condition that ognum reduces to 0 , and not to rely on a counter that decrements, because if we use modulo condition here than the loop stops at first 0 it encounters and if rely on the formula i came up with we would need seprate while loop logic to truncate trailing 0s. So instead i cheated(after struglling for some time) and looked a bit at the answer.
So better formula to use that eliminates need for counter and modulo conditional check. 
we use `revnum = (num % 10) + revnum*10` which implicitly handles trailing zeroes as addition of zero to a number doesnt have any effect!, it handles signed numbers as well because in our `while(num!=0)` this condition doesnt bound as >  or < and only stops at zero. So number can either come down/ reduce to zero as case in positive numbers or grow towards zero as case in negative nums.

### So did i solve it?
**NOPE**
while this code would pass the leetcode test cases for problem #7 but once i submitted it i was struck with this error:
`Line 7: Char 43: runtime error: signed integer overflow: 964632435 * 10 cannot be represented in type 'int' (solution.cpp)
SUMMARY: UndefinedBehaviorSanitizer: undefined-behavior prog_joined.cpp:16:43`

### TBC....
