# factorial

The basic idea that i can come up with is to break down the very large factorial of a number like 100 into smaller parts
For eg , if we are calculating the factorial of 10 , we can distribute it's results in chunks :-
  1) The product of all numbers b/w 1 and 3 i.e 6
  2) The product of all numbers b/w 4 and 6 i.e 120
  3) The product of all numbers b/w 7 and 10 i.e 5040

Then we can multiply all these numbers together to finally get the factorial of the number under consideration
I am not able to figure out a way in which we can multiply all these numbers and get the final answer as the product of these  numbers would still be out of the permissible range for an unsigned integer of 8 bytes 
