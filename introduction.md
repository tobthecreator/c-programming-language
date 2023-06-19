C stems from BCPL and B. These were typeless.

C is relatively "low level". That implies that C plays with the same objects that computers do, namely the individual characters, numbers and addresses. That's what I've always loved about it, from an ECE background.

There is no built in abstraction to deal with composite objects.

There is no storage allocation functionality other than the static definition and your own discipline.

There is no garbage collection.

There are no I/O operations. No built-in file access.

You have to write all these.

Most C implementations build their own stdlib for their use case, but several implementations provide them.

There is no parallel programming built in.

These design decisions keep the language at a modest size. C is small. It can be learned quickly. You can reasonably expect to know the whole language, and use it.

C is architecture independent.

When forced to make a choice on explaining the programs in the book or focusing on the language, they focus on the language. Again, taking folks seriously.

Alright man let's dive in

Going to take a minute and setup C in VS Code. I want to learn from my mistakes with SICP lol.
