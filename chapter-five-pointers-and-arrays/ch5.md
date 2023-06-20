# Points and Arrays

"Pointers have been lumped in with the goto statement as a way to create impossible to understand and debug programs"

This is true when used carelessly, and it is easy to create pointers that point somewhere unexpected.

With discipline, pointers can provide clarity and simplicity.

On a personal note, I want to master this concept. I don't feel like I had a lot of trouble with it when I was younger, but I want to understand fully. Will probably need another book for this.

## 5.1 Pointers and addresses

In RAM, we have a big ole stack of consecutively numbered addresses that we can manipulate.

A pointer is a group of "memory cells" that can hold an address of another memory cell.

`p = &c` assigns the address of c to the variable p. P "points to" c.

Pointers can only be used on things in memory, variables, arrays, etc. NOT functions, constants, etc.

The operater `*` is a dereferencing operator.

When applied to a pointer, it access the object the pointer points to.

```
int x = 1, y = 2, z[10];
int *ip; // a pointer to an integer

ip = &x; // ip now points to x's address

y = *ip; // y is now 1
*ip = 0; // x is now 0;

ip = &z[0]; // ip now points to z[0]
```

There is an implication that a pointer is constrained to point to a particular kind of object. Every pointer points to a specific data type.

So when we use &x, we're getting the address of x.

When we're using \*pointer, we're access the value at that address, either for a read or an update.

if *pointer points to the integer x, then *ip can occur in any context where x could

so

`*ip += 10;` increments \*ip by 10.

`y = *ip + 1` takes whatever value \*ip points to and adds 1, and assigns that result to y

You can also use `++` and `--`

But you have to be careful

++\*ip is valid, because it access the value at ip and then increments.

But *ip++ is invalid, you need (*ip)++, without it we're incrementing the memory address itself not the thing it points to

GPT confirms this is so.

## Pointers as function args

Everything but arrays are passed by value, so we can't alter something outside of scope without a pointer.

But we can redefine things to call `swap` with

`swap(&a, &b)`

where the function is

```

void swap(int \*px, int \*py) {
int temp;

    temp = *px;

    *px = *py;
    *py = temp;

}

```

## 5.3 Pointers and Arrays

When we do something like `int a[10];`

We're defining an array, a, with 10 consecutive objects in memory.

```
int *pa;
pa = &a[0];
```

This sets pa to the address of the first element in the array, a.

Then `int x = *pa` will copy the contents of `a[0]` into x via the pointer.

Since objects in array memory are consecutive, we can increment the pointer itself to move along the row of memory.

So if we want to get to `a[1]`, we could do

`*(pa+1)` or `*pa++`

One note is that a reference to `a[i]` could also be written as `*(a+i)`

When an array is passed to a function, the location of the first element is passed.

An array name parameter is a pointer, then.

```
int strlen(char *s) {
    int n;

    // s++ increments the address in memory the pointer references
    for (n=0; *s != '\0'; s++) {
        n++;
    }

    return n;
}

```

Above, both `char s[]` and `char *s` are equivelant parameters, although the latter is far more explicitly clear.

You can pass parts of arrays by passing a pointer to the start of that subarray.

## Address Math

If p is a pointer, than p++ increments to the next memory address.

Then p+=i increments by i elements.

C guarantees that 0 is never a valid address for data, so a return value of zero can be used to signal an abnormal event.

Pointers and integers are not interchangable, with zero being the excpetion. The constant zero may be assigned to a pointer, and a pointer can be compared to the constant 0.

0 is the symbolic NULL constant.

Pointers can be compared to other points with normal == != < >=, etc. but only if they are in the same array.

Other behavior is undefined. The address directly after an array can still be used though.

All pointer manipulations automatically deal with the size of the objects they're referencing. So a float array doesn't need different logic than a char array, for example.

But that also means when you're working with pointers you have to work with pointers of the same type!

## 5.5 Charactter Points and Functions

Let's take a string `"hi tobby"`

That string is an array of char. The array is terminated with `\0`.

The length in the storage is thus one more than the number of characeters between the quotes.

Since this is an array of char, if we want to use it in a function, we also have to treat it like it's a pointer.

```
char *pmessage;

pmessage = "hello"; // this assigns a pointer to the array "hello"
```

C PROVIDES NO STRING COPIES ONLY POINTERS

```
char amessage[] = "hello"; // amessage is now the array of "hello", not the pointer.

char *pmessage = "hello"; // this is a pointer to the beginnging of the array of chars

// NOT EQUIVALENT
```

## 5.6 Pointer arrays, pointers to pointers

Oh boy. Stopping for now I think.

BACK AT IT BOYYYY

Pointers can be stored in arrays.

Let's think about a program that sorts lines of strings into alphabetical order

If the lines are in one long array, then we can parse it and get pointers to each newline.

Then we can store those pointers in an array. We can then then reorder the array into alphabetical order.

So:

1. read all the lines of the input
2. sort them alphabetically
3. print them in order

## 5.7 Multi-dimensional arrays

These work like you'd expect. `array[x][y]`

## 5.8 Initializing Pointer Arrays

```
char *name[] = {
    "a", "b", "c", "d"
}
```

## 5.9 Pointers and Multi-dimensional arrays

What is the difference between `int a[10][20];` and `int *b[10];`

A allocates an array of 10 space, then in each row allocates 20 spaces.

B allocates an array of ten integer pointers.

With B, the pointed to arrays can be of different lengths.

## 5.10 CLI args

When C programs are called, they're called with two arguments

1. argc, the count of args
2. argv, the vector or args

argv is a is a pointer to an array of character strings that contain the arguments, one per string.

argv[0] is the name by which the program is invoked, so argc is normally at least one.

in `echo hello, world`, arvg is a pointer to an array of pointers that represent [echo, hello, world]

## 5.11 Pointers to Functions

A function is not a variable in C. But you can define a pointer to a function, which can be assigned, placed in arrays, passed to functions, returned by functions, etc.

## 5.12 Complicated declarations

`int *f();` is a function returning a pointer to an int.
`int (*pf)();` is a pointer to a function that returns an int.

int (\*pfa[])() // this is a declaration for an array of pointers to functions that return integers.

Without the [], it is a pointer to a function that returns an integer
