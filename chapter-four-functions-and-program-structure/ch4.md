# Functions and Program Structure

Good functions hide details of operation from parts of the program that don't need to know about them. They clarify the whole by abstracting the distracting.

## Function Basics

Some pseudocode

```
while (there is another line) {
    if (the line contains the pattern)
        print it
}
```

We could write these things outright, but they're perfect definitions of a function.

With this pseudocode, filling out the function is pretty simple.

"A program is just a set of variables and functions" -> it's all procedures and data babyyyy

`return` returns values, but it can be any expression, including functions

If we want to compile multiple files we do

`cc main.c getline.c strindex.c`

If you need to recompile just one of them, do `cc main.c getline.o strindex.o`

## Header files

We'll let main hang out in it's own file.

We're going to place common material shared between modules in a header file.

"Up to some program size, it's better to have a single header file that just holds everything will be shared."

GPT

```
Yes, multiple C files can share a single header file. In fact, this is a common practice in C programming to promote code modularity and reusability.

When multiple C files include the same header file, the declarations and definitions present in the header file become available to all those C files during the compilation process. However, it's important to note that header files typically contain only function prototypes (declarations) and not the actual implementation of functions.

The actual implementation of functions is usually placed in separate C source files (often with a ".c" extension). These source files, commonly referred to as implementation files or module files, are compiled along with the C files that include the shared header file.

During the compilation process, each C source file is compiled individually into object files (often with a ".o" or ".obj" extension). The object files contain the compiled machine code specific to each source file but do not contain the complete program. They serve as intermediate representations.

After compiling all the source files, a separate linking phase is performed. The linker takes the object files generated from each source file, including the shared header file, and combines them to create an executable or a library. The linker resolves the references to functions and variables defined in different object files, ensuring that the correct implementation is linked with each reference.

In summary, the header file acts as a bridge between multiple C files, providing them with the necessary declarations. The actual implementation of functions is placed in separate C source files, which are compiled individually and then linked together to form the final program or library.
```

Interdasting

## Recursion

"recursion may provide no saving in storage, since there is a stack of values being processed somewhere that needs to be maintained.

It's also rarely faster.

But, it is compact code. And it's often much easier to write and understand than iterative versions.

It's also very helpful for recursively defined structures like trees and linked lists.

## Preprocessor

"#include" lines are removed by the preproccesor after the linking mentioned above is complete.

Same for macro substition.

You can have "functions" as macros, but really it's not a "function" it's line expansion.

This helps us with kind of loosely defined "generics" because macros don't have data types.

We can also control preprocessign itself.

#if, #endif, #elif, #else

this allows us to control other preprocessing steps like imports
