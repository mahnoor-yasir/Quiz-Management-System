#include <iostream>
#include<string.h>
using namespace std;

    string subjects[] = {"Maths", "C", "C++", "Python"};
    int numOfSubjects = sizeof(subjects) / sizeof(subjects[0]);

int  math()
{
    // 1-12 questions
    system("color 74");  // grey red
    int score = 0;
    string answer;

    // Question 1
    cout << "Q1. What is the value of 3 squared?" << endl;
    cout << "a) 6" << endl;
    cout << "b) 9" << endl;
    cout << "c) 12" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "b" || answer == "9") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }
     // Question 2
    cout << "\nQ2. Solve the equation: 2x + 5 = 13. What is the value of x?" << endl;
    cout << "a) 4" << endl;
    cout << "b) 6" << endl;
    cout << "c) 9" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "a" || answer == "4") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }
    // Question 3
    cout << "\nQ3. What is the perimeter of a square with a side length of 6 units?" << endl;
    cout << "a) 18 units" << endl;
    cout << "b) 24 units" << endl;
    cout << "c) 36 units" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "b" || answer == "24 units") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;

    }

    // Question 4
    cout << "\nQ4. Simplify the expression: 4(2 + 3) - 7." << endl;
    cout << "a) 8" << endl;
    cout << "b) 13" << endl;
    cout << "c) 19" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "b" || answer == "13") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

    // Question 5
    cout << "\nQ5. What is the value of 10 divided by 2, multiplied by 3? "<< endl;
    cout << "a) 15" << endl;
    cout << "b) 20" << endl;
    cout << "c) 25" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "a" || answer == "15") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 6
    cout << "\nQ6. What is the value of (pi) rounded to two decimal places?" << endl;
    cout << "a) 3.14" << endl;
    cout << "b) 3.16" << endl;
    cout << "c) 3.18" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "a" || answer == "3.14") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 7
    cout << "\nQ7. What is the area of a rectangle with length 8 and width 5?" << endl;
    cout << "a) 48" << endl;
    cout << "b) 13" << endl;
    cout << "c) 40" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "c" || answer == "40") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 8
    cout << "\nQ8. What is the value of 2 to the power of 3?" << endl;
    cout << "a) 8" << endl;
    cout << "b) 6" << endl;
    cout << "c) 5" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "a" || answer == "8") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 9
    cout << "\nQ9. What is the square root of 64?" << endl;
    cout << "a) 96" << endl;
    cout << "b) 64" << endl;
    cout << "c) 34" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "b" || answer == "64") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 10
    cout << "\nQ10. What is the result of 5 + 7 * 2?" << endl;
    cout << "a) 16" << endl;
    cout << "b) 17" << endl;
    cout << "c) 90" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "b" || answer == "17") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 11
    cout << "\nQ11. Simplify the expression: 2(4 + 5) - 3(2 + 1)." << endl;
    cout << "a) 5" << endl;
    cout << "b) 14" << endl;
    cout << "c) 23" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "c" || answer == "23") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 12
    cout << "\nQ12. What is the area of a circle with a radius of 5 units? (Use pi = 3.14)" << endl;
    cout << "a) 31.4 square units" << endl;
    cout << "b) 78.5 square units" << endl;
    cout << "c) 15.7 square units" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "b" || answer == "78.5 square units") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }
   // Print final score
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout << "Your score for Maths Quiz is: " << score << "/12" << endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;

if (score>7){

    cout<<"\n\n\t\t\t\t\t   *****************************************************"<<endl;

    cout<<"\n\n\t\t\t\t\t\t   \"Congratulations! You Pass The Quiz!\" "<<endl;

    cout<<"\n\n\t\t\t\t\t   *****************************************************"<<endl;

}
else {

    cout<<"\n\n\t\t\t\t\t     **************************************************"<<endl;

    cout<<"\n\n\t\t\t\t\t\t     \"Work Hard! Better Luck next time.\" "<<endl;

    cout<<"\n\n\t\t\t\t\t     **************************************************"<<endl;

}
    return score;
}
//  c
int c()
{
    // 1-12 questions
    system("color 60"); //yellow black
    int score = 0;
    string answer;

        // Question 1
    cout << "\nQ1. Which of the following is used to declare a multi-dimensional array in C?" << endl;
    cout << "a)  int arr[];" << endl;
    cout << "b) int[] arr;" << endl;
    cout << "c)  int arr[][];" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "c" || answer == "int arr[][];") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 2
    cout << "\nQ2. Which of the following is the correct way to declare a constant variable in C?" << endl;
    cout << "a) const int x;" << endl;
    cout << "b) int const x;" << endl;
    cout << "c) const x;" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "a" || answer == " const int x;") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 3
    cout << "\nQ3. What is the purpose of the \"continue\" statement in a loop in C?" << endl;
    cout << "a) To exit the loop and continue with the next iteration" << endl;
    cout << "b) To exit the loop completely" << endl;
    cout << "c) To skip the current iteration and move to the next iteration" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "c" || answer == "To skip the current iteration and move to the next iteration") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

    // Question 4
    cout << "\nQ4. Which of the following is used to access the value of a variable through its address in C?"<< endl;
    cout << "a) *" << endl;
    cout << "b) &" << endl;
    cout << "c) #" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "b" || answer == "&") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

    // Question 5
    cout << "\nQ5. Which of the following is the correct syntax to define a function in C?" << endl;
    cout << "a) int function_name()" << endl;
    cout << "b) int function_name(x)" << endl;
    cout << "c) int function_name(int x)" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "c" || answer == "int function_name(int x)") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 6
    cout << "\nQ6. Which of the following is not a valid data type in C?" << endl;
    cout << "a) float" << endl;
    cout << "b) string " << endl;
    cout << "c) double" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "b" || answer == " string") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 7
    cout << "\nQ7. What is the purpose of the \"sizeof\" operator in C?" << endl;
    cout << "a) To assign a value to a variable" << endl;
    cout << "b) To calculate the sum of two numbers" << endl;
    cout << "c) To find the size of a variable or data type in bytes" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "c" || answer == "To find the size of a variable or data type in bytes") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 8
    cout << "\nQ8. Which of the following is a valid variable name in C?" << endl;
    cout << "a) 123var" << endl;
    cout << "b) _var123" << endl;
    cout << "c) var-123" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "b" || answer == "_var123") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 9
    cout << "\nQ9. What is the purpose of the \"break\" statement in a switch statement in C?" << endl;
    cout << "a) To exit the switch statement and continue with the next statement after the switch" << endl;
    cout << "b) To skip the current iteration and move to the next iteration" << endl;
    cout << "c) To exit the switch statement and continue with the next statement after the switch" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "a" || answer == "To exit the switch statement and continue with the next statement after the switch") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 10
    cout << "\nQ10. Which of the following is NOT a valid arithmetic operator in C?" << endl;
    cout << "a) +" << endl;
    cout << "b) _" << endl;
    cout << "c) /" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "c" || answer == "/") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 11
    cout << "\nQ11. What is the purpose of the \"scanf\" function in C?" << endl;
    cout << "a) To print output to the console" << endl;
    cout << "b) To read input from the user" << endl;
    cout << "c) To perform mathematical calculations" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "b" || answer == "To read input from the user") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 12
    cout << "\nQ12. Which of the following is the correct way to initialize an integer variable in C?" << endl;
    cout << "a) nt x; x = 5;" << endl;
    cout << "b) x = int(5);" << endl;
    cout << "c) int x = 5;" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "c" || answer == "int x = 5;") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }
    // Print final score
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout << "Your score for C language Quiz is: " << score << "/12" << endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;

if (score>7){

    cout<<"\n\n\t\t\t\t\t   *****************************************************"<<endl;

    cout<<"\n\n\t\t\t\t\t\t   \"Congratulations! You Pass The Quiz!\" "<<endl;

    cout<<"\n\n\t\t\t\t\t   *****************************************************"<<endl;

}
else {

    cout<<"\n\n\t\t\t\t\t     **************************************************"<<endl;

    cout<<"\n\n\t\t\t\t\t\t     \"Work Hard! Better Luck next time.\" "<<endl;

    cout<<"\n\n\t\t\t\t\t     **************************************************"<<endl;
}
    return score;
}
//c++
int cplus()
{
   // 1-12 questions
    system("color 5F"); //purple while
    int score = 0;
    string answer;

        // Question 1
    cout << "\nQ1. What is the purpose of the \"const\" keyword in C++?" << endl;
    cout << "a) It declares a constant value that can be modified" << endl;
    cout << "b) It declares a variable that cannot be modified" << endl;
    cout << "c) It declares a constant function that can modify variables " << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "b" || answer == "It declares a variable that cannot be modified") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 2
    cout << "\nQ2. Which data structure follows the \"Last In, First Out\" (LIFO) principle?" << endl;
    cout << "a) Queue" << endl;
    cout << "b) Stack " << endl;
    cout << "c) Linked List" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "b" || answer == " Stack") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 3
    cout << "\nQ3.Which syntax declares a character array named \"array\" with a specified size in C++?" << endl;
    cout << "a) char array;" << endl;
    cout << "b) char array[SIZE];" << endl;
    cout << "c) char[] array;" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "b" || answer == "char array[SIZE];") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

    // Question 4
    cout << "\nQ4. Which of the following is an example of a preprocessor directive in C++?"<< endl;
    cout << "a) cout << \"Hello World!\" << endl;" << endl;
    cout << "b) using namespace std;" << endl;
    cout << "c) #include <iostream>" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "c" || answer == "#include <iostream> ") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

    // Question 5
    cout << "\nQ5. Which of the following is NOT a valid way to pass arguments to a function in C++?" << endl;
    cout << "a) Pass by name" << endl;
    cout << "b) Pass by pointer" << endl;
    cout << "c) Pass by reference" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "a" || answer == "Pass by name") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 6
    cout << "\nQ6. How do you declare a pointer variable in C++?" << endl;
    cout << "a) int *ptr;" << endl;
    cout << "b) int ptr;" << endl;
    cout << "c) int #ptr;" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "a" || answer == "int *ptr;") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 7
    cout << "\nQ7. Which operator is used to access an element in a 2D array?" << endl;
    cout << "a) []" << endl;
    cout << "b) {}" << endl;
    cout << "c) <>" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "a" || answer == "[]") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 8
    cout << "\nQ8. Which header file should be included to use the \"cout\" object in C++?" << endl;
    cout << "a) stdio.h" << endl;
    cout << "b) stdlib.h" << endl;
    cout << "c) iostream" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "c" || answer == "iostream") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 9
    cout << "\nQ9. Which parameter passing mechanism passes the address of the argument to the function?" << endl;
    cout << "a) Pass by value" << endl;
    cout << "b) Pass by reference" << endl;
    cout << "c)  Pass by pointer" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "c" || answer == " Pass by pointer") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 10
    cout << "\nQ10. Which of the following is the correct way to declare a variable in C++?" << endl;
    cout << "a)  int x;" << endl;
    cout << "b) declare x as int;" << endl;
    cout << "c) int = x;" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "a" || answer == " int x;") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 11
    cout << "\nQ11. What is the purpose of the new keyword in C++?" << endl;
    cout << "a) It is used to delete an object from memory." << endl;
    cout << "b) It is used to allocate memory for a new object." << endl;
    cout << "c) It is used to declare a new variable." << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "c" || answer == "It is used to allocate memory for a new object.") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 12
    cout << "\nQ12. What is the difference between the pre-increment operator (++x) and the post-increment operator (x++) in C++?" << endl;
    cout << "a) There is no difference, they both increment the value of x by 1." << endl;
    cout << "b) The pre-increment operator increments the value of x before using it, \nwhile the post-increment operator uses the current value of x and then increments it." << endl;
    cout << "c) The pre-increment operator increments the value of x by 2, while the post-increment operator increments it by 1." << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "b" || answer == "The pre-increment operator increments the value of x before using it, while the post-increment operator uses the current value of x and then increments it.") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }
     // Print final score
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout << "Your score for C++ Quiz is: " << score << "/12" << endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;

if (score>7){

    cout<<"\n\n\t\t\t\t\t   *****************************************************"<<endl;

    cout<<"\n\n\t\t\t\t\t\t   \"Congratulations! You Pass The Quiz!\" "<<endl;

    cout<<"\n\n\t\t\t\t\t   *****************************************************"<<endl;

}
else {

    cout<<"\n\n\t\t\t\t\t     **************************************************"<<endl;

    cout<<"\n\n\t\t\t\t\t\t     \"Work Hard! Better Luck next time.\" "<<endl;

    cout<<"\n\n\t\t\t\t\t     **************************************************"<<endl;
}

return score;

}

int python()
{
    //1-12 questions
    system("color 2F");  // white green
    int score = 0;
    string answer;

        // Question 1
    cout << "\nQ1. Write a Python program to swap the values of two variables." << endl;
    cout << "a) Using a temporary variable" << endl;
    cout << "b) Using the XOR operator" << endl;
    cout << "c) Using the reverse() function" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "a" || answer == "Using a temporary variable") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 2
    cout << "\nQ2. How do you convert a string to uppercase in Python?" << endl;
    cout << "a) upper()" << endl;
    cout << "b) capitalize()" << endl;
    cout << "c) swapcase()" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "a" || answer == "upper()") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 3
    cout << "\nQ3. How do you check if a number is even in Python?" << endl;
    cout << "a)  Using the modulo operator (%)" << endl;
    cout << "b) Using the exponentiation operator ()" << endl;
    cout << "c) Using the floor division operator (//)" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "a" || answer == "Using the modulo operator (%)") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

    // Question 4
    cout << "\nQ4. Write a Python program to reverse a string."<< endl;
    cout << "a) Using the join() function" << endl;
    cout << "b) Using the reverse() function" << endl;
    cout << "c) Using slicing" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "c" || answer == "Using slicing") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

    // Question 5
    cout << "\nQ5. What is the difference between a list and a tuple in Python?" << endl;
    cout << "a) Lists can contain different data types, tuples can only contain the same data type" << endl;
    cout << "b) Lists have a fixed size, tuples can grow dynamically" << endl;
    cout << "c) Lists are mutable, tuples are immutable" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "c" || answer == "Lists are mutable, tuples are immutable") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 6
    cout << "\nQ6. How do you find the length of a string in Python?" << endl;
    cout << "a) length()" << endl;
    cout << "b) len()" << endl;
    cout << "c) count()" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "b" || answer == "len()") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 7
    cout << "\nQ7. How do you remove duplicates from a list in Python?" << endl;
    cout << "a) Using the remove() function" << endl;
    cout << "b) Using the unique() function" << endl;
    cout << "c) Using the set() function" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "c" || answer == "Using the set() function") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 8
    cout << "\nQ8. Write a Python program to find the factorial of a number." << endl;
    cout << "a) Using the math module" << endl;
    cout << "b) Using recursion" << endl;
    cout << "c) All of the above" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "c" || answer == "All of the above") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 9
    cout << "\nQ9. x = 5, y = 2 ; print(x // y) " << endl;
    cout << "a) 2" << endl;
    cout << "b) 2.5" << endl;
    cout << "c) 3" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "c" || answer == "3") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 10
    cout << "\nQ10.  How do you check if a key exists in a dictionary in Python?" << endl;
    cout << "a) Using the has_key() function" << endl;
    cout << "b) Using the in keyword" << endl;
    cout << "c) Using the exists() function" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "b" || answer == "Using the in keyword") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 11
    cout << "\nQ11. What is the difference between the append() and extend() methods in Python lists?" << endl;
    cout << "a) There is no difference, they are interchangeable" << endl;
    cout << "b) append() adds elements in sorted order, extend() adds elements randomly" << endl;
    cout << "c) append() adds a single element, extend() adds multiple elements" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "c" || answer == "append() adds a single element, extend() adds multiple elements") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

     // Question 12
    cout << "\nQ12. How do you find the maximum and minimum values in a list in Python?" << endl;
    cout << "a) Using the max() and min() functions" << endl;
    cout << "b) Using the sort() function and indexing" << endl;
    cout << "c) Using the sum() function and division" << endl;
    cout << "Your answer: ";
    cin >> answer;

    if (answer == "a" || answer == "Using the max() and min() functions") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }
    // Print final score
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout << "Your score for Python Quiz is: " << score << "/12" << endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;

if (score>7){

    cout<<"\n\n\t\t\t\t\t   *****************************************************"<<endl;

    cout<<"\n\n\t\t\t\t\t\t   \"Congratulations! You Pass The Quiz!\" "<<endl;

    cout<<"\n\n\t\t\t\t\t   *****************************************************"<<endl;

}
else {

    cout<<"\n\n\t\t\t\t\t     **************************************************"<<endl;

    cout<<"\n\n\t\t\t\t\t\t     \"Work Hard! Better Luck next time.\" "<<endl;

    cout<<"\n\n\t\t\t\t\t     **************************************************"<<endl;

    }

return score;
}
// Function to display the quiz subjects
void displaySubjects(string subjects[], int size) {
    system("color 06"); //black yellow
    cout << "Quiz Subjects:" << endl;
    for (int i = 0; i < size; i++) {
        cout << i + 1 << " " << subjects[i] << endl;
    }
}

// Function to take user's choice and start the quiz
int total_score =0;
void startQuiz(string subjects[], int size) {
    system("color 47"); //red white
    int choice;
    char press;
    int score=0;
    total_score=0;
    do{
        system("cls");
        displaySubjects(subjects, numOfSubjects);
    cout << "Enter the subject number to start the quiz: ";
    cin >> choice;
    system("cls");
    cout<<"\n\t\t\t\t\t====================================================================\n";
    cout<<"\t\t\t\t\t Attempt the required quiz. Write the correct option e.g (a, b or c) \n";
    cout<<"\t\t\t\t\t====================================================================\n\n";
    switch(choice)
    {
        case 1:
        {
    total_score=total_score + math();
       cout<<"\n\n\n\n\nYour total score for all quizzes attempted is "<<total_score<<endl;
    break;
    }
case 2:
{

    total_score=total_score + c();
    cout<<"\n\n\n\n\nYour total score for all quizzes attempted is "<<total_score<<endl;
    break;
}
case 3:
{

    total_score=total_score + cplus();
    cout<<"\n\n\n\n\nYour total score for all quizzes attempted is "<<total_score<<endl;
    break;
}
case 4:
{
    total_score=total_score + python();
    cout<<"\n\n\n\n\nYour total score for all quizzes attempted is "<<total_score<<endl;
    break;
}
    cout<<"Your total score for all attempt quizes is "<<total_score<<endl;
// Print final score
    cout << "\nYour score: " << score << "/12" << endl;
}

    system("color 5F"); //purple while
    cout<<"\n\n\n\t\t\t\t\t\t..........................................."<<endl;
    cout<<"\t\t\t\t\t\t   DO YOU WANT TO PERFORM ANY OTHER QUIZ"<<endl;
    cout<<"\t\t\t\t\t\t...........................................\n\n"<<endl ;

    system("color B0"); //aqua black

    cout<<"\n \t\t\t\t\t\t\t    READ CAREFULLY"<<endl;

    cout<<"\n\t\t\t\t\t------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t  Press \"Y\" if you want to continue or any key to terminate!"<<endl;
    cout<<"\t\t\t\t\t------------------------------------------------------------\n\n"<<endl ;

cin>>press;

}while(press=='Y');

    }
    //Display Result
    void result(string name, string roll_no) {
    system("cls");
    system("color 1F");
    float percentage = 0;

    cout<<"\n\n\t\t\t\t\t\t\t    %%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
    cout<<"\n\t\t\t\t\t\t\t\t    QUIZ RESULT"<<endl;
    cout<<"\n\t\t\t\t\t\t\t    %%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;

    cout << "\n\nStudent Name: " << name << "  >.<"<< endl;
    cout << "Roll no: " << roll_no <<"  \".\""<< endl;

    cout << "Marks: " << total_score <<"  ^.^"<< endl;

    if (total_score <= 7) {
        cout << "Status: Fail" <<"  {~_~} "<< endl;

    }
    else {
        cout << "Status: Pass" <<"  {^-^}"<< endl;
    }
        cout<<" \n\n\t\t\t\t \".\"\t\".\"\t\".\"\t\".\"\t\".\"\t\".\"\t\".\"\t\".\"\t\".\"\t\".\" "<<endl;
        cout<<"\n\t\t\t\t\t  \"Self belief and hard-work will always earn you success\" ";
        cout<<" \n\n\t\t\t\t \".\"\t\".\"\t\".\"\t\".\"\t\".\"\t\".\"\t\".\"\t\".\"\t\".\"\t\".\" "<<endl;
}

int main() {
    system("color C0");      // pink black

    cout<<"\n\n\t\t\t\t\t\t\t  *********************************"<<endl;

    cout<<"\n\n\t\t\t\t\t\t\t\t     QUIZ SYSTEM "<<endl;

    cout<<"\n\n\t\t\t\t\t\t\t  *********************************"<<endl;

    cout<<"\n\n\t\t\t\t\t ^.^\t ^.^\t^.^\t^.^\t^.^\t^.^\t^.^\t^.^"<<endl;
    cout<<"\n\n\t\t\t\t\t\t\"A quiz compition is not just about knowledge \n\t\t\t\t\t\t     its about the thirst for knowledge.\""<<endl;
    cout<<"\n\n\t\t\t\t\t ^.^\t ^.^\t^.^\t^.^\t^.^\t^.^\t^.^\t^.^"<<endl;

    string name,roll_no,department,section;

    cout<<"\t\tEnter Name: ";
    cin>>name;
    cout<<"\t\tEnter rollno: ";
    cin>>roll_no;
    cout<<"\t\tEnter Department: ";
    cin>>department;
    cout<<"\t\tEnter Section: ";
    cin>>section;

    cout<<"\n\n\t\t\t\t   >.< \t>.<\t>.<\t>.<\t>.<\t>.<\t>.<\t>.<\t>.<\t>.< "<<endl;
    cout<<"\n\t\t\t\t    You dont have to be great to start, but you have to start to be great!!! "<<endl;
    cout<<"\n\t\t\t\t   >.< \t>.<\t>.<\t>.<\t>.<\t>.<\t>.<\t>.<\t>.<\t>.<\n "<<endl;

    string starttQuiz;
    cout<<"Press any key to start the quiz. GOOD LUCK!"<<endl;
    cin>>starttQuiz;

    startQuiz(subjects, numOfSubjects);

   void startQuiz(string subjects[], int size);

    // Call the function
    result(name,roll_no);

    return 0;
}
