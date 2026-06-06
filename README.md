# CZ: How to use

## C++ Compatibility:

You can't use it here.

## iso64 Compatibility:

You can't use it either

# Compiling:

Currently only works on GCC and Clang.

## Bootloader:

It makes the screen white and black, and on windows enables UTF-8 encoding.

## Macros:

print(): It is printf() but adds a newline.

add(): A better malloc() (ex. int\* cz\_rules=NULL; add(cz\_rules);

rawadd(): add() for losers. (ex. rawadd(add\_is\_better,int)

scan(): scanf() but better. (ex. scan(s,a\_big\_char)
scanram(): scan() for pointers. (same syntax)

wipe(): It is the same as free(), but changes the pointer to NULL immediately.

forloop(): You write forloop(name,min,max).

stopinput()/stop\_input(): Pretty self explanatory.

pauseexit(): Stops the terminal from ending immediately before you can see the last print().

SOME OTHER STUFF EXCEPT I'M TOO LAZY TO WRITE

## Functions (important ones):

randi(): randi(min,max), not gonna explain how it works.

PTherorem(): a^2+b^2=c^2.

## Hooking Up:

You have to move cz.h into C:\\mingw64\\x86\_64-w64-mingw32\\include, then you can do #include <cz.h>. Also, in case you didn't know, it's for C.

