// just some test cose 

#include <stdio.h>
 #include <cs50.h>
 #include <string.h>
 
 int main(void)
 {
 
    // Get user input, look at string1.c for an example from lecture 2w
    string input = GetString();
    
    // ensure the user entered something, I'll probably want to use a do-while loop in the final program
    if (input != NULL)
    {
        // print string, one character at a time
        for (int i = 0; i < strlen(input); i++)
        {
            char c = input[i];
            printf("%c", c);   // type back the text via an array
        }
        printf("\n");
    }  
 
 /*
 for (int j = 0, n = strlen(argv[i]); j < n; j++)  // how long is foo bar and run the loop that many times
                {
                printf("%c:  ", argv[i][j]);  // if you do this  printf("%c\n", argv[i][j]);  then each letter is on a separate line
                // prints out the ASCII value
                printf("%d\n", (int) argv[i][j]);
                // add 
                printf("%d = ", ((int) argv[i][j])+ 5);  // so this is working, I'll just have to substitute 5 with a variable
                // now take that value and convert it back into a character
                printf("%c\n", (argv[i][j])+ 5);  // sweet, this is what I want
                printf("\n");
                
              }
 
 
 */
 
 
 
 
 
    return 0;
}
 
