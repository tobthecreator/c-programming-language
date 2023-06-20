# Control Flow

Lots of baby's first control flow chapter in here. Only saving what I didn't know.

## 3.5 While and For

This is interesting, because i've never looked at it like this before:

A for statement is

```
for (exp1; exp2; exp3) {
    statements
}

//and a while is

exp1;
while (exp2) {
    statements/
    exp3;
}
```

so just like you can use

`while (True) {}`
you can also use
`for (;;) {}`

In general we use for loops when there is simple initiliazation and increment.

We can also do multiple declarations in a for loop?

`for (i=0, j=strlens(s)-1; i<j; i++, j--) {}`

## 3.6 Do whiles

an inverted while loop

But a do loop will run first, then evaluate, which is different from a while loop that evaluates and then runs.

## Break and Continue

Breaks provide early exits from for/while/do and switch

Continue is the same, but instead of exiting it fast forwards to the next iteration.

## Go-to and labels

Just not even going to really take notes here.
