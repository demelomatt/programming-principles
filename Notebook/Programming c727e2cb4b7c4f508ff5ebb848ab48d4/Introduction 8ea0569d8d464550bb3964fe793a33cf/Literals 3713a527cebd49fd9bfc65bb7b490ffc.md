# Literals

Literals are data used for representing fixed values. They can be used directly in the code. For example: 1, 2.5, 'c' etc.

Here, 1, 2.5 and 'c' are literals. Why? You cannot assign different values to these terms.

### 1. Integers

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

### 2. Floating-point Literals

A floating-point literal is a numeric literal that has either a fractional form or an exponent form. For example:

```
-2.0
0.0000234
-0.22E-5
```

**Note:** `E-5 = 10^-5`

---

### 3. Characters

A character literal is created by enclosing a single character inside single quotation marks. For example: 'a', 'm', 'F', '2', '}' etc.

---

### 4. Escape Sequences

Sometimes, it is necessary to use characters that cannot be typed or 
has special meaning in C programming. For example: newline(enter), tab, question mark etc.

In order to use these characters, escape sequences are used.

[Escape Sequences](Literals%203713a527cebd49fd9bfc65bb7b490ffc/Escape%20Sequences%20c385020555594d9283e445d3989d227f.csv)

---

For example: `\n` is used for a newline. The backslash `\` causes escape from the normal way the characters are handled by the compiler.

---

### 5. String Literals

A string literal is a sequence of characters enclosed in double-quote marks. For example:

```
"good"                  //string constant
""                     //null string constant
"      "               //string constant of six white space
"x"                    //string constant having a single character.
"Earth is round\n"         //prints string with a newline
```