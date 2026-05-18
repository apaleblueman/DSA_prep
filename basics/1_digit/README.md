# Problem Statement: 
## Given an integer N, return the number of digits in N. 

### Examples
Example 1:
Input:N = 12345
Output:5
Explanation:  The number 12345 has 5 digits.
                        
Example 2:
Input:N = 7789              
Output: 4
Explanation: The number 7789 has 4 digits.

### What i learned?

#### approach 1
There are basically two approaches , first one is brute forcing barbarian approach: use a counter to track number of digits **while** looping(<em>see what i did there?</em>) until number is reduced to zero via dividing with 10 (checking if num is still > than 0)and returning int only.Then final value of counter is number of digits. 
**Note**: this solution works for positive integers only for now

#### approach 2
**MATHS** - not the hero i wanted but the hero i needed!
see there is apparently a formula which states that  if we take log base 10 of any number and add 1 to it we get total number of digits for that number. Did i come up with this? nope. Would i use it over other method ? Yup. Because approach 1 takes O(log10N + 1) while second approach takes O(1) time , which is better?
**Note** : ensure to cast this result into **int** for any fractional part mess.
**Note to myself**: learn how logarithm actually mean and work under the hood!
