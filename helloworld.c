#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

char board[3][3];
const char PLAYER = 'x';
const char COMPUTER = 'O';

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);

// Array of structs
// struct Student{
//     char name[12];
//     float gpa;
// };

// typedef: use to give an existing datatype nickname
// typedef struct{
//     char name[12];
//     int age;
//     int id;
//     char color[8];
// } players;

// struct is like classes in other languages but without method
// struct Employees{
//     char name[12];
//     int age;
//     int id;
//     char color[8];
// };

// Sorting array OF numbers
// void sort(int num[], int size){
//     for(int i = 0; i < size; i++){
//         for(int j = 0; j < size - 1; j++){
//             if(num[j] > num[j + 1]){
//                 int temp = num[j];
//                 num[j] = num[j + 1];
//                 num[j + 1] = temp;
//             }
//         }
//     }
// }

// void printSort(int num[], int size){
//     for(int i = 0; i < size; i++){
//         printf("%d ", num[i]);
//     }
// }

// sorting array of characters
// void sort(char num[], int size){
//     for(int i = 0; i < size; i++){
//         for(int j = 0; j < size - 1; j++){
//             if(num[j] > num[j + 1]){
//                 int temp = num[j];
//                 num[j] = num[j + 1];
//                 num[j + 1] = temp;
//             }
//         }
//     }
// }

// void printSort(char num[], int size){
//     for(int i = 0; i < size; i++){
//         printf("%c ", num[i]);
//     }
// }

// Function declaration
// With parameter(s)
// void birthday(char name[], int age){
//     printf("\nHappy birthday! %s", name);
//     printf("\nYou are %d years old!", age);
// }

// void birthday(char[], int); // function prototype

// double square(double x){
//     double result = x * x;
//     printf("\n%lf", result);
//     return result;
// }

// Declare a function using Ternary operator
// int findmax(int a, int b){
//     return(a > b) ? a : b;
// }

int main()
{
    printf("\n********************************\n");
    // This is a comment
    /* This is a 
    multiline comment */
    printf("Hello World\n");
    // Variables declaration
    // int age; // integer
    // char name; // single character
    // float height; // floating point number
    // char grade; // array of characters
    // const double fgf; // constant variable
    // age = 22;
    // name = 'E';
    // height = 5.7;
    // grade = 'C';
    // printf("My name is %c\n", name);
    // printf("I am %d years old.\n", age);
    // printf("I am %f fits\n", height);
    // printf("I have %c grade\n", grade);

    // Accepting user input
    // int dob;
    // char friends[25];
    // printf("How old are you?\n");
    // scanf("%d", &dob);
    // printf("Enter your friend name\n");
    // // scanf("%s", &friends);
    // fgets(friends, 25, stdin);
    // friends[strlen(friends)-1] = '\0';
    // printf("You are %d years old\n", dob);
    // printf("Your friend name is %s", friends);

    // Maths function
    // double a = sqrt(12);
    // double b = pow(3, 3);
    // double c = round(39.234);
    // int d = ceil(34.3443);
    // int f = floor(3.999);
    // double e = fabs(-200);
    // double g = log(29);
    // double h = sin(29);
    // double i = cos(29);
    // double k = tan(29);
    // printf("\n%lf", a);
    // printf("\n%lf", b);
    // printf("\n%lf", c);
    // printf("\n%d", d);
    // printf("\n%lf", e);
    // printf("\n%d", f);
    // printf("\n%lf", g);
    // printf("\n%lf", h);
    // printf("\n%lf", i);
    // printf("\n%lf", k);

    // Let calculate the area of circle
    // const double PI = 3.14159;
    // double radius;
    // double circumference;

    // printf("\nEnter radius of a circle: ");
    // scanf("%lf", &radius);
    // circumference = 2 * PI * radius;
    // double area = PI * radius * radius;
    // printf("\nArea of circle is %lf", area); 
    // printf("circumference is %lf", circumference);

    // double A;
    // double B;
    // double C;

    // printf("Enter side A: ");
    // scanf("%lf", &A);

    // printf("Enter side B: ");
    // scanf("%lf", &B);

    // C = sqrt(A*A + B*B);
    // printf("Side C %lf", C);

    // If statements

    // int myage; 
    // printf("\nEnter your age: ");
    // scanf("%d", &myage);

    // if(myage >= 18){
    //     printf("Your are now signed up!");
    // }
    // else if(myage == 0){
    //     printf("You can't sign up! You are just born.");
    // }
    // else if(myage < 0){
    //     printf("You haven't been born yet!");
    // }
    // else{
    //     printf("You are too young to sign up!");
    // }

    // Switch statement

    // char mygrade;

    // printf("\nEnter a letter grade: ");
    // scanf("%c", &mygrade);

    // switch(mygrade){
    //     case 'A':
    //         printf("Perfect!\n");
    //         break;
    //     case 'B':
    //         printf("You did good!\n");
    //         break;
    //     case 'C':
    //         printf("You did okay!\n");
    //         break;
    //     case 'D':
    //         printf("At least it's not an F!\n");
    //         break;
    //     case 'F':
    //         printf("You failed!\n");
    //         break;
    //     default:
    //         printf("Please enter only a valid grades");
    // }

    // Temperature program

    // char unit;
    // float temp;

    // printf("\nIs the temperature in (F) or (C)?: ");
    // scanf("%c", &unit);
    // unit = toupper(unit);

    // if(unit == 'C'){
    //     printf("\nEnter the temp in celsius: ");
    //     scanf("%f", &temp);
    //     temp = (temp * 9 / 5) + 32;
    //     printf("\nThe temp in Farenheit is: %.1f", temp);
    // }
    // else if(unit == 'F'){
    //     printf("\nEnter the temp in Farenheit: ");
    //     scanf("%f", &temp);
    //     temp = ((temp - 32) * 5) / 9;
    //     printf("\nThe temp in Celsius is: %.1f", temp);
    // }
    // else{
    //     printf("Enter a valid single character; (C) or (F)");
    // }

    // Calculator app

    // char operator;
    // double num1;
    // double num2;
    // double result;

    // printf("\nEnter an operator (+ - * /): ");
    // scanf("%c", &operator);

    // printf("Enter first number: ");
    // scanf("%lf", &num1);

    // printf("Enter second number: ");
    // scanf("%lf", &num2);

    // if(operator == '+'){
    //     result = num1 + num2;
    //     printf("\nResult is %lf", result);
    // }
    // else if(operator == '-'){
    //     result = num1 - num2;
    //     printf("\nResult is %lf", result);
    // }
    // else if(operator == '*'){
    //     result = num1 * num2;
    //     printf("\nResult is %lf", result);
    // }
    // else if(operator == '/'){
    //     result = num1 / num2;
    //     printf("\nResult is %lf", result);
    // }
    // else{
    //     printf("Enter a valid operator. \n(%c) is not a valid operator.", operator);
    // }

    // Logical operators: && (AND), || (OR) and ! (NOT)

    // && (AND) logical operator checks if all conditions are true

    // float temp = 32;
    // bool sunny = true;
    // if(temp >= 0 && temp <= 32 && sunny == true){
    //     printf("\nThe weather is good!");
    // }
    // else{
    //     printf("\nThe weather is bad!");
    // }

    // // || (OR) logical operator checks if any of the conditions is true
    // if(temp <=0 || temp >=32){
    //     printf("\nThe weather is bad!");
    // }
    // else{
    //     printf("\nThe weather is good!");
    // }

    // // ! (NOT) operator reverse the state of && or || operator or it's the opposit of && or || operator
    // if(!sunny){
    //     printf("\nThe weather is cloudy!");
    // }
    // else{
    //     printf("\nThe weather is sunny!");
    // }

    // Function execution or calling a function
    // char name[] = "Ebuka";
    // int age = 26;
    // birthday(name, age);

    // double x = square(5);

    // Ternary operator: shortcut to if/else when assigning/returning a value
    // (condition) ? value if true: value if false

    // int max = findmax(3, 4);
    // printf("%d", max);
    
    // calling function prototype
    // char name[] = "Ebuka";
    // int age = 33;
    // birthday(name, age);

    // Working with string functions

    // char string1[] = "Ebuka";
    // char string2[] = "Emmanuel";

    // strlwr(string1); // converts a string to lowercase
    // strupr(string2); // converts a string to upperercase
    // strcat(string1, string2); // concate strings together
    // strncat(string1, string2, 1); // concate a number of character(s) of string2 to string1
    // strcpy(string1, string2); // copy string2 to string1
    // strncpy(string1, string2, 4); // copy a number of character(s) of string2 to string1
    // strset(string1, '?'); // sets all characters of a string to a given character
    // strnset(string1, 'x', 1); // sets first n characters of a string to a given character
    // strrev(string1); // reverse a string
    
    // int result = strlen(string1); // returns the length of a string as int
    // int result = strcmp(string1, string2); // string compare all character
    // int result = strncmp(string1, string2, 2); // string compare n characters
    // int result = stricmp(string1, string2); // string compare all (ignore case)
    // int result = strincmp(string1, string2, 2); // string compare n characters (ignore case)

    // printf("%d", result);
    // if(result == 0)
    // {
    //     printf("These strings are the same");
    // }
    // else{
    //     printf("These strings are not the same");
    // }

    // for loop
    // for(int i = 0; i<= 10; i++){
    //     printf("\n%d", i);
    // }
    // for(int i = 10; i>= 1; i--){
    //     printf("\n%d", i);
    // }

    // while loop: repeats a section of code possibly unlimited times
    // while some conditions remains true

    // char name[25];
    // printf("\nWhat is your name?: ");
    // fgets(name, 25, stdin);
    // name[strlen(name) - 1] = '\0';
    // printf("Hello %s", name);

    // while(strlen(name) == 0){
    //     printf("\nPlease enter your name!!! ");
    //     fgets(name, 25, stdin);
    //     name[strlen(name) - 1] = '\0';
    // }

    // do while loop: checks a condition, THEN executes a block of code if the condition is true
    // do while loop always executes a block of code once. then checks a condition

    // int number = 0;
    // int sum = 0;
    // do{
    //     printf("Enter a # above 0: ");
    //     scanf("%d", &number);
    //     if(number > 0)
    //     {
    //         sum += number;
    //     }
    // }while(number > 0);
    // printf("\nSum is %d", sum);

    // Nested loop = a loop inside another loop
    // int rows;
    // int cols;
    // char symbol;

    // printf("\nEnter # of rows: ");
    // scanf("%d", &rows);

    // printf("\nEnter # of columns: ");
    // scanf("%d", &cols);

    // printf("\nEnter the symbol to use %c", symbol);
    // scanf("%c", &symbol);

    // for (int i = 1; i <= rows; i++){
    //     for(int j = 1; j <= cols; j++){
    //         printf("%c ", symbol);
    //     }
    //     printf("\n");
    // }

    // continue = skips rest of the code & forces the next iteration of the loop
    // break = exits a loop/switch

    // continue
    // for (int i = 0; i < 20; i++)
    // {
    //     if (i == 17){
    //         continue;
    //     }
    //     printf("%d\n", i);
    // }
    // break out of the loop
    // for (int i = 0; i < 20; i++)
    // {
    //     if (i == 17){
    //         break;
    //     }
    //     printf("%d\n", i);
    // }

    // Array = a data structure that can store many values of the same data type
    // double prices[] = {0.0, 1.0, 2.0, 3.0};
    // for(int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++){
    //     printf("$%.2lf\n", prices[i]);
    // }

    // 2D array = an array, where each element is an entire array
    // useful if you need a matrix, grid or vector, or table of data
    // int number[2][5] = {{0, 1, 2, 3, 4}, { 5, 6, 7, 8, 9}};
    // int rows = sizeof(number) / sizeof(number[0]);
    // int cols = sizeof(number[0]) / sizeof(number[0][0]);
    // for(int i = 0; i < rows; i++){
    //     for(int j = 0; j < cols; j++){
    //         printf("%d ", number[i][j]);
    //     }
    //     printf("\n");
    // }

    // Array of strings
    // char cars[][10] = {"Benz", "Chevelon", "Haudi"};
    // // To add extra item in an array of string, use strcpy
    // strcpy(cars[0], "Tesla");
    // for(char c = 0; c < sizeof(cars) / sizeof(cars[0]); c++){
    //     printf("\n%s", cars[c]);
    // }

    // Swapping variables
    // char x = 'X';
    // char y = 'Y';
    // char temp;
    // temp = x;
    // x = y;
    // printf("%c", x);
    // y = temp;
    // printf("%c", y);

    // sorting array of numbers

    // int nums[] = {1, 4, 9, 6, 2, 5, 3, 8, 7};

    // sorting array of characters
    // char alpha[] = {'G', 'T', 'J', 'K', 'A', 'C', 'B'};
    // int size = sizeof(alpha)/sizeof(alpha[0]);
    // sort(alpha, size);
    // printSort(alpha, size);

    // struct = collections of related members (variables), they can be of different data types
    // listed under one name in a block of memory
    // VERY SIMILAR to classes in other languages but no methods.

    // struct Employees employee1;
    // struct Employees employee2;
    // strcpy(employee1.name, "Ebuka");
    // strcpy(employee1.color, "Dark");
    // employee1.id = 1;
    // employee1.age =22;
    // printf("%s\n", employee1.name);
    // printf("%s\n", employee1.color);
    // printf("%d\n", employee1.id);
    // printf("%d\n", employee1.age);

    // typedef = reserve keyword that gives an existing datatype a 'nickname'

    // typedef char names[25]; // this would change char of 25 bytes to names
    // // so whenever you want to assign character of 25 bytes, you use names instead of char varName[25]
    // names Employees = {"Ebuka"};
    // printf("%s\n", Employees);

    // players employee1;
    // strcpy(employee1.name, "Ebuka");
    // strcpy(employee1.color, "Dark");
    // employee1.id = 1;
    // employee1.age =22;
    // printf("%s\n", employee1.name);
    // printf("%s\n", employee1.color);
    // printf("%d\n", employee1.id);
    // printf("%d\n", employee1.age);

    // Array of structs
    // struct Student student1 = {"Ebuka", 4.0};
    // struct Student student2 = {"Jenny", 3.0};
    // struct Student student3 = {"Chris", 2.0};
    // struct Student student4 = {"Bob", 3.5};
    // // Now to declare array of structs
    // struct Student students[] =
    // {
    //     student1,
    //     student2,
    //     student3,
    //     student4
    // };
    // for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
    // {
    //     printf("%-12s\t", students[i].name);
    //     printf("%.2f\n", students[i].gpa);
    // }
    
    // enum = a user defined type of named integer identifiers
    // helps to make a program more readable
    // enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};
    // enum Day today = Sun;
    // if (today == Sun || today == Sat)
    // {
    //     printf("It's the weekend! Party time!");
    // }else{
    //     printf("Nope, I have to work today!");
    // }
    // printf("\n%d", today);

    // How to generate random numbers?
    // pseudo random number generator = A set of values or elements that are statistically random.
    // (Dont't use these for any sort of cryptographic security)
    // srand(time(0));
    // int num1 = (rand() % 6 )+ 1;
    // printf("Generating random number %d", num1);

    // Guess app
    // const int MIN = 1;
    // const int MAX = 600;
    // int guess;
    // int guesses;
    // int answer;

    // // uses the current time as a seed
    // srand(time(0));
    // // Generate random number between MIN and MAX
    // answer = rand() % MAX + MIN;
    // do
    // {
    //     printf("Guess a number between 1 to 601: ");
    //     scanf("%d", &guess);
    //     if(guess > answer){
    //         printf("Too high!\n");
    //     }
    //     else if (guess < answer)
    //     {
    //         printf("Too low!\n");
    //     }
    //     else{
    //         printf("Good! Correct!\n");
    //         break;
    //     }
    //     guesses++;
    // } while (guess != answer);
    // printf("************************************\n");
    // printf("answer: %d\n", answer);
    // printf("guess: %d\n", guesses);
    // printf("************************************\n");


    // Quiz Question app
    // char questions[][200] = {
    //     "1. What year did the C language debut?: ",
    //     "2. Who is credited for creating C?: ",
    //     "3. What is the predecessor of the C language?: "
    // };

    // char options[][200] = {
    //     "A. 1969", "B. 1972", "C. 1975", "D. 1999",
    //     "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown",
    //     "A. Objective C", "B. B", "C. C++", "D. C#"
    // };

    // char answers[3] = {'B', 'A', 'B'};

    // int numOfQuestions = sizeof(questions) / sizeof(questions[0]);
    // char guess;
    // int score;
    // printf("QUIZ APP\n");
    // for (int i = 0; i < numOfQuestions; i++)
    // {
    //     printf("************************************\n");
    //     printf("%s\n", questions[i]);
    //     printf("************************************\n");
    //     for (int j = (i * 4); j < (i * 4) + 4; j++) {
    //         printf("%s\n", options[j]);
    //     }
    //     printf("Answer question 1 to 3: ");
    //     scanf("%c", &guess);
    //     scanf("%c");
    //     guess = toupper(guess);
    //     if (guess == answers[i])
    //     {
    //         printf("Correct answer!\n");
    //         score++;
    //     }
    //     else{
    //         printf("Wrong answer!\n");
    //     }
    // }
    // printf("\nYou score %d/%d points\n", score, numOfQuestions);
    // printf("************************************\n");

    //  BITWISE OPERATORS = special operators used in bit level programming.
    // knowing binary is important for this topic
    // & = AND
    // | = OR
    // ^ = XOR
    // << left shift
    // >> right shift
    // int x = 6; // 00000110
    // int y = 12; // 00001100
    // int z = 0; // 000000000
    // z = x & y;
    // printf("AND = %d\n", z);
    // z = x | y;
    // printf("OR = %d\n", z);
    // z = x ^ y;
    // printf("XOR = %d\n", z);
    // z = x >> y;
    // printf("Shift right = %d\n", z);
    // z = x << y;
    // printf("Shift left = %d\n", z);

    // memory = an array of bytes within RAM
    // memory block = a single byte within memory, used to hold some value
    // memory address = the address of where a memory block is located
    // char a = 'X';
    // char b = 'Y';
    // char c = 'Z';
    // printf("memory size of a is %ld\n byte", sizeof(a));
    // printf("memory size of b is %ld\n byte", sizeof(b));
    // printf("memory size of c is %ld\n byte", sizeof(c));

    // printf("memory address of a is %p\n", &a);
    // printf("memory address of b is %p\n", &b);
    // printf("memory address of c is %p\n", &c);

    // pointer = a "valiable-like" reference that holds a memory address to another variable, array etc...
    // some tasks are performed more easily with pointers
    // * = indirection operator (value at address)

    // int age = 22;
    // int *pAge = NULL;
    // pAge = &age;
    // printf("Address of age: %p\n", &age);
    // printf("Value of age: %d\n", age);

    // printf("Address of pAge: %p\n", &pAge);
    // printf("Value of pAge: %d\n", *pAge);

    // Write to a file
    // FILE *pf = fopen("learner.html", "w");
    // fprintf(pf, "<html><head><title>Learner</title></head><body style='background-color:#000000;color:#caf;font-size:3rem;'><h1>Learner</h1></body></html>");
    // fclose(pf);

    // Read file
    // FILE *pf = fopen("learner.html", "r");
    // char buffer[1024];
    // if(pf == NULL){
    //     printf("Error, cannot open file 'learner.html'\n");
    // }
    // else{
    //     while (fgets(buffer, 1024, pf) != NULL)
    //     {
    //         printf("%s\n", buffer);
    //     };
    // }
    // fclose(pf);

    // Tik Tak Tok

    char winner = ' ';
    char response;
    do
    {
        char winner = ' ';
        char response = ' ';
        resetBoard();
        while (winner == ' ' && checkFreeSpaces() != 0)
        {
            printBoard();
            playerMove();
            winner = checkWinner();
            if (winner != ' ' || checkWinner() == 0)
            {
                break;
            }
            computerMove();
            winner = checkWinner();
            if (winner != ' ' || checkWinner() == 0)
            {
                break;
            }
        }

        printBoard();
        printWinner(winner);

        printf("\nPlay again! (Y/N): ");
        scanf("%c");
        scanf("%c", &response);
        response = toupper(response);
    } while (response == 'Y');
    printf("Yeaaah! Let's Go again!");

    return 0;
}

// Function prototype: is declaration of function without a body, before main()
// Ensures that calls to a funstion are made with the correct arguments
// void birthday(char name[], int age){
//     printf("\nHappy birthday! %s", name);
//     printf("\nYou are %d years old!", age);
// }

void resetBoard(){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
};
void printBoard(){
    printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
    printf("\n");
};
int checkFreeSpaces(){
    int freeSpaces = 9;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != ' ')
            {
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
};
void playerMove(){
    int x;
    int y;
    do
    {
        printf("Human): Enter row #(1 to 3): ");
        scanf("%d", &x);
        x--;
        printf("Human): Enter column #(1 to 3): ");
        scanf("%d", &y);
        y--;
        if (board[x][y] != ' ')
        {
            printf("Invalid move!\n");
        }
        else{
            board[x][y] = PLAYER;
            break;
        }
    } while (board[x][y] != ' ');
};
void computerMove(){
    // creates a seed based on current time
    srand(time(0));
    int x;
    int y;
    if(checkFreeSpaces() > 0) {
        do
        {
            x = rand() % 3;
            y = rand() % 3;
        } while (board[x][y] != ' ');
        board[x][y] = COMPUTER;
    }
    else{
        printWinner(' ');
    }
};
char checkWinner(){
    // check rows
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2])
        {
            return board[i][0];
        }
    }
    // check columns
    for (int j = 0; j < 3; j++)
    {
        if (board[0][j] == board[1][j] && board[0][j] == board[2][j])
        {
            return board[0][j];
        }
    }
    // check diagonals
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
    {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[0][2] == board[2][0])
    {
        return board[0][2];
    }
    return ' ';
};
void printWinner(char winner){
    if (winner == PLAYER)
    {
        printf("Yon win!\n");
    }
    else if(winner == COMPUTER){
        printf("COMPUTER win!\n");
    }
    else{
        printf("It's a TIE!\n");
    }
};
