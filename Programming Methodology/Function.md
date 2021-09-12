# Functions

A function is a set of statements that take inputs, do some specific computation and produces output.

The idea is to put some commonly or repeatedly done task together and make a function so that instead of writing the same code again and again for different inputs, we can call the function.

## Structure of a Function

### 1. Funciton Declaration and  Definition

A function declaration tells the compiler about the number of parameters function takes, data-types of parameters and return type of function. Putting parameter names in function declaration is optional in the function declaration, but it is necessary to put them in the definition.

Funciton Definition is actual body of the function.

```c
    returnType funcitonName([arg1Type, arg1, arg2Type, arg2,.....]);{
        //code
    }

```

Example:

```c
    int max (int num1, int num2){
        t = num1 + num2;
        return t;
    }
```

The parameters passed to function are called actual parameters.
The parameters received by function are called formal parameters.

In the below code 10 and 20 are actual parameter but x and y are formal parameter.

```c  
    #include <stdio.h>
    //formal paremeter
    int max(int x, int y){
        //some code
    }
    int main(void)
    {
        int a = 10, b = 20;
        int m = max(a, b)  //actual parameter
        //some code
    }
```

Value to a function can be passed in two ways:

- **Pass by Value:** In this parameter passing method, values of actual parameters are copied to function’s formal parameters and the two types of parameters are stored in different memory locations. So any changes made inside functions are not reflected in actual parameters of caller.

- **Pass by Refrence:** Both actual and formal parameters refer to same locations, so any changes made inside the function are actually reflected in actual parameters of caller.

Example: The function fun() expects a pointer ptr to an integer (or an address of an integer). It modifies the value at the address ptr. The dereference operator *is used to access the value at an address. In the statement ‘*ptr = 30’, value at address ptr is changed to 30. The address operator & is used to get the address of a variable of any data type. In the function call statement ‘fun(&x)’, the address of x is passed so that x can be modified using its address.

```c
    # include <stdio.h>
    void fun(int *ptr){
        *ptr = 30;
    }
    
    int main(){
        int x = 20;
        fun(&x);
        printf("x = %d", x);
        
        return 0;
    }
```

### 2. Funciton Call

While creating a C function, you give a definition of what the function has to do. To use a function, you will have to call that function to perform the defined task.

When a program calls a function, the program control is transferred to the called function. A called function performs a defined task and when its return statement is executed or when its function-ending closing brace is reached, it returns the program control back to the main program.

To call a function, you simply need to pass the required parameters along with the function name, and if the function returns a value, then you can store the returned value.

```c
    int max(int num){
        //some code
    }

    //calling a function
    int t = max(10);
```
