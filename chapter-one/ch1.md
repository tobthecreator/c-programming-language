I was being a big dummy for a second and trying to read a.out as the output not the executable lol. But no, gotta do `./a.out`

All C programs are functions and variables. From LISP, procedures and data.

Functions contain statements that specify operations to be done. Functions compose abstractions of operations.

Every program must have a main somewhere.

The `#include` line tells the compiler to pull in the standard library's input and output functions.

Functions have arguments. They wrap thier operations in {} brackets.

Characters are always "" double quoted.

While statements can have brackets or can be a single line, which I didn't actually know!

Integer division in C truncates.

%d decimal int
%3d, decimal int, 3 char wide
%f floating point
%3f floating point, 3 wide
%.2f flaoting point, with two characters after decimal
%6.2f floating point, 6 wide, two characters after the decimal

"In any instance where it is permissble to use the value of a variable of some type, you can use a more complicated expression". He just means you can inject the function right there too.

For loop is a generalization of a while loop. The choice is arbitrary. Use whatever is cleaner.

In general, it's "bad practice' to bury "magic numbers" in a program. They're hard to understand and harder to change in a systematic way. Sooo, abstract!

We're going to plop down a `#define` line

`#define name replacement_text`

The name has the same form as a variable name. The replacement text can be anything.

So `#define LOWER 0`, `#define UPPER 300`

These are symbolic constants, not variables. In other words, global variables for this file. They're typically written in uppercase to distinguish themselves. They have no semicolon at the end (I imagine because they're symbolic and not actually operations)

ChatGPT says the define statements are preproccessor directives, and so they do not need the semicolon like other operations that need to be terminated.

The preprocessor is a part of the C compiler that performs preprocessing tasks before the code is compiled into machine language. It operates on the source code textually, without any knowledge of the C language syntax or semantics.

When the compiler encounters a preprocessor directive, it processes it by replacing or modifying the source code based on the directive's instructions. The modified code is then passed to the actual compiler for compilation.

Preprocessor directives allow for code modularity, conditional compilation, and code reuse. They are processed before the actual compilation of the code, enabling the programmer to control aspects of the compilation process and manipulate the source code at a textual level.

In the C programming language, a preprocessor directive is a special instruction that is processed by the preprocessor before the actual compilation of the code takes place. It instructs the preprocessor to perform certain actions on the source code, such as textual substitution or conditional compilation.

The preprocessor is a part of the C compiler that performs preprocessing tasks before the code is compiled into machine language. It operates on the source code textually, without any knowledge of the C language syntax or semantics.

When the compiler encounters a preprocessor directive, it processes it by replacing or modifying the source code based on the directive's instructions. The modified code is then passed to the actual compiler for compilation.

Some commonly used preprocessor directives in C include:

#define: Defines a symbolic constant or a macro.
#include: Inserts the contents of a file into the source code at the point of the directive.
#ifdef, #ifndef, #else, #endif: Conditionally includes or excludes code based on preprocessor-defined symbols.
#if, #elif, #else, #endif: Conditionally compiles sections of code based on preprocessor expressions.

## char input and output

Text IO is dealt with via streams of characters. A text stream is a sequence of chars in lines, each lines consisting of zero or more characters followed by a newline char.

Given `getchar` and `putchar` you can do a lot more than you originally think without knowing anything about your inputs and outputs.

EOF is a symbolic constant integer that represents the end of a file.

Had to take a break to make a keybinding for VS Code.

okay cool

long integers are at least 32 bits. on some machines int and long are the same size, on others int is 16 bits.

We also have doubles, which is a double precision float.

Single quotes are specific characters in ASCII. They're `character constants`.

## arrays

We're allocating memory space specifically here, so remember we have to declare array size.

c - '0' works because chars are just small integers, so char variables and cosntants are identical to ints in aritmetic expressions.

## functions

Functions are how we encapusulate computation. With a proper function, you can ignore how a job and simply know that it is done properly, and what was done.

You will often see small functions defined even if used only once simply to name a behavior in the code.

Functions can appear in any order, probably because this is a compiled language not interpreted.

Use parameter to describe the variable declared in the function definition.  
Argument is what we pass to a parameter.

Before main, in the example file, they defined something. A function prototype.

Function prototypes make it easier for the compiler to detect errors in the number of arguments, and the types of the arguments. going to ask GPT about that.

# call by value

Oh boy

All function args in C are pass "by value". So everything passed to the function are temporary vars, not the originals.

This is in stark contrast to "call by reference" langugaes.

When necessary, you can arrange for a function to alter a variable in a calling routine.

Oh boy.

The call must provide the address of the variable to be set. This is a pointer.

You have to declare that an arg is a pointer.

Arrays are a notable exception. Arrays are not copied. You get the address of the beginning of the array.

## character arrays

while there is another line
if the line is longer the the known longest line
save ithe line
save it's length

print the longest line

`\0` is a null character.

When something like "hello!\n" is stored in C, it is actually [h, e, l, l, o, !, \n, \0]

## external variables and scope

goes over normal function scoping.

goes over global variables. global variables different from symbolic variables from earlier in that they can be updated and changed, instead of being static.

There are also `extern` declarations. These are not commonly used.

If a global variable is declared in file1 and then needed in file 2, then it needs `extern`. Typically we collect all `extern` variables and functions into a header file, then use `#include` to transfer them into a new source file.

We've covered the "convential core" of C now.

With these building blocks, we grow :)
