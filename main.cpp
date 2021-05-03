#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
 int
 unsigned int
 float
 bool
 char
 double
 void 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)

void variableDeclarations()
{
    int i = -9, j = 74, k = 998;
    unsigned int x = 6, y = 8, z = 10;
    float f = 5.f, g = 6.f, h = .0f;
    bool a = true, b = false, c = true;
    char r = 'p', s = 'f', t = 'm';
    double l = 3.14, m = 6.28, n = 9.42;
    
    //passing each variable declared to the ignoreUnused() function
    ignoreUnused(i, j, k, x, y, z, f, g, h, a, b, c, r, s, t, l, m, n);
}

/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void copyNumber(int a, int b)
{ 
    ignoreUnused(a, b);
} 

/*
 2)
 */
void startPlayback(int position = 0)
{ 
    ignoreUnused(position);
} 

/*
 3)
 */
bool executePayment(float due, float paid = 0)
{ 
    ignoreUnused(due, paid);
    return {};
} 

/*
 4)
 */
bool buyPizza(int slices = 0, int friends = 0, float deliveryTime = 0.f)
{ 
    ignoreUnused(slices, friends, deliveryTime);
    return {};
} 

/*
 5)
 */
char passCharThrough(char a = 'a')
{ 
    ignoreUnused(a);
    return {};
} 

/*
 6)
 */
bool buyTickets(int eventId, int numTickets = 0, bool discountedPrice = false)
{ 
    ignoreUnused(eventId, numTickets, discountedPrice);
    return {};
} 

/*
 7)
 */
int sumIntegers(int a = 0, int b = 0, int c = 0)
{ 
    ignoreUnused(a, b, c);
    return {};
} 

/*
 8)
 */
void clickButton(int objectId)
{ 
    ignoreUnused(objectId);
} 

/*
 9)
 */
void moveFader(int objectId, float startValue, float endValue)
{ 
    ignoreUnused(objectId, startValue, endValue);
} 

/*
 10)
 */
bool playSample(int sampleId)
{ 
    ignoreUnused(sampleId);
    return {};
} 


/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 

    //1)
    copyNumber(6, 9);

    //2)
    startPlayback(0);

    //3)
    auto paymentSuccessful = executePayment(6.5, 6.5);

    //4)
    auto pizzaBought = buyPizza(8, 2, 19.5);

    //5)
    auto charSupplied = passCharThrough('u');

    //6)
    auto ticketsBought = buyTickets(557, 2);

    //7)
    auto result = sumIntegers(3, 6);

    //8)
    clickButton(883);

    //9)
    moveFader(663, 0.2f, 0.6f);

    //10)
    auto played = playSample(6);
    
    ignoreUnused(carRented, paymentSuccessful, pizzaBought, charSupplied, ticketsBought, result, played);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
