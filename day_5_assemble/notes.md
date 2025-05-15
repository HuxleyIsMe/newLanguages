## Day 5 - Thought Assemble!

Alright lets get into something really interesting

Context:

I have no prior experience with assembly. What I can tell you is that this is what all our browser code compiles down to and that all the early pokemon games were written in assemble

> :star: Ok major major awareness assembly and web assembly are different. I did not realize this. assembly is low level ssytem programming close to machine code allowing instructions that can be directly executed by the CPU. Where as web assembly provides us a way to run other languages in the browser at super high speed.

https://www.quora.com/What-is-the-relation-between-assembly-and-web-assembly

Key Differences

Execution Environment:
- Assembly is executed by the CPU directly, while WebAssembly runs in a virtual machine (the browser's WebAssembly runtime).
Portability:
- Assembly is non-portable and architecture-specific, while WebAssembly is designed to be portable across different operating systems and hardware.
Development Purpose:
- Assembly is primarily used for system-level programming and low-level hardware interaction, while WebAssembly is focused on enabling high-performance web applications.

### What is Assembly?

yes they are different we are gonna go through low level assembly with ARM. Its like a dialect situation assembly variants are tied to certain hardware chips. 

We are gonna follow this: https://www.youtube.com/watch?v=gfmRrPjnEw4

And work to create a low level ARM assembly languages/

**registers**
areas in memory that live very close to the CPU, so they can be worked with quickly. Its speedy but limited.

hex data works in 4 bits, there are 8  so we work in 32 bits. ( 8 8 100).

"word" max size can be stored in the register so in the above its 32 bits

hm parts of the register are used for specific parts like a breadboard. 

we can have multiplr registers som are special used for specific things

**stack memory**

typically stored in the RAM.

### What is Web Assembly?

'binary instruction format' essentially a universal runner for running code in the browser! 

"WebAssembly is a new type of code that can be run in modern web browsers and provides new features and major gains in performance. It is not primarily intended to be written by hand, rather it is designed to be an effective compilation target for source languages like C, C++, Rust, etc."

'what is a stack based virtual machine'? 
A machine that has a stack, and has instructions that run on that stack. So like i guess js is stack based as we have a call stack and run instructions on it? Nope. Your wrong there Huxley.

Why the Confusion?
It’s easy to conflate the two because both involve stacks, but they serve different purposes:

Stack-based VM: Uses the stack as the primary computational model. JVM is stack based.

JavaScript engine: Uses the stack primarily for function call management, not computation.



### Notes - learning WASM.

Ok ok so this is like a little bit of a hello world new concept situation. So while yes assembly is a language we often use WASI to compile our programs into it. 

> **Im gonna have a binge on this content it contains tutorials on lower down programming and bread boards! jajajaja 
**

[Ben Eaters course on building a computer!](https://www.youtube.com/watch?v=HyznrdDSSGM&list=PLowKtXNTBypGqImE405J2565dvjafglHU)

watching this i really want bread boards wires etc..  ok i think im gonna have to make this my next project it looks dope.


WebAssembly key concepts
There are several key concepts needed to understand how WebAssembly runs in the browser. All of these concepts are reflected 1:1 in the WebAssembly JavaScript API.

Module: Represents a WebAssembly binary that has been compiled by the browser into executable machine code. A Module is stateless and thus, like a Blob, can be explicitly shared between windows and workers (via postMessage()). A Module declares imports and exports just like an ES module.
Memory: A resizable ArrayBuffer that contains the linear array of bytes read and written by WebAssembly's low-level memory access instructions.
Table: A resizable typed array of references (e.g., to functions) that could not otherwise be stored as raw bytes in Memory (for safety and portability reasons).
Instance: A Module paired with all the state it uses at runtime including a Memory, Table, and set of imported values. An Instance is like an ES module that has been loaded into a particular global with a particular set of imports.

### Scripting or compiled?

Well we use 'WASM' to compile other languages into assembly allowing it to run universally.



### Where does Assembly run?



### Which paradigms can I use with Assembly and what is the standard?


### How do I test Assembly Scripts




### resources: 
- ['web assemble intro'](https://www.youtube.com/watch?v=dqhJU772ckM)
- [more webs assembly](https://www.youtube.com/watch?v=2qV-1JhxWeE)
- [classic MDN has our backs](https://developer.mozilla.org/en-US/docs/WebAssembly)