# Operators

Operator is a symbol which tells the compiler to perform certain mathematical or logical manipulations.

## Types of Operators

- **Unary Operator:** These variables are usually declared outside of all of the functions and blocks, at the top of the program and can be accessed from any portion of the program.

- **Arithmetic Operator:** These are the operators used to perform arithmetic/mathematical operations on operands.
  - **Unary Operator:** Operators that operates or works with a single operand are unary operators.
  - **Binary Operators:** Operators that operates or works with two operands are binary operators.

- **Relational Operator:** These are used for comparison of the values of two operands.

- **Logical Operator:** Logical Operators are used to combine two or more conditions/constraints or to complement the evaluation of the original condition in consideration. The result of the operation of a logical operator is a boolean value either true or false.

- **Bitwise Operator:** The Bitwise operators is used to perform bit-level operations on the operands. The operators are first converted to bit-level and then the calculation is performed on the operands. The mathematical operations such as addition, subtraction, multiplication etc. can be performed at bit-level for faster processing.

- **Assignment Operator:** Assignment operators are used to assign value to a variable. The left side operand of the assignment operator is a variable and right side operand of the assignment operator is a value. The value on the right side must be of the same data-type of variable on the left side otherwise the compiler will raise an error.

- **Ternary Operator:** Conditional operator is of the form Expression1 ? Expression2 : Expression3 . Here, Expression1 is the condition to be evaluated. If the condition(Expression1) is True then we will execute and return the result of Expression2 otherwise if the condition(Expression1) is false then we will execute and return the result of Expression3. We may replace the use of if..else statements by conditional operators.

|Operator               |Type        |Associativity  |
|-----------------------|------------|---------------|
| ++, --                | Unary      | right to left |
| +, -, *, /, %         | Arithmetic | left to right |
| <, >, <=, >=, ==, !=  | Relational | left to right |
| &&, \| \\| , !        | Logical    | left to right |
| &, \| , <<, >>, ~, ^  | Bitwise    | left to right |
| =, +=, -=,*=, /=, %=  | Assignment | right to left |
|  ?:                   | Ternary    | right to left |
