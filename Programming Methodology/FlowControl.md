# Flow Control

Flow control is the order in which individual statements, functions or instructions are executed.

## Categories of Flow Control

### 1. Branching

Branching is deciding what actions to take. Branching is so called because the preogram chooses to fillow one branch or another.

#### 1.1 IF Statement

It takes an expression in parenthesis and an statemenr or block of statements.
If the expression is TRUE then the statement or block of statements get exexutes otehrwise skipped.

```c
    if (condition){
        //code to be executed
    }
```

#### 1.2 IF-ELSE Statement

It takes an expression in parenthesis and an statemenr or block of statements.
If the expression is TRUE then the statement or block of statements get exexutes otehrwise else block statements are exexuted.

```c
    if (condition){
        //code to be executed
    }
    else{
        //some code
    }
```

#### 1.3 IF-ELSE-IF Statement

The if-else-if ladder statement executes one condition from multiple statements. The execution starts from top and checked for each if condition. The statement of if block will be executed which evaluates to be true. If none of the if condition evaluates to be true then the last else block is evaluated.

```c
    if (condition1){
        //code to be executed
    }
    else if (condition2){
        //some code
    }
    else{
        //some more code 
        //get executed only if all conditions false
    }
```

#### 1.4 Nested IF-ELSE Statement

The if-else-if ladder statement executes one condition from multiple statements. The execution starts from top and checked for each if condition. The statement of if block will be executed which evaluates to be true. If none of the if condition evaluates to be true then the last else block is evaluated.

```c
    if (condition1){
        //code to be executed
        if (condition2){
            //code to be executed
        }
    }
    else{
        //some more code 
    }
```

#### 1.5 Switch Statement

Switch statement is an alternative to long if-else-if ladders. The expression is checked for different cases and the one match is executed. break statement is used to move out of the switch. If the break is not used, the control will flow to all cases below it until break is found or switch comes to an end. There is default case (optional) at the end of switch, if none of the case matches then default case is executed.

```c
    switch (expression)
    {
        case value1:
            //some code
            break;
        case value2:
            //some code
            break;
        default:
            //default code
    }
```

### 2. Loops

 A loop is a sequence of instructions that is repeated until a certain condition is reached.

- Counter not Reached: If the counter has not reached the desired number, the next instruction in the sequence returns to the first instruction in the sequence and repeat it.
- Counter reached: If the condition has been reached, the next instruction “falls through” to the next sequential instruction or branches outside the loop.

Their are mainly two types of loops:

- **Entry Controlled:** In this type of loops the test condition is tested before entering the loop body. For Loop and While Loop are entry controlled loops.
- **Exit Controlled:** In this type of loops the test condition is tested or evaluated at the end of loop body. Therefore, the loop body will execute atleast once, irrespective of whether the test condition is true or false. do – while loop is exit controlled loop.

#### 2.1 For Loop

A for loop is a repetition control structure which allows us to write a loop that is executed a specific number of times. The loop enables us to perform n number of steps together in one line.

```c
    for (initializationExpr, testExpr, updateExpr){
        //statements to be executed
    }
```

- *Initialization Expression:* In this expression we have to initialize the loop counter to some value. for example: int i=1;
- *Test Expression:* In this expression we have to test the condition. If the condition evaluates to true then we will execute the body of loop and go to update expression otherwise we will exit from the for loop. For example: i <= 10;
- *Update Expression:* After executing loop body this expression increments/decrements the loop variable by some value. for example: i++;

#### 2.2 While Loop

 While loops are used in situations where we do not know the exact number of iterations of loop beforehand. The loop execution is terminated on the basis of test condition.

 ```c
    initializationExpr;
    while (testExpr){
        //some code

        updateExpr;
    }
 ```

#### 2.3 Do-While Loop

In do while loops also the loop execution is terminated on the basis of test condition. The main difference between do while loop and while loop is in do while loop the condition is tested at the end of loop body, i.e do while loop is exit controlled whereas the other two loops are entry controlled loops.
In do while loop the loop body will execute at least once irrespective of test condition.

```c
    initializationExpr;
    do{
        //some code

        updateExpr;

    } while (tesExpr);

```
