# Constants/Literals

If you want to define a variable whose value cannot be changed, you can use the `const` keyword. This will create a constant. For example:

```c
const double PI = 3.14;
```

Here, PI is a symbolic constant (literal); its value cannot be changed.

```c
const double PI = 3.14;
PI = 2.9; //Error
```

It is considered best practice to define constants using only upper-case names.

The values assigned to each constant variables are referred to as the literals. Generally, both terms, constants and literals are used interchangeably. For eg, “const int = 5;“, is a constant expression and the value 5 is refered to as constant integer literal.

Literals are data used for representing fixed values. They can be used directly in the code. 

For example: 1, 2.5, 'c' etc.

Here, 1, 2.5 and 'c' are literals. Why? You cannot assign different values to these terms.

# Types of literals:

### Integers

An integer is a numeric literal(associated with numbers) without any fractional or exponential part. There are three types of integer literals in C programming:

- decimal (base 10)
- octal (base 8)
- hexadecimal (base 16)

For example:

```
Decimal: 0, -9, 22 etc
Octal: 021, 077, 033 etc
Hexadecimal: 0x7f, 0x2a, 0x521 etc
```

In C programming, octal starts with a 0, and hexadecimal starts with a 0x.

---

### Floating-point Literals

A floating-point literal is a numeric literal that has either a fractional form or an exponent form. For example:

```
-2.0
0.0000234
-0.22E-5
```

**Note:** `E-5 = 10^-5`

---

### Characters

A character literal is created by enclosing a single character inside single quotation marks. For example: 'a', 'm', 'F', '2', '}' etc.

### String Literals

A string literal is a sequence of characters enclosed in double-quote marks. For example:

```
"good"                  //string constant
""                     //null string constant
"      "               //string constant of six white space
"x"                    //string constant having a single character.
"Earth is round\n"         //prints string with a newline
```