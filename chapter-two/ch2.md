# Types, Operators and Expressions

## 2.1 variable names

Idiomatic C is lower_case for variable names and UPPER_CASE for symbolic constants.

The first 32 characters of an internal name are significant. ANSI only guarantees uniqueness up to 6 characters and a single case.

There are reserved keywords.

## 2.2 Data types and sizes

We really only have a few data types in C:

- char, a single byte, holding one character in the local character set
- int, an integer
- float, single-precision floating point
- double, double-precision floating point

There are some qualifiers here. You also have `short` and `long` ints.

`short` is often 16 bits, `long` 32 bits. An int is either. Compilers choose the right sizes for the harware.

We also have `signed` and `unsigned` which can be applied to chars or ints.

`unsigned` are always >= 0, and up to 2^n, where n is the num of bits.

The headers `<limits.h>` and `<float.h>` typically contain the symbolic constants for all these sizes and the other properties for the machine and compiler being used.

## 2.3 Constants

Characters constants are single characters within quotes, 'x'.

`strlen(s)` returns the length of a character string

Remember every string array ends with a null character, `\0`

We also have enums

enum boolean { NO, YES };

The first name in an enum has a value of 0, second 1, etc.

enum months { JAN = 1, FEB, MAR }. If not all vals are specified, then they pick up where the last one left off

## 2.4 Declarations

All vars have to be declared before use.

We've already done a bunch of stuff like

`int lower, upeer, step;`
`char c, line[1000];`

The book has really initialized variables with values at declaration yet, but of course that is possible.

There is a qualifier, `const` to stop it from being changed.

You can also do that for an array arg to show that a function does not change the array that's passed by reference.

## 2.5 Math Operations

- - - / and modulo, %

You cannot modulo float or doubles.

The direction of truncation for / and the sign of % are machine-dependent for negative numbers.

## 2.6 Relational and Logical Operators

Relational operators:

> > = < <=

== != !

Lots of talk about precedence, even though the linter normally takes care of that kind of thing.

## 2.7 Type Conversions

Most automatic type conversions take a something like an int and turn it into something like an float, going larger. Expressions that lose data will draw compiler warnings

Since a char is a small int

In ASCII lowercase and uppercase letters are the same distance apart

Many common type checks are in `<ctype.h>` with `isdigit(c)` etc

Functions coerce data types

## Increments and Decrements

They've only really been doing ++i.

Of course we have --i as well.

If you put ++ before i, then it increments i before it is used, and vice versa.

If you don't want a value, then just do i++ since prefix and postfix result in the same thing. If you want to capture the incremented value, then you need ++i

## Bitwise Operators

& bitwise AND
| bitwise OR
^ bitwise XOR
<< left shift

> > right shift

- one's complement (unary)

n = n & 0177;
x = x | SET_ON;

x << 2 shifts the value of x left by two positions

x = x & -077 yeilds 0177700

# 2.10 Assignement Operations and Expresions.

i = i+2 === i += 2

we can do taht with pretty much everything

- - - / % << >> & ^ |

# 2.11 Conditionals

z = (a > b) ? a : b // yo i did not know that started here in C!

If a and b are different types, then conversion rules apply

## 2.12 Order of Evaluation

There is a table for precedence, table 2.1

The moral of this section is "don't write code that depends on the order of evalaution."
