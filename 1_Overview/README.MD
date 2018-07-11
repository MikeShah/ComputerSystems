# Overview

* Lecture Page: http://www.mshah.io/comp/Summer18/Systems5007/Lectures/1/lecture.html
* Lecture Slides: https://docs.google.com/presentation/d/15Z-RXvam62ue-Sid4Ubc50shoiU8Sy8JOOm-YNQlUXo/edit#slide=id.g39c697e210_0_95

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

`tbd objdump`

### Operating Systems

The second of core topics is operating systems

#### Example Operating Systems

Windows, Linux, the operating system in your phone or even your microwave.

The main job of an operating system is to serve as a conductor, managing multiple processes and a finite amount of resources.

### Computer Architecture

The third of core topics is computer architecture.
