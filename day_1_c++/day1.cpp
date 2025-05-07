
/**
 *
 * Notes:
 *
 * The syntax is very similar to when i have dabbled with Go and Rust.
 *
 * Theres the concept of a main runner.
 *
 * like most languages we are importing packages of what we need here with #include
 *
 * we are declarative of types when we initiate vars like Rust and Go.
 *
 * We have :: like rust
 *
 * we have lots of ; like old school JS.
 *
 * Oh nice we can actually say and && or in statements, thats thoughtful, you can also descriptively say not
 *
 * also i really like the << and >> ops... i cant explain why but its soothing.
 */

#include <iostream>
#include <string>

int main()
{
    std::string userBelievesInFairies = "undecided";
    std::cout << "Hey hey you, do you want to vote for the next minister of unicorns?\n";
    std::cout << "That's right, of course you do!!\nBut first, do you believe in fairies?\nSay yes or no:\n";
    std::cin >> userBelievesInFairies;

    // You can add some logic here based on the user's response
    // Example:
    if (userBelievesInFairies == "yes")
    {
        std::cout << "Great! You're eligible to vote.\n";
    }
    else
    {
        std::cout << "Oh no! Only fairy believers can vote.\n";
    }

    int howMuchGlitterLove = 0;

    std::cout << "On a scale from 1 to 10, how much do you like glitter? \n";
    std::cin >> howMuchGlitterLove;

    if (howMuchGlitterLove > 5)
    {
        std::cout << "dazzling proceeeed.\n";
    }
    else
    {
        std::cout << "eee this may not be the place for you, the glitter is bio degradeable\n";
    }
    return 0;
}

// remember string is a little different from int here, and to be fair that is because string is compound
// of lots of different bits

/*

Ok so while loops are also the same :

#include <iostream>

int main() {
  int pin = 0;

  std::cout << "BANK OF CODÉDEX\n\n";

  std::cout << "Enter your PIN: ";
  std::cin >> pin;

  while (pin != 1234) {
    std::cout << "Incorrect PIN. Enter your PIN again: ";
    std::cin >> pin;
  }

  if (pin == 1234) {
    std::cout << "PIN accepted!";
  }
}


ooo hello look how familiar this for loop is:

for (int i = 0; i < 6; i++) {
  std::cout << i;
}

its like the same as JS! wunderbar!

and theres a foreach just slightly different from js for in/of loop style:

for (type variableName : arrayName) {
  // code block to be executed
}
*/

// question whats the difference between the double and float?

/***
 *
 * float vs. double

The precision of a floating point value indicates how many digits the value can have after the decimal point.
The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits.
 Therefore it is safer to use double for most calculations.

 from w3 thankyou <3



 ooopa! Arrays looking more like go syntax:

 string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

 access is still familiar: cout << cars[0];

 Ok so one difference i remember and am aware of is how some languages we have to specify the size of an array early and use a different method if we are uncertain


 Fixed Size (Arrays) vs. Dynamic Size (Vectors)
You will often hear the terms "fixed size" and "dynamic size" when discussing arrays in C++.

This is because the size of an array in C++ is fixed, meaning you cannot add or remove elements after it is created.

Here we go, this is the resziable situation:

Vectors
For operations that require adding and removing array elements, C++ provides vectors, which are resizable arrays.

The size of a vector is dynamic, meaning it can grow and shrink as needed.

Vectors are found in the <vector> library, and they come with many useful functions to add, remove and modify elements:

// A vector with 3 elements
vector<string> cars = {"Volvo", "BMW", "Ford"};

// Adding another element to the vector
cars.push_back("Tesla");


length= cout << sizeof(myNumbers);

 */

/***
 * bam da da de da da
 *
 * now onto something new structs....
 *
 * oh lol wait its just an object dressed like TS
 *
 * Talking of TS theres also Enums
 *
 *
 * OOps now we have found something new references and pointers,
 *
 * wierd function rule:
 *
 * Note: Multiple functions can have the same name as long as the number and/or type of parameters are different.
* im not sure if that makes me happy

bit more into string specialness

 */