// this time I'm going to get the argument from the command line

#include <stdio.h>
 #include <cs50.h>
 #include <string.h>
 #include <stdlib.h>  // required for the atoi()
 
 
 int main(int argc, string argv[])
{ 

    // lowercase alphabet
    string lower[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    // string upper[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
 
 // Get user input, look at string1.c for an example from lecture 2w
    printf("Please enter a phrase:  ");
    string input = GetString();
    
    // ensure the user entered something, I'll probably want to use a do-while loop in the final program
    if (input != NULL)
    {
        // print string, one character at a time
        for (int i = 0, len = strlen(input); i < len; i++)  // I should store this as a variable here
        {
            char p = input[i];
            printf("%c:  ", p);   // type back the text via an array
            // printf("%d ", (int) p);
            
            //  this tells us what place in the alphabet the letter is, int (p) - 97, array is indexed at one
            int fred = (int) p - 97;
            printf("%c is the %d number in the alphabet", p, fred);
    
            // take the caesar key that is inputted, store it in a variable and convert to int
            int k = atoi(argv[1]);   // converts to an int
            
            // new try using the lower[] to figure out what number in the alphabet the character is
            int c = (fred + k) % 26;
            printf("the value of c is:  %d\n\n", c);
            
            // print out the letter in the array
            printf("The value of %c is now %s\n", p, lower[c]);
 
        }
        printf("\n\n\n");

    }  

  return 0;
}
