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

so this happens because if a large enough input is given , then once its reversed or even if its just multiplied by 10 , then it can grow very quickly such that it exceeds 2^31 size of 32 bit integer constraint causing an overflow, crashing the program.

In C++ there are macros like `INT_MAX`, `INT_MIN` that correspond to integer type's minimum and maximum value in context of the program they are used in.So we will use these macros to check of over or underflow. In the problem statement in leet we are give constraint as `-231 <= x <= 231 - 1`. So we can simply implement these in an if condition using || operator, but the trick here is that we must detect the overflow before it can actually execute or in this case crash the program.

In our code on line 7 we can add the if condition , however we cannot just check if `revnum > INT_MAX` or `revnum < INT_MIN` because revnum even if it is small, can become exponentially big once inputted into formula.
so the problem is that once revnum gets evaluated in this formula: `revnum * 10 + digit` it can get too large or too small exponentially. So we really need to check if revnum exceeds our constraints when multiplied by 10, we can ignore digit here as its a small number always(0-9), but here is another problem.

checking this condition `revnum * 10` itself can cause overflow !
so here we rearrange the expression to check revnum itself against some value that can tell us wether it can overflow or not!

`revnum*10 > INT_MAX`
`revnum > INT_MAX/10`

> this is our overflow check!!

similarly we can check for underflow using 

`revnum < INT_MIN/10`

Now this gets submitted and passes leetcode tests, but we can still optimize this. 
When we check for above two cases , there are also some cases where revnum is equal to the constraint itself ie `revnum == INT_MAXorMIN` , then the decision depends on lastdigit should be in `[7 to -8]` range to be considered overflow/underflow safe!

So for these the conditions become:

### for overflow:

> `if((revnum > INT_MAX/10)||((revnum == INT_MAXX)&& revnum > 7))`


### for underflow:

> `if((revnum < INT_MIN/10)||((revnum == INT_MIN)&& revnum < -8)`

This is due to symmetry and boundaries of constraints!

