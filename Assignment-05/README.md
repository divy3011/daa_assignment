# DAA
# Assignment 5
**Team Members**
| Enrollment No. | Name            | Github-Id   |
| :---:          |      :----:     |        :---:|
| IIT2019210     |`Aditya Aggarwal`| Aditya-2001 |
| IIT2019211     | `Divy Agrawal`  | divy3011    |
| IIT2019212     | `Aman Rubey`    | amanrubey   |

**Group No ---** 9

**Faculty Name ---** Rahul Kala Sir

**Mentor Name ---** Md. Meraz Sir


***

## This is the readme.md file for our Assignment-05
---
## Problem Statement
Check whether element X is present in a vector of elements or not. Solve using divide and  conquer algorithm.


## How to use code
```
#Download project
$ git clone https://github.com/divy3011/daa_assignment.git
```
Project Initialize
```
$ cd daa_assignment
$ cd Assignment-05

```
---

Run the code
```
$ g++ search_element_x.cpp -o search_element_x
$ ./search_element_x
```


**Test case**

```
Test Case-1
Input:
   4 999
   34 4 56 999
Out:
   999 is present
#--------------------------#
Test Case-2
Input:
   10 78023
   68014 99557 22278 70810 68884 62400 62390 89561 20371 9724
Out:
   78023 is not present
```

---

## INTRODUCTION
We can multiply two matrices using a simple divide and conquer approach, which gives the time complexity = O(N^3), but here, we will use Strassen’s algorithm. Strassen’s algorithm is basically a divide and conquer approach only but the difference is in the number of recursive calls. 



## COMPLEXITY ANALYSIS
**Time-Complexity**

Suppose if the time-complexity  of  the  problem  consisting  of  N  elements is  T(N)  then  the  time-complexity of sub-problems  of  this problem will be T(N/2) approximately and let time-complexity for executing rest statements be O(1).
```math
    T(N) = 2T(N/2) + O(1)
```
Therefore, by using Master's Theorem
```math
    T(N) = O(N)
```
<figure style="text-align: center;">
  <img src="./Latex Code/Time.png" alt="Time-Complexity Graph"/>
</figure>


**Auxiliary Space-Complexity**

The function solve(low,high) is being called approximately 2N-1 times that is O(N) times and each time when it is called 3 variables of size 4 bytes is created. Therefore, Auxiliary Space-Complexity will be,
```math
    T(N) = O(N)
```
<figure style="text-align: center;">
  <img src="./Latex Code/Space.png" alt="Space-Complexity Graph"/>
</figure>


***
## References
1. Introduction to Algorithms 3rd Edition by Clifford Stein, Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest
2. Algorithm Design by J Kleinberg and E Tardos
3. Abraham Silberschatz Peter B. Galvin and Greg Gagne, Operating System Concepts, Wiley 8th Edition, 2008
4. [Divide and Conquer](https://en.wikipedia.org/wiki/Divide-and-conquer_algorithm)
5. [Complexity Analysis](https://stackoverflow.com/questions/11032015/how-to-find-time-complexity-of-an-algorithm)
6. [Divide and Conquer Paradigm](http://www.csun.edu/~mam78887/MAMANLEY.pdf)
