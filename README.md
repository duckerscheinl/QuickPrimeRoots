# QuickPrimeRoots

Helps you find all prime roots of one number at a time quickly.

## Build:
first navigate into most outter build directory then:

  1. cmake .
  2. make

## Run:
to run the executable run:

  - ./QuickPrimeRoots number

## Example:

  - ./QPRs 13

> [!NOTE]
> Result: 13

##Remarks:

So far two algorithms are run and compared. One is the naive implementation using only a reasonable upper bound, second is the one trying to be smarter by swapping to increment and decrement, once divide only reduces the intervall minimally (by less than 7). The number was determined through cycle latency (idiv: 41, imult: 4, iadd: 1, comp: 1). Due to pipelined loops this assumption may not hold.
