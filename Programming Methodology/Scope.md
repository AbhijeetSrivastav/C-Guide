# Scope

Scope of a variable is a block where a variable is declared, defined and used and when a vlock or a region ends, variable is automatically destroyed.

In Layman language we can assume that: Scope = Lifetime of Variable

In C, variables are always statically (or lexically) scoped i.e., binding of a variable can be determined by program text and is independent of the run-time function call stack.

For example, output for the below program is 0, i.e., the value returned by f() is not dependent on who is calling it. f() always returns the value of global variable x.

## Categories of Scopes

- **File Scope:** These variables are usually declared outside of all of the functions and blocks, at the top of the program and can be accessed from any portion of the program. These are also called the global scope variables as they can be globally accessed.

```c
    #include <stdio.h>

    //Global or file scope variable
    int x = 10

    void main(){
        //File Scope or Global Variable can be acessed inside a functio
        print(x)
    }
```

- **Block Scope:**A Block is a set of statements enclosed within left and right braces i.e. ‘{‘ and ‘}’ respectively. Blocks may be nested in C(a block may contain other blocks inside it). A variable declared inside a block is accessible in the block and all inner blocks of that block, but not accessible outside the block. Basically these are local to the blocks in which the variables are defined and are not accessible outside.

```c
    void function(){
        //variable x declared within main funciton block
        int x = 10;
        {
            //x variable defined within the next block
            //this x variable have value 50 within this block
            int x = 50;
            {
                //the block inside the previous block will have x = 50
                print(X);
            }
        }
    }
```

- **Function Prototype Scope:**These variables range includes within the function parameter list. The scope of the these variables begins right after the declaration in the function prototype and runs to the end of the declarations list. These scopes don’t include the function definition, but just the function prototype.

```c
    \\function protoype scope
    \\its not part of the function
    int function(int num1, int num2);

    \\file scope
    int num1;
```

- **Function Scope:**A Function scope begins at the opening of the function and ends with the closing of it. Function scope is applicable to labels only. A label declared is used as a target to go to the statement and both goto and label statement must be in the same function.

```c
    void func1()
{
    {
        // label in scope even
        // though declared later
        goto label_exec;
 
    label_exec:;
    }
 
    // label ignores block scope
    goto label_exec;
}
 
void funct2()
{
 
    // throwserror:
    // as label is in func1() not funct2()
    goto label_exec;
}
```
