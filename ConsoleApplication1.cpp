// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>

void printCats();
void printAppetizersMenu();

int main(void)
{
    
    printf("Welcome to Alex' Restaurant!\n");
    printf("Type in the numbers before the lines to navigate to that specific submenu!");
    printCats();

    int c;
    printf("Enter the number of the category you want to choose: ");
    c = getchar(); //gets a character from stdin, it'll be an ANSI coded char
    int input = c - '0'; //converts c to the real number, ex.: 1 is 49 in ANSI, 0 is 48 in ANSI, so 49 - 48 = 1

    switch (input)
    {
    case 1:
        printAppetizersMenu();
        break;
    case 2:
        printSoupsMenu();
        break;

    default:
        break;
    }




    return 0;
}

void printCats() {
    printf("You can choose from the categories below: \n");
    printf("1. Appetizers\n");
    printf("2. Soups\n");
}

void printAppetizersMenu() {
    printf("Appetizers Menu: ");
}

void printSoupsMenu() {
    printf("Soups Menu: ");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
