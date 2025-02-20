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
 
 Integer int 
 Character char
 Boolean bool
 Floating Point float 
 Double Floating Point double
 Void void
 

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
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int numberOfDays = 40;
    int numberOfNights = 40;
    int numberOfArabianNights = 1001;

    char alpha = 'a';
    char beta = 'b';
    char gamma = 'c';

    bool isOn = true;
    bool isOff = false;
    bool test = true;

    float degreesCentigrade = 25.4f;
    float degreesFahrenheit = 12.67f;
    float rootTwo = 1.4142f;

    double heightInMeters = 1.65;
    double weightInKilos = 95.0;
    double bmi = 28.5;



    
    ignoreUnused(number, numberOfDays, numberOfNights, numberOfArabianNights, alpha, beta, gamma, isOn, isOff, test, degreesCentigrade, degreesFahrenheit, rootTwo, heightInMeters, weightInKilos, bmi); //passing each variable declared to the ignoreUnused() function
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
 bool feedCat(int tinsOfCatFood, bool haveCatBowl = true) 
{
    ignoreUnused(tinsOfCatFood, haveCatBowl);
    return {};
}
/*
 2)
 */
float centigradeToFahrenheit(float degreesCentigrade)
{
    ignoreUnused(degreesCentigrade);
    return {};
}

/*
 3)
 */
int addThreeNumbers(int first, int second = 2, int third = 5)
{
    ignoreUnused(first, second, third);
    return {};
}
/*
 4)
 */
void walkDogs(int numberOfDogs = 1)
{
    ignoreUnused(numberOfDogs);
}
/*
 5)
 */
char largerCharacter(char char1, char char2)
{
    ignoreUnused(char1, char2);
    return {};
}
/*
 6)
 */
double calculateSpeed(double distanceInKilometers, double timeInHours)
{
    ignoreUnused(distanceInKilometers, timeInHours);
    return {};
} 
/*
 7)
 */
int countDigits(int largeNumber)
{
    ignoreUnused(largeNumber);
    return {};
}
/*
 8)
 */
double squareRoot(double number)
{
    ignoreUnused(number);
    return {};
}
/*
 9)
 */
bool isGreaterThan(int num1, int num2)
{
    ignoreUnused(num1, num2);
    return {};
}
/*
 10)
 */
bool hasCreatedEnoughFunctions(int numberOfFunctionsCreated)
{
    ignoreUnused(numberOfFunctionsCreated);
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
    auto catFed = feedCat(3);
    //2)
    auto degreesFahrenheit = centigradeToFahrenheit(65.4f);
    //3)
    auto sum = addThreeNumbers(4, 6);
    //4)
    walkDogs(5);
    //5)
    auto larger = largerCharacter('a', 'f');
    //6)
    auto speed = calculateSpeed(148.55, 1.5);
    //7)
    auto digitCount = countDigits(45677);
    //8)
    auto answer = squareRoot(235.0);
    //9)
    auto isGreater = isGreaterThan(234, 546);
    //10)
    auto enough = hasCreatedEnoughFunctions(9);
    
    ignoreUnused(carRented, catFed, degreesFahrenheit, sum, larger, speed, digitCount, answer, isGreater, enough);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
