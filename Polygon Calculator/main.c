#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
  printf("==============================\n");
  printf("Polygon Sides Calculator\n");
  printf("==============================\n");

  /* Options */
  printf("Would you:\n\n");
  printf("(1) Find an exterior angle of a polygon, or\n");
  printf("(2) Calculate the interior sides of a convex polygon, or\n");
  printf("(3) Calculate the interior sides of a regular polygon, or\n");
  printf("(4) Find how many sides a convex polygon has.\n");
  printf("To quit, type \'q\'.\n\n");

  char input[100]; /* Input buffer */
  unsigned short conv_input; /* Converted input */

  /* Prompt */
  printf("Enter your choice: ");
  scanf("%c", &input[0]);

  if (input[0] == 'q')
  {
    exit(EXIT_SUCCESS);
  }

  conv_input = atoi(input);
  opt(conv_input);

  /* Loop back to main */
  main();

  return 0;
}
