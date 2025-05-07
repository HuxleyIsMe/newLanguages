/**
 *
 * Ok Ive decided to do some code wars challenges while i get the fundamentals :D
 */

#include <iostream>
#include <string>

// this is cool:
using namespace std;

main()
{
    spinWords("my cat is called pabblebabble");
}

// ok lets break this down here, we are saying const so like something not changing
// the type is a string so we are working with a string
// the & means we are using a reference meaning str is our name
// using a reference means we are using the real thing, but its a constant so we are not changing it?
// then why not just say string str?
string spinWords(const string &str)
{ /**
 ok so like appaz this is a c++ thing, its like quicker to say let me borrow the real thing promise i wont touch it
 then it is to pass in a replica
 In JS I'd probably end up passing in the real thing then spreading it i.e. {...} to make myself a copy.


  */
    string finalString = "";
    // split the words by white space
    /*
    https://favtutor.com/blogs/split-string-cpp
    reading this strtok looks the best, but begs the question is this like an npm module? Whats the package manager sit?:finalString

    Chats got this one :D
    Great question — C++ doesn't have a direct equivalent to npm, but there are a few popular package managers and build systems that together cover similar territory.

    Here’s the breakdown:

        🔧 Closest equivalents to npm in C++:
        Tool	Description	Like npm in that it...
        vcpkg	Microsoft-backed package manager	Installs and manages C++ libraries with a simple CLI
        Conan	Dependency manager focused on C++	Handles versioning, builds, and dependencies
        CMake	Build system generator	Kind of like package.json + npm run build but lower-level
        Make / Ninja	Actual build runners	Execute compiled instructions — like npm scripts but lower-level

    🪛 TL;DR:
    There’s no single, universal npm for C++, but:

    vcpkg and Conan are your closest friends

    You’ll almost always see CMake in the mix to glue things together

    Would you like a minimal starter C++ project using vcpkg and CMake to play with?

    */
    // p = strtok(&str, " ");
    // increment the string if the word is less then

    return "pizza";
}

main()
{
}
