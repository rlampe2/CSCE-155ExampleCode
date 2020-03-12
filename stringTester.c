/**
  * Author: Ryan Lampe
  * 3/9/2020
  *
  * This file is an example and template tester for CSCE-155E
  *
  * This file can be modified and turned in (it is only part of the required testing)
  *
  *
  * HERE IS HOW YOU CAN COMPILE AFTER YOU'VE WRITTEN YOUR FUNCTIONS:
  * gcc -o stringProgramName stringTester.c string_utils.c
  * (Then to run, you would type ./stringProgramName)
  */
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"string_utils.h"

int main(void) {
  char testString[] = {"Alphabet Soup"};
  char testString2[] = {"Who? Did you say Robyn??? With a Y?"};
  char testString3[] = {"Dr. Bourke is my hero!"};
  int i;

  //Testing replaceChar function
  printf("TESTING REPLACE_CHAR FUNCTION\n");
  printf("Original String: %s\n",testString);
  printf("Replacing S with P\n");
  replaceChar(testString, 'S', 'P');
  printf("Updated String:  %s\n",testString);
  //Run the program and perfom a visual check of output to verify it is correct!

  //TODO: Add more test cases for this function!







  //End of testing Replace char function
  printf("------------------\n\n");


  //Testing replaceCharCopy function:
  printf("TESTING REPLACE_CHAR_COPY FUNCTION\n");
  printf("Original String:\n%s\n",testString2);
  char *newString2 = replaceCharCopy(testString2, '?', 'x');
  //Verify that the original wasn't changed
  printf("Verify the original string is unchanged after the function call: \n%s\n", testString2);
  printf("UpdatedString:\n%s\n", newString2);

  //TODO: Add more test cases for this function!



  //end of testing replaceCharCopy
  printf("-----------------\n\n");






  //TODO Testing removeChar function:

  //TODO Testing removeCharCopy function:



  //Testing lengthSplit Function
  printf("TESTING LENGTH_SLPIT FUNCTION\n");
  printf("Original String: %s\n", testString);
  char **newStringMatrix = lengthSplit(testString, 3);
  printf("New Array of Strings:\n");
  for(i = 0; i <= strlen(testString) / 3; i++){
    printf("Array number: %d: %s\n", i, newStringMatrix[i]);
  }

  printf("\nOriginal String: %s\n", testString3);
  char **newStringMatrix2 = lengthSplit(testString3, 1);
  printf("New Array of Strings:\n");
  for(i = 0; i < strlen(testString3) / 1; i++){
    printf("Array number: %2d: %s\n", i, newStringMatrix2[i]);
  }

  //TODO: Finish testing




  return 0;
}
