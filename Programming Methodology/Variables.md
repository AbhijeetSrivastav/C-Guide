# Introduction

## 1. Variables

A variable in simple terms is a storage place which has some memory allocated to it. Basically, a variable used to store some form of data. Different types of variables require different amounts of memory, and have some specific set of operations which can be applied on them.

### 1.1 Variable Declaration

```c
    type variable_name;
    type variable1_name, variable2_name;
```

A variable name can consist of alphabets (both upper and lower case), numbers and the underscore ‘_’ character. However, the name must not start with a number.

### 1.2 Difference Between Variable Declaration and Definition

- Variable declaration refers to the part where a variable is first declared or introduced before its first use.
- Variable definition is the part where the variable is assigned a memory location and a value.
- Most of the times, variable declaration and definition are done together.

```c
    //declaration
    int w;
    //declaration and definition
    char = 'xyz';
    //delcaration and definintion as b has been assigned some garbage value 
    float b;     

```

### 1.3 Rules for defining variables

- A variable can have alphabets, digits, and underscore.
- A variable name can start with the alphabet, and underscore only. It can’t start with a digit.
- No whitespace is allowed within the variable name.
- A variable name must not be any reserved word or keyword.

### 1.4 Types of Variables

- **Local Variable:**
A variable that is declared and used inside the function or block is called local variable.
It’s scope is limited to function or block. It cannot be used outside the block.Local variables need
to be initialized before use.

- **Global Variable:**
A variable that is declared outside the function or block is called a global variable.
It is declared at the starting of program. It is available to all the functions.

- **Static Variable:**
A variable that retains its value between multiple function calls is known as static variable.
It is declared with the static keyword.

- **Automatic Variable:**
All variables in C that are declared inside the block, are automatic variables by default. We
can explicitly declare an automatic variable using auto keyword.Automatic variables are similar as
local variables.

- **External Variable:**
External variable can be shared between multiple C files.We can declare external variable using extern keyword.
