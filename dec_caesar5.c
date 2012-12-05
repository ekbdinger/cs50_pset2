// this time I'm going to get the argument from the command line

#include <stdio.h>
 #include <cs50.h>
 #include <string.h>
 #include <stdlib.h>  // required for the atoi()
 
 
 int main(int argc, string argv[])
{  
 
 // use this in a little bit for the k value to shift the text
 
 /*
 for (int i = 1; i < argc; i++)  // setting this to i = 1 won't print out the command you just typed, use for k value
        {
        }
     */
 
 // Get user input, look at string1.c for an example from lecture 2w
    printf("Please enter a phrase:  ");
    string input = GetString();
    
    // ensure the user entered something, I'll probably want to use a do-while loop in the final program
    if (input != NULL)
    {
        // print string, one character at a time
        for (int i = 0, len = strlen(input); i < len; i++)  // I should store this as a variable here
        {
            char text = input[i];
            printf("%c:  ", text);   // type back the text via an array
            printf("%d ", (int) text);
    
            // take the caesar key that is inputted, store it in a variable and convert to int
            int k = atoi(argv[1]);   // converts 
            printf("+ k = %d", ((int) text) + k);   // might want to turn this into a variable  (c + k)
            printf(":  %c\n", (text + k));
   
        }
        printf("\n\n\n");

    }  

  return 0;
}
