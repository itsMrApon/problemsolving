#include <stdio.h>

int main()
{
  float amount;
  float taka, rupee, dollar, pound, euro, Swiss_Franc, Yen, Riyal, AUD, CAD;
  int choice, choice2;

  printf("\n                           ");

  printf("***WELCOME TO OUR PROJECT***");

  printf("\n\n\n                         ");

  printf("***Following are the Choices***\n");

  // array of pointers
  char *CurrencyPtr[12] = {
      "                           **************************",
      "                           *   Enter 1: Taka        *",
      "                           *   Enter 2: Ruppe       *",
      "                           *   Enter 3: Dollar      *",
      "                           *   Enter 4: Pound       *",
      "                           *   Enter 5: Euro        *",
      "                           *   Enter 6: Swiss Franc *",
      "                           *   Enter 7: Yen         *",
      "                           *   Enter 8: Riyal       *",
      "                           *   Enter 9: AUD         *",
      "                           *   Enter 10: CAD        *",
      "                           **************************",
  };

  int r, c;

  for (r = 0; r < 12; r++)
  {
    c = 0;
    while (*(CurrencyPtr[r] + c) != '\0')
    {
      printf("%c", *(CurrencyPtr[r] + c));
      c++;
    }
    printf("\n");
  }

  int i, j;

  float arr[] = {0.012, 0.013, 1.30, 1.09, 1.07, 0.008, 0.27, 0.74, 0.80};
  float temp = 0;

  int length = sizeof(arr) / sizeof(arr[0]);

  for (i = 0; i < length; i++)
  {
    for (j = i + 1; j < length; j++)
    {
      if (arr[i] > arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  printf("\n");

  printf("Currency rate According to USD : \n");

  printf("\n                           *******************************           ");
  printf("\n                           *   Yen        = %.3f        *            ", arr[0]);
  printf("\n                           *   Taka       = %.3f        *            ", arr[1]);
  printf("\n                           *   Ruppe      = %.3f        *            ", arr[2]);
  printf("\n                           *   Riyal      = %.3f        *            ", arr[3]);
  printf("\n                           *   AUD        = %.3f        *            ", arr[4]);
  printf("\n                           *   CAD        = %.3f        *            ", arr[5]);
  printf("\n                           *   Swiss Franc= %.3f        *            ", arr[6]);
  printf("\n                           *   Euro       = %.3f        *            ", arr[7]);
  printf("\n                           *   Pound      = %.3f        *            ", arr[8]);
  printf("\n                           *******************************           ");

  printf("\n\n Enter your currency number from the list : ");
  scanf("%d", &choice);

  char s1[] = "Taka";
  char s2[] = "Ruppe";
  char s3[] = "Dollar";
  char s4[] = "Pound";
  char s5[] = "Euro ";
  char s6[] = "Swiss Franc";
  char s7[] = "Yen";
  char s8[] = "Riyal";
  char s9[] = "AUD";
  char s10[] = "CAD";

  printf("\n\n");

  if (choice == 1)
  {

    printf(" your curency =  %s ", s1);
  }
  else if (choice == 2)
  {
    printf(" your curency =  %s ", s2);
  }
  else if (choice == 3)
  {
    printf(" your curency =  %s ", s3);
  }
  else if (choice == 4)
  {
    printf(" your curency =  %s ", s4);
  }
  else if (choice == 5)
  {
    printf(" your curency =  %s ", s5);
  }
  else if (choice == 6)
  {
    printf(" your curency =  %s ", s6);
  }
  else if (choice == 7)
  {
    printf(" your curency =  %s ", s7);
  }
  else if (choice == 8)
  {
    printf(" your curency =  %s ", s8);
  }
  else if (choice == 9)
  {
    printf(" your curency =  %s ", s9);
  }
  else if (choice == 10)
  {
    printf(" your curency =  %s ", s10);
  }

  else
  {
    printf("\n\n\n  Invalid request");
    print();

    return 0;
  }

  /*for taka*/

  if (choice == 1)
  {
    printf("\n\n\n Enter the amount you want to convert: ");
    scanf("%f", &amount);

    printf("\n\n\n Please enter the number from the list of currency you want : ");
    scanf("%d", &choice2);

    if (choice2 == 1)
    {
      printf("\n %.2f taka = %.2f taka  \n ", amount, amount);
    }
    else if (choice2 == 2)
    {
      rupee = amount / 1.13;
      printf("\n %.2f taka =  %.3f rupee \n  ", amount, rupee);
    }
    else if (choice2 == 3)
    {
      dollar = amount / 86.80;
      printf("\n %.2f taka =  %.3f dollar \n", amount, dollar);
    }
    else if (choice2 == 4)
    {
      pound = amount / 113.24;
      printf("\n %.2f taka =  %.3f pound \n", amount, pound);
    }
    else if (choice2 == 5)
    {
      euro = amount / 94.97;
      printf("\n %.2f taka =  %.3f euro \n", amount, euro);
    }
    else if (choice2 == 6)
    {
      Swiss_Franc = amount / 92.50;
      printf("\n %.2f taka =  %.3f Swiss Franc \n", amount, Swiss_Franc);
    }

    else if (choice2 == 7)
    {
      Yen = amount / 0.70;
      printf("\n %.2f taka =  %.3f Yen \n", amount, Yen);
    }

    else if (choice2 == 8)
    {
      Riyal = amount / 23.07;
      printf("\n %.2f taka =  %.3f Riyal \n", amount, Riyal);
    }
    else if (choice2 == 9)
    {
      AUD = amount / 65.02;
      printf("\n %.2f taka =  %.3f AUD \n", amount, AUD);
    }
    else if (choice2 == 10)
    {
      CAD = amount / 69.33;
      printf("\n %.2f taka =  %.3f CAD \n", amount, CAD);
    }

    else
    {
      printf(" Invalid request");
    }
  }

  /*for Rupee*/

  else if (choice == 2)
  {
    printf("\n\n\n Enter the amount you want to convert: ");
    scanf("%f", &amount);

    printf("\n\n\n Please enter the number from the list of currency you want : ");
    scanf("%d", &choice2);

    if (choice2 == 1)
    {
      taka = amount * 1.13;
      printf("\n %.2f Rupee =  %.3f taka   \n", amount, taka);
    }
    else if (choice2 == 2)
    {

      printf("\n %.2f rupee =  %.2f rupee \n  ", amount, amount);
    }
    else if (choice2 == 3)
    {
      dollar = amount / 76.55;
      printf("\n %.2f Rupee =  %.3f dollar \n", amount, dollar);
    }
    else if (choice2 == 4)
    {
      pound = amount / 99.86;
      printf("\n %.2f Rupee =  %.3f pound  \n", amount, pound);
    }
    else if (choice2 == 5)
    {
      euro = amount / 83.86;
      printf("\n %.2f Rupee =  %.3f euro   \n", amount, euro);
    }
    else if (choice2 == 6)
    {
      Swiss_Franc = amount / 81.46;
      printf("\n %.2f Rupee =  %.3f Swiss Franc \n", amount, Swiss_Franc);
    }

    else if (choice2 == 7)
    {
      Yen = amount / 0.61;
      printf("\n %.2f Rupee =  %.3f Yen \n", amount, Yen);
    }
    else if (choice2 == 8)
    {
      Riyal = amount / 20.30;
      printf("\n %.2f Rupee =  %.3f Riyal \n", amount, Riyal);
    }
    else if (choice2 == 9)
    {
      AUD = amount / 57.22;
      printf("\n %.2f Rupee =  %.3f AUD \n", amount, AUD);
    }
    else if (choice2 == 10)
    {
      CAD = amount / 61.02;
      printf("\n %.2f Rupee =  %.3f CAD \n", amount, CAD);
    }
    else
    {
      printf(" Invalid request");
    }
  }

  /*for Dollar*/

  else if (choice == 3)
  {
    printf("\n\n\n Enter the amount you want to convert: ");
    scanf("%f", &amount);

    printf("\n\n\n Please enter the number from the list of currency you want : ");
    scanf("%d", &choice2);

    if (choice2 == 1)
    {
      taka = amount * 86.80;
      printf("\n %.2f Dollar =  %.3f taka   ", amount, taka);
    }
    else if (choice2 == 2)
    {
      rupee = amount * 76.55;
      printf("\n %.2f Dollar =  %.3f rupee  ", amount, rupee);
    }
    else if (choice2 == 3)
    {
      printf("\n %.2f Dollar =  %.2f Dollar \n  ", amount, amount);
    }
    else if (choice2 == 4)
    {
      pound = amount * 0.77;
      printf("\n %.2f Dollar =  %.3f pound   \n", amount, pound);
    }
    else if (choice2 == 5)
    {
      euro = amount * 0.91;
      printf("\n %.2f Dollar =  %.3f euro    \n", amount, euro);
    }

    else if (choice2 == 6)
    {
      Swiss_Franc = amount / 1.07;
      printf("\n %.2f Dollar =  %.3f Swiss Franc \n", amount, Swiss_Franc);
    }

    else if (choice2 == 7)
    {
      Yen = amount * 123.88;
      printf("\n %.2f Dollar =  %.3f Yen \n", amount, Yen);
    }

    else if (choice2 == 8)
    {
      Riyal = amount * 3.75;
      printf("\n %.2f Dollar =  %.3f Riyal \n", amount, Riyal);
    }
    else if (choice2 == 9)
    {
      AUD = amount * 1.33;
      printf("\n %.2f Dollar =  %.3f AUD \n", amount, AUD);
    }
    else if (choice2 == 10)
    {
      CAD = amount * 1.25;
      printf("\n %.2f Dollar =  %.3f CAD \n", amount, CAD);
    }

    else
    {
      printf(" Invalid request");
    }
  }
  /*for pound*/

  else if (choice == 4)
  {
    printf("\n\n\nEnter the amount you want to convert: ");
    scanf("%f", &amount);

    printf("\n\n\n Please enter the number from the list of currency you want : ");
    scanf("%d", &choice2);

    if (choice2 == 1)
    {
      taka = amount * 113.24;
      printf("\n %.2f Pound =  %.3f taka   \n", amount, taka);
    }
    else if (choice2 == 2)
    {
      rupee = amount * 99.87;
      printf("\n %.2f Pound =  %.3f rupee   \n", amount, rupee);
    }
    else if (choice2 == 3)
    {
      dollar = amount * 1.30;
      printf("\n %.2f Pound =  %.3f dollar   \n", amount, dollar);
    }
    else if (choice2 == 4)
    {

      printf("\n %.2f pound =  %.2f pound   \n", amount, amount);
    }
    else if (choice2 == 5)
    {
      euro = amount * 1.19;
      printf("\n %.2f Pound =  %.3f euro    \n", amount, euro);
    }

    else if (choice2 == 6)
    {
      Swiss_Franc = amount * 1.22;
      printf("\n %.2f Pound =  %.3f Swiss Franc \n", amount, Swiss_Franc);
    }

    else if (choice2 == 7)
    {
      Yen = amount * 161.42;
      printf("\n %.2f Pound =  %.3f Yen \n", amount, Yen);
    }

    else if (choice2 == 8)
    {
      Riyal = amount * 4.91;
      printf("\n %.2f Pound =  %.3f Riyal \n", amount, Riyal);
    }
    else if (choice2 == 9)
    {
      AUD = amount * 1.75;
      printf("\n %.2f Pound =  %.3f AUD \n", amount, AUD);
    }
    else if (choice2 == 10)
    {
      CAD = amount * 1.64;
      printf("\n %.2f Pound =  %.3f CAD \n", amount, CAD);
    }

    else
    {
      printf(" Invalid request");
    }
  }

  /*for Euro*/

  else if (choice == 5)
  {
    printf("\n\n\n Enter the amount you want to convert: ");
    scanf("%f", &amount);

    printf("\n\n\n Please enter the number from the list of currency you want : ");
    scanf("%d", &choice2);

    if (choice2 == 1)
    {
      taka = amount * 94.97;
      printf("\n %.2f Euro =  %.3f taka    \n", amount, taka);
    }
    else if (choice2 == 2)
    {
      rupee = amount * 83.85;
      printf("\n %.2f Euro =  %.3f rupee   \n", amount, rupee);
    }
    else if (choice2 == 3)
    {
      dollar = amount * 1.10;
      printf("\n %.2f Euro =  %.3f dollar   \n", amount, dollar);
    }
    else if (choice2 == 4)
    {
      pound = amount * 0.84;
      printf("\n %.2f Euro =  %.3f pound    \n", amount, pound);
    }
    else if (choice2 == 5)
    {

      printf("\n %.2f euro =  %.3f euro    \n  ", amount, amount);
    }

    else if (choice2 == 6)
    {
      Swiss_Franc = amount * 1.03;
      printf("\n %.2f Euro =  %.3f Swiss Franc \n", amount, Swiss_Franc);
    }

    else if (choice2 == 7)
    {
      Yen = amount * 135.36;
      printf("\n %.2f Euro =  %.3f Yen \n", amount, Yen);
    }

    else if (choice2 == 8)
    {
      Riyal = amount * 4.12;
      printf("\n %.2f Euro =  %.3f Riyal \n", amount, Riyal);
    }
    else if (choice2 == 9)
    {
      AUD = amount * 1.47;
      printf("\n %.2f Euro =  %.3f AUD \n", amount, AUD);
    }
    else if (choice2 == 10)
    {
      CAD = amount * 1.38;
      printf("\n %.2f Euro =  %.3f CAD \n", amount, CAD);
    }
    else
    {
      printf(" Invalid request");
    }
  }

  /* For swiss france*/

  else if (choice == 6)
  {
    printf("\n\n\n Enter the amount you want to convert: ");
    scanf("%f", &amount);

    printf("\n\n\n Please enter the number from the list of currency you want : ");
    scanf("%d", &choice2);

    if (choice2 == 1)
    {
      taka = amount * 92.28;
      printf("\n %.2f Swiss France =  %.3f taka    \n", amount, taka);
    }
    else if (choice2 == 2)
    {
      rupee = amount * 81.47;
      printf("\n %.2f Swiss France =  %.3f rupee   \n", amount, rupee);
    }
    else if (choice2 == 3)
    {
      dollar = amount * 1.07;
      printf("\n %.2f Swiss France =  %.3f dollar   \n", amount, dollar);
    }
    else if (choice2 == 4)
    {
      pound = amount * 0.82;
      printf("\n %.2f Swiss France =  %.3f pound    \n", amount, pound);
    }
    else if (choice2 == 5)
    {
      euro = amount * 0.97;
      printf("\n %.2f Swiss France =  %.3f euro    \n  ", amount, euro);
    }

    else if (choice2 == 6)
    {

      printf("\n %.2f Swiss France =  %.2f Swiss Franc \n", amount, amount);
    }

    else if (choice2 == 7)
    {
      Yen = amount * 131.94;
      printf("\n %.2f Swiss France =  %.3f Yen \n", amount, Yen);
    }

    else if (choice2 == 8)
    {
      Riyal = amount * 4.02;
      printf("\n %.2f Swiss France =  %.3f Riyal \n", amount, Riyal);
    }
    else if (choice2 == 9)
    {
      AUD = amount * 1.43;
      printf("\n %.2f Swiss France =  %.3f AUD \n", amount, AUD);
    }
    else if (choice2 == 10)
    {
      CAD = amount * 1.34;
      printf("\n %.2f Swiss France =  %.3f CAD \n", amount, CAD);
    }
    else
    {
      printf(" Invalid request");
    }
  }

  /*    for yen  */

  else if (choice == 7)
  {
    printf("\n\n\n Enter the amount you want to convert: ");
    scanf("%f", &amount);

    printf("\n\n\n Please enter the number from the list of currency you want : ");
    scanf("%d", &choice2);

    if (choice2 == 1)
    {
      taka = amount * 0.70;
      printf("\n %.2f Yen =  %.3f taka    \n", amount, taka);
    }
    else if (choice2 == 2)
    {
      rupee = amount * 0.62;
      printf("\n %.2f Yen =  %.3f rupee   \n", amount, rupee);
    }
    else if (choice2 == 3)
    {
      dollar = amount * 0.0081;
      printf("\n %.2f Yen =  %.3f dollar   \n", amount, dollar);
    }
    else if (choice2 == 4)
    {
      pound = amount * 0.0062;
      printf("\n %.2f Yen =  %.3f pound    \n", amount, pound);
    }
    else if (choice2 == 5)
    {
      euro = amount * 0.0074;
      printf("\n %.2f Yen =  %.3f euro    \n  ", amount, euro);
    }

    else if (choice2 == 6)
    {
      Swiss_Franc = amount * 0.0075;
      printf("\n %.2f Yen =  %.2f Swiss Franc \n", amount, Swiss_Franc);
    }

    else if (choice2 == 7)
    {

      printf("\n %.2f Yen =  %.3f Yen \n", amount, amount);
    }

    else if (choice2 == 8)
    {
      Riyal = amount * 0.030;
      printf("\n %.2f Yen =  %.3f Riyal \n", amount, Riyal);
    }
    else if (choice2 == 9)
    {
      AUD = amount * 0.011;
      printf("\n %.2f Yen =  %.3f AUD \n", amount, AUD);
    }
    else if (choice2 == 10)
    {
      CAD = amount * 0.010;
      printf("\n %.2f Yen =  %.3f CAD \n", amount, CAD);
    }
    else
    {
      printf(" Invalid request");
    }
  }

  /* for real */

  else if (choice == 8)
  {
    printf("\n\n\n Enter the amount you want to convert: ");
    scanf("%f", &amount);

    printf("\n\n\n Please enter the number from the list of currency you want : ");
    scanf("%d", &choice2);

    if (choice2 == 1)
    {
      taka = amount * 22.93;
      printf("\n %.2f Riyal =  %.3f taka    \n", amount, taka);
    }
    else if (choice2 == 2)
    {
      rupee = amount * 20.29;
      printf("\n %.2f Riyal =  %.3f rupee   \n", amount, rupee);
    }
    else if (choice2 == 3)
    {
      dollar = amount * 0.27;
      printf("\n %.2f Riyal =  %.3f dollar   \n", amount, dollar);
    }
    else if (choice2 == 4)
    {
      pound = amount * 0.20;
      printf("\n %.2f Riyal =  %.3f pound    \n", amount, pound);
    }
    else if (choice2 == 5)
    {
      euro = amount * 0.24;
      printf("\n %.2f Riyal =  %.3f euro    \n  ", amount, euro);
    }

    else if (choice2 == 6)
    {
      Swiss_Franc = amount * 0.24;
      printf("\n %.2f Riyal =  %.2f Swiss Franc \n", amount, Swiss_Franc);
    }

    else if (choice2 == 7)
    {
      Yen = amount * 33.01;
      printf("\n %.2f Riyal =  %.3f Yen \n", amount, Yen);
    }

    else if (choice2 == 8)
    {

      printf("\n %.2f Riyal=  %.3f Riyal \n", amount, amount);
    }
    else if (choice2 == 9)
    {
      AUD = amount * 0.35;
      printf("\n %.2f Riyal =  %.3f AUD \n", amount, AUD);
    }
    else if (choice2 == 10)
    {
      CAD = amount * 0.33;
      printf("\n %.2f Riyal =  %.3f CAD \n", amount, CAD);
    }
    else
    {
      printf(" Invalid request");
    }
  }

  /*    for AUD    */

  else if (choice == 9)
  {
    printf("\n\n\n Enter the amount you want to convert: ");
    scanf("%f", &amount);

    printf("\n\n\n Please enter the number from the list of currency you want : ");
    scanf("%d", &choice2);

    if (choice2 == 1)
    {
      taka = amount * 64.58;
      printf("\n %.2f AUD =  %.3f taka    \n", amount, taka);
    }
    else if (choice2 == 2)
    {
      rupee = amount * 56.95;
      printf("\n %.2f AUD =  %.3f rupee   \n", amount, rupee);
    }
    else if (choice2 == 3)
    {
      dollar = amount * 0.74;
      printf("\n %.2f AUD =  %.3f dollar   \n", amount, dollar);
    }
    else if (choice2 == 4)
    {
      pound = amount * 0.57;
      printf("\n %.2f AUD =  %.3f pound    \n", amount, pound);
    }
    else if (choice2 == 5)
    {
      euro = amount * 0.68;
      printf("\n %.2f AUD =  %.3f euro    \n  ", amount, euro);
    }

    else if (choice2 == 6)
    {
      Swiss_Franc = amount * 0.70;
      printf("\n %.2f AUD =  %.2f Swiss Franc \n", amount, Swiss_Franc);
    }

    else if (choice2 == 7)
    {
      Yen = amount * 92.68;
      printf("\n %.2f AUD =  %.3f Yen \n", amount, Yen);
    }

    else if (choice2 == 8)
    {
      Riyal = amount * 2.81;
      printf("\n %.2f AUD =  %.3f Riyal \n", amount, Riyal);
    }
    else if (choice2 == 9)
    {

      printf("\n %.2f AUD =  %.3f AUD \n", amount, amount);
    }
    else if (choice2 == 10)
    {
      CAD = amount * 1.06;
      printf("\n %.2f AUD =  %.3f CAD \n", amount, CAD);
    }
    else
    {
      printf(" Invalid request");
    }
  }

  /*    for CAD    */

  else if (choice == 10)
  {
    printf("\n\n\n Enter the amount you want to convert: ");
    scanf("%f", &amount);

    printf("\n\n\n Please enter the number from the list of currency you want : ");
    scanf("%d", &choice2);

    if (choice2 == 1)
    {
      taka = amount * 68.85;
      printf("\n %.2f CAD =  %.3f taka    \n", amount, taka);
    }
    else if (choice2 == 2)
    {
      rupee = amount * 60.68;
      printf("\n %.2f CAD =  %.3f rupee   \n", amount, rupee);
    }
    else if (choice2 == 3)
    {
      dollar = amount * 0.79;
      printf("\n %.2f CAD =  %.3f dollar   \n", amount, dollar);
    }
    else if (choice2 == 4)
    {
      pound = amount * 0.61;
      printf("\n %.2f AUD =  %.3f pound    \n", amount, pound);
    }
    else if (choice2 == 5)
    {
      euro = amount * 0.72;
      printf("\n %.2f CAD =  %.3f euro    \n  ", amount, euro);
    }

    else if (choice2 == 6)
    {
      Swiss_Franc = amount * 0.75;
      printf("\n %.2f CAD =  %.2f Swiss Franc \n", amount, Swiss_Franc);
    }

    else if (choice2 == 7)
    {
      Yen = amount * 98.81;
      printf("\n %.2f CAD =  %.3f Yen \n", amount, Yen);
    }

    else if (choice2 == 8)
    {
      Riyal = amount * 2.99;
      printf("\n %.2f CAD =  %.3f Riyal \n", amount, Riyal);
    }
    else if (choice2 == 9)
    {
      AUD = amount * 1.07;
      printf("\n %.2f CAD =  %.3f AUD \n", amount, AUD);
    }
    else if (choice2 == 10)
    {

      printf("\n %.2f CAD =  %.3f CAD \n", amount, amount);
    }
    else
    {
      printf(" Invalid request");
    }
  }

  else
  {
    printf(" Invalid request\n\n\n\n");
  }

  printf("\n\n\n");

  sort();

  print();

  return 0;
}

struct currency
{
  char crr_name[20];
  char rate[20];

} arr[10], temp;

void sort()
{
  int i, j, n;

  printf("\n\n\n");
  printf("\n                              *****************************                         ");
  printf("\n                              *       Sort Currency        *                         ");
  printf("\n                              *****************************                  \n\n\n");

  printf("  Enter the number of currency you want to sort :");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    printf("\nEnter Currency Name : ");
    scanf("%s", arr[i].crr_name);
    printf("\nEnter Currency Rate : ");
    scanf("%s", arr[i].rate);
    printf("\n");
  }

  for (i = 1; i < n; i++)
    for (j = 0; j < n - i; j++)
    {
      if (strcmp(arr[j].rate, arr[j + 1].rate) > 0)
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }

  for (i = 0; i < n; i++)
  {
    printf("%s\n", arr[i].crr_name);
  }
  getch();
}

void print()
{

  printf("\n\n\n");
  printf("\n                              **************************                         ");
  printf("\n                              *       THANK YOU        *                         ");
  printf("\n                              **************************                    \n\n\n\n\n");
}
