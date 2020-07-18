

//Example of isdigit() function and how it works....
//** Remember 0 is C is FALSE; any other number is TRUE
//To check if something entered is a number, variable should be declared as char
// and then input into isdigit()

//NOTE: IF YOU NEED TO RETURN AN INTEGER FROM A CALLED FUNCTION LIKE IN
// LISTING 13_7 USING THE SWITCH STATEMENT TO IMPLEMENT A MENU SYSTEM,
// YOU NEED TO CONVERT THE CHAR SCANNED IN FROM THE SCANF() FUNCTION
// INTO AN INTEGER... THE FOLLOWING CODE OBTAINED FROM GOOGLING SEEMS TO WORK:
//To convert a character to an integer

//..from webpage - http://stackoverflow.com/questions/628761/character-to-integer-in-c
//char c = '5';
//int x = c - '0';
//int reply = reply2 - '0';   //<-- not sure why this works here
//return reply;               //<-- now returning an integer


//this example is taken from... answer #4
//cs50.harvard.edu/resources/cppreference.com/stdstring/isdigit.html
#include <stdio.h>
#include <ctype.h> // for isdigit()
#include <stdlib.h>

int main (void)
{
    FILE *fp;
    fp = fopen("kamfile8.txt","w");
    if(fp!=NULL)
    {
        fputs("\n\n",fp);
        fputs("fopen OK\n\n",fp);
    }
    else
    {
        fprintf(stderr,"Error opening file %s",fp);
        exit(1);
    }

    //EXAMPLE FROM WEBPAGE ABOVE
    //char c;
    ///scanf( "%c", &c );
    //if( isdigit(c) )
    //    printf( "You entered the digit %c\n", c );

    char inputdata = ' ';

    puts("\nEnter a number or letter:\n");
    fprintf(fp,"\nEnter a number or letter:\n");
    scanf("%c", &inputdata);

    if (isdigit(inputdata))
    {
        printf("Input is the number %c...\n",inputdata);
        fprintf(fp,"Input is the number %c...\n",inputdata);
    }
        else
        {
        printf("Input is the letter %c...\n",inputdata);
        fprintf(fp,"Input is the letter %c...\n",inputdata);
        }

    //convert char answer into integer...
    //char c = '5';
    //int x = c - '0';
    //inputdata = 'a';

    puts("\n*** DEMO SHOWING DIFFERENCE BETWEEN CHARACTER AND NUMERIC DATA ***");
    puts("\n------------------------------------------------------------------");
    fprintf(fp,"\n*** DEMO SHOWING DIFFERENCE BETWEEN CHARACTER AND NUMERIC DATA ***");
    fprintf(fp,"\n------------------------------------------------------------------");

    puts("\n***Example 1***");
    printf("\nIf inputdata is defined as 'char inputdata' and is = %c .... ",inputdata);
    printf("\nOutput of data is ** %c ** with c conversion modifier",inputdata);
    printf("\nOutput of data is ** %d ** with d conversion modifier",inputdata);
    puts(" <--- converts to equivalent ASCII decimal number...");
    fprintf(fp,"\n***Example 1***");
    fprintf(fp,"\nIf inputdata is defined as 'char inputdata' and is = %c .... ",inputdata);
    fprintf(fp,"\nOutput of data is ** %c ** with c conversion modifier",inputdata);
    fprintf(fp,"\nOutput of data is ** %d ** with d conversion modifier",inputdata);
    fprintf(fp," <--- converts to equivalent ASCII decimal number...");

    int x = inputdata - '0';
    puts("\n\n***Example 2***");
    printf("\nIf inputdata is defined as 'char inputdata' and is = %c .... ",inputdata);
    printf("\nand is now converted to 'int x' by using 'int x = inputdata - '0'' ....");
    puts("\nThen the input 'character' is converted to an ACTUAL number - NOT ASCII equivalent...");
    printf("\nOutput of data is ** %c ** with c conversion modifier",x);
    printf("\nOutput of data is ** %d ** with d conversion modifier",x);
    printf("\nThe input character (char inputdata;) %c is converted to a number (int x;) and is now number: %d", inputdata,x);
    fprintf(fp,"\n\n***Example 2***");
    fprintf(fp,"\nIf inputdata is defined as 'char inputdata' and is = %c .... ",inputdata);
    fprintf(fp,"\nand is now converted to 'int x' by using 'int x = inputdata - '0'' ....");
    fprintf(fp,"\nThen the input 'character' is converted to an ACTUAL number - NOT ASCII equivalent...");
    fprintf(fp,"\nOutput of data is ** %c ** with c conversion modifier",x);
    fprintf(fp,"\nOutput of data is ** %d ** with d conversion modifier",x);
    fprintf(fp,"\nThe input character (char inputdata;) %c is converted to a number (int x;) and is now number: %d", inputdata,x);

    puts("\n\n***Example 3***");
    puts("\nCheck with just running instruction 'int var1 = isdigit(inputdata)' to see what happens...");
    puts("\tthen print the line out...");
    int var1 = isdigit(inputdata);
    printf("\nvar1 = %d\n", var1);
    puts("\nAs you can see, this does NOT work!!! isdigit() function returns a 1 if is a digit, and 0 if not");
    puts("\n\n");
    fprintf(fp,"\n\n***Example 3***");
    fprintf(fp,"\nCheck with just running instruction 'int var1 = isdigit(inputdata)' to see what happens...");
    fprintf(fp,"\tthen print the line out...");
    fprintf(fp,"\nvar1 = %d\n", var1);
    fprintf(fp,"\nAs you can see, this does NOT work!!! isdigit() function returns a 1 if is a digit, and 0 if not");
    fprintf(fp,"\n\n");


    return 0;

}
/*
//THIS IS ANOTHER EXAMPLE OF isdigit() function...
// www.tutorialspoint.com/c_standard_library/c_function_isdigit.htm
//This example does NOT use scanf()
//
#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 'h';
   int var2 = '2';

   if( isdigit(var1) )
   {
      printf("var1 = |%c| is a digit\n", var1 );
      fprintf(fp,"var1 = |%c| is a digit\n", var1 );
   }
   else
   {
      printf("var1 = |%c| is not a digit\n", var1 );
      fprintf(fp,"var1 = |%c| is not a digit\n", var1 );
   }

   if( isdigit(var2) )
   {
      printf("var2 = |%c| is a digit\n", var2 );
      fprintf(fp,"var2 = |%c| is a digit\n", var2 );
   }
   else
   {
      printf("var2 = |%c| is not a digit\n", var2 );
      fprintf(fp,"var2 = |%c| is not a digit\n", var2 );
   }

   return(0);

    //output for this program should be.....
    //var1 = |h| is not a digit
    //var2 = |2| is a digit



}
*/