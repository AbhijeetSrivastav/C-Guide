# Recursion

The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called as recursive function.

The idea is to represent a problem in terms of one or more smaller problems, and add one or more base conditions that stop the recursion.

In the recursive program, the solution to the base case is provided and the solution of the bigger problem is expressed in terms of smaller problems.

## Types of Recursion

A function is called **direct recursive** if it calls the same function.
A function is called **indirect recursive** if it calls another function then this another function calls the recursive function directly or indirectly.

```c
    // An example of direct recursion
    void directRecFun()    {
        // Some code....

        directRecFun();
    }

    // An example of indirect recursion
    void indirectRecFun1(){
        // Some code...

        indirectRecFun2();
    }
    void indirectRecFun2()    {
        // Some code...

        indirectRecFun1();
    }
```

### What is difference between tailed and non-tailed recursion?

A recursive function is tail recursive when recursive call is the last thing executed by the function.

### How memory is allocated to different function calls in recursion?

When any function is called from main(), the memory is allocated to it on the stack. A recursive function calls itself, the memory for a called function is allocated on top of memory allocated to calling function and different copy of local variables is created for each function call. When the base case is reached, the function returns its value to the function by whom it is called and memory is de-allocated and the process continues.


```c
    // C code to implement Fibonacci series
    #include <stdio.h>

    // Function for fibonacci
    int fib(int n){
        //Stop condition
        if (n == 0)
            return 0;
     
        //Stop condition
        if (n == 1 || n == 2)
            return 1;
     
        //Recursion function
        else
            return (fib(n - 1) + fib(n - 2));
    }
     
    // Driver Code
    int main(){
        // Initialize variable n.
        int n = 5;

        printf("Fibonacci series " "of %d numbers is: ", n);
     
        // for loop to print the fiboancci series.
        for (int i = 0; i < n; i++) {
            printf("%d ", fib(i));
        }
        return 0;
    }
```
