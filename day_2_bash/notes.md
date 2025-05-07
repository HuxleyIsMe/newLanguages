## Day 2 - lets get Bashful :blush:

I want to be a lil more specific this time so lets answer the following: 

Context:

I once made a few shell scripts for stress testing flaky tests and also to add some custom behaviour of stripping out certain comments i had marked to be removed when running git commit - i hate having to get PR feedback to remove comments i've accidentally left in the code! 

### What is bash?

Bash is a scripting language enabling us to work directly with our computer.



### Notes - learning bash.
It is a shell! Mark files as bash using .sh be sure to include #! followed by a path to run it! she bang at the beginning top of the file 

Lol ok so turns out i use ZSH i used ZSH because i found an awesome Iterm2 and ZSH setup, however this now has me confused... Oh great so ZSH has a lot more features including auto complete! 
they are both shell scripting languages they have the same conditionals as always, but the syntax is a little less familiar, 
like jest it.each, additional arguments passed in are assigned variable names, unlike jest.each in bash this is $1, $2 etc.

hmm my laptop has some auth issues ill have to fix that

We need to remember to make our scripts executable, we do this by changing the user permissions: using : $ chmod +x myscript.sh

I've started by adding the testing library first. I found one called Bats and its been great so far I have learnt about git submodules, i've now also been given a lil nudge on exit codes 1 being a fail.

i've also been reminded of `grep` a command I have known of but never actual used: https://www.freecodecamp.org/news/grep-command-in-linux-usage-options-and-syntax-examples/

Ok so bash is very particular about spaces, i made a couple of errors due to incorecct use of spacing.

### Scripting or compiled?

scripts

### Where does Bash run?

Bash is a shell enabling us to interact with our computer directly. This is very important when working with machines with no GUI such as the servers we run our apps on

### Which paradigms can I use with BASH and what is the standard?

Imperative as it allows side effects - functional does not
procedural because we can group it altogether

### How do I test Bash Scripts

Some people have said to avoid the use of bash scripts due to there complexity however a library called Shunit2 does exist there is also another runner called bats. I opted to go for Bats, because it was more recent and in honesty i liked the name. I made a good choice the docs are really nice to follow and well written.

> :warning: **Tangent** Wanna come down this git submodule hole?

upon reading the docs <mark>i learnt something new</mark>

`git submodule`

[git submodules](https://git-scm.com/book/en/v2/Git-Tools-Submodules)
[more on git submodules](https://www.freecodecamp.org/news/how-to-use-git-submodules/)

I need to take a min, its really cool stuff i haven't heard of before.

Essentially you can host someone elses module git repo as a sub repo in your own repo. I guess its like what you would do if you couldn't or didn't want to work with NPM. I guess this could be really useful on larger architectured projects. 


### resources: 
- [Bash in 100 seconds](https://www.google.com/search?q=whar+can+bash+do&rlz=1C5OZZY_enGB1128GB1128&oq=whar+can+bash+do+&gs_lcrp=EgZjaHJvbWUyBggAEEUYOTIICAEQABgWGB4yCAgCEAAYFhgeMgoIAxAAGAgYDRgeMg0IBBAAGIYDGIAEGIoFMg0IBRAAGIYDGIAEGIoFMgcIBhAAGO8F0gEIMjQ3MmowajeoAgCwAgA&sourceid=chrome&ie=UTF-8#fpstate=ive&vld=cid:34865368,vid:I4EWvMFj37g,st:0)

- [Freecode camp bash scripting](https://www.freecodecamp.org/news/shell-scripting-crash-course-how-to-write-bash-scripts-in-linux/)

- [testing bash scripts shunit2](https://github.com/kward/shunit2)

- [testing bash scripts bats](https://bats-core.readthedocs.io/en/stable/)

- [Running Bash and Zsh](https://www.geeksforgeeks.org/creating-and-running-bash-and-zsh-scripts/)