# Overview

## Introduction

Paul Allen and Bill Gates. Frances Allen. Turing and Church. All great computer scientists we can admire. All of these great computer scientists also did great work in systems.

When we think of computer systems, you may think of a company like Intel. Andy Grove was the CEO and founders of Intel. He had this lovely saying "Only the paranoid survive". There is some wisdom in that saying from an economic point, however throughout this reading we will not be paranoid but try to have some fun.

## What we will learn (No more magic)

Roughly speaking, this text will describe the following topics:

* Computer Systems Foundamentals (Things like working in the terminal)
* The C Programming Language (Our essential tool for systems programmers)
* Computer Architecture and Memory (Understanding 'the magic' in the machine)
* Compilation (How text based source code turns into an executable binary)
* Synchronization (How to write 'concurrent' programs)

In short, we will learn that computers are not magic. Someone had to sit down and program these machines from scratch, and they started off exactly where you are today! Towards the end of this reading you will understand there is "no more magic".

## What are some of the core topics in computer systems

1. Compilers
2. Operating Systems
3. Computer Architecture

### Compilers

The first of core topics is the compiler.

#### What does 'C' look like

Compile on the terminal with: `clang hello.c -o hello`

```
#include <stdio.h>

int main(){

  puts("Hello Computer Systems");

  return 0;
}
```

There is actually quite a bit going on in this code. Here is the same annotated example.

```
#include <stdio.h> // Include a library of code. This is done in the preprocessor step

int main(){ // A function call, that is also the entry point to our program.

  puts("Hello Computer Systems"); // Call a library function to print text to standard output.

  return 0; // Return from our function call and report '0' as an exit code.
}
```

#### What does assembly look like

`tbd put the assembly code of hello world here`

`tbd objdump output -- Essentially a tool that lets you peak at functions in an object file.`

### Operating Systems

The second of core topics is operating systems

#### Example Operating Systems

Windows, Linux, the operating system in your phone or even your microwave.

The main job of an operating system is to serve as a conductor, managing multiple processes and a finite amount of resources.

#### The command line interface.

You might imagine an operating system (or as it is sometimes depicted in hollywood ala Jurassic Park) as a terminal with some text. This is what we call the command line interface, which is at the highest level just another program. Linux, Mac, and even Windows have built-in terminals that let us type in text to run programs and commands. This is one way we can interface with the operating system, by requesting programs to be loaded into memory and run in a text-based environment. Modern operating systems of course have GUI's.

##### Example termiminal commands

These are some 'programs' that can be run on the terminal.
* ls
* cd

Example shell script

```
# Lines that start with a 'hashmark' or 'pound sign'
# are comments that are ignored.
# You should use them liberally!

# This line is special and tells us we have an executable script.
#!/bin/bash

# Output hello and two items read in as command-line arguments
echo "Hello $1 $2"
echo "What is your age?"
# Read in a value
read myAge
echo "That is great you are $myAge years old!"
```

Some other useful programs

* ssh

### Computer Architecture

The third of core topics is computer architecture.

#### The brain of the computer

The CPU is the brain of the computer. It has at least one central processing unit (CPU) (sometimes called a core) which executes exactly one instruction at a time. We will learn the CPU may be processing quite a bit of data at once, but it is essentially executing one instruction at a time very quickly!
