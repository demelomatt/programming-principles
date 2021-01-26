# Primitive Data Types

Data type determines what sort of data is being stored and how it will be used by the program. In computer science, a data type or simply type is an attribute of data which tells the compiler or interpreter how the programmer intends to use the data.

# Primitive types

Not all languages have the same primitive data types. Please see the table below for a representative list of types:

[Types](Primitive%20Data%20Types%205de22bc1f4144589baff1bece14c3ba9/Types%20797dafafcf804b3ba63ae2df483e7ff2.csv)

# Statically typed languages

A language is statically typed if the type of a variable is known at compile time. For some languages this means that you as the programmer must specify what type each variable is.

The main advantage here is that all kinds of checking can be done by the compiler, and therefore a lot of trivial bugs are caught at a very early stage.

Examples: C, C++, Java, Rust, Go, Scala

# Dynamically typed languages

A language is dynamically typed if the type is associated with run-time values, and not named variables/fields/etc. This means that you as a programmer can write a little quicker because you do not have to specify types every time (unless using a statically-typed language with type inference).

Examples: Perl, Ruby, Python, PHP, JavaScript

# C Data Types

Here's a table containing commonly used types in C programming.

[C Data Types](Primitive%20Data%20Types%205de22bc1f4144589baff1bece14c3ba9/C%20Data%20Types%200c207f1d2fb54c84b5f9e3163ce56e32.csv)

### void

`void` is an incomplete type. It means "nothing" or "no type". You can think of void as **absent**.

For example, if a function is not returning anything, its return type should be `void`.

Note that, you cannot create variables of `void` type.

---

### short and long

If you need to use a large number, you can use a type specifier `long`. Here's how:

```c
long a;
long long b;
long double c;
```

Here variables a and b can store integer values. And, c can store a floating-point number.

If you are sure, only a small integer (`[−32,767, +32,767]` range) will be used, you can use `short`.

```c
short d;
```