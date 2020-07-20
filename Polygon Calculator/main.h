#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void opt(const unsigned short opt)
{
  /* Variables for formulas, input, etc.*/
  unsigned long n_sides = 0; /* Number of sides our polygon has */
  unsigned long interior_measurement; /* Total measurement for interior angles of a polygon */
  unsigned long input = 0; /* For input */
  unsigned long cformula = 0; /* Convex formula */
  unsigned long rformula = 0; /* Regular formula */
  unsigned long result = 0;

  switch (opt)
  {
    case 1:
      printf("How many sides does the polygon have? ");
      scanf("%lu", &n_sides);

      if (n_sides == 1 || n_sides == 2)
      {
        printf("A polygon must have at least 3 sides. Your shape is not a polygon.\n");
        break;
      }

      for (int i = 0; i < n_sides - 1; i++) {
        printf("Angle measurement %d: ", i+1);
        scanf("%lu", &input);

        result += input;
      }

      printf("The missing exterior angle is %lu degrees\n", 360-result);
      break;

    case 2:
      printf("How many sides does your polygon have? ");
      scanf("%lu", &n_sides);

      cformula = (n_sides-2) * 180;
      printf("The internal angles of your polygon add up to %lu degrees\n", cformula);
      break;

    case 3:
      printf("How many sides does your polygon have? ");
      scanf("%lu", &n_sides);

      rformula = (n_sides-2) * 180 / n_sides;
      printf("The internal angles of your polygon add up to %lu degrees\n", rformula);
      break;

    case 4:
      printf("What is the total of all the interior angles? ");
      scanf("%lu", &interior_measurement);

      n_sides = (interior_measurement / 180) + 2;
      printf("The number of sides your polygon has is %lu\n", n_sides);
      break;

    default:
      printf("Invalid option.\n");
      break;
  }
}

#endif // end main.h
