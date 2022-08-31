/* main.c
 * =============================================================
 *    Name:  
 * Section:  CS210 - ALL SECTIONS
 * Purpose:  Demonstrate how to Write/Run Unit Tests
 * =============================================================
 */

#include <stdio.h>
#include "test.h"
#include "cadet.h"


void yourProgram() {
    int year = 0;

    // Gets a Class from the User
    printf("Give me a year: ");
    scanf("%d", &year);

    // Determines What getCadetClass Will Return
    printf("getCadetClass(%d) returned %d\n", year, getCadetClass(year));
}


int main() {

    // This runs your actual program
    yourProgram();

    // This runs the unit tests
    //runAllTests();

    return 0;
}