// let's take this one and then make the shift come from the argument
// I'll have to use getString now instead

// dont' forget about the atoi function

#include <stdio.h>
 #include <cs50.h>
 #include <string.h>
 
 
 int main(int argc, string argv[])
 {  
 
 // use this in a little bit for the k value to shift the text
 
 /*
 for (int i = 1; i < argc; i++)  // setting this to i = 1 won't print out the command you just typed, use for k value
        {
        }
     */
 
 // Get user input, look at string1.c for an example from lecture 2w
    string input = GetString();
    
    // ensure the user entered something, I'll probably want to use a do-while loop in the final program
    if (input != NULL)
    {
        // print string, one character at a time
        for (int i = 0, len = strlen(input); i < len; i++)  // I should store this as a variable here
        {
            char c = input[i];
            printf("%c:  ", c);   // type back the text via an array
            printf("%d ", (int) c);
    
            // add 5 to the value
            printf("+ 5 = %d", ((int) c) + 5);
            printf(":  %c\n", (c + 5));
            
        }
        printf("\n\n\n");
    }  
    
    // ok good up until this point like before.  Now time to make 5 a variable, such as k.  But this is enough for tonight
    
     // scratch that atoi() is used to take the argument passed in by the user and turn it into an int
            // string k = argv[1];
            // this is where I stopped
            
    
    
    
    
    
    // next let's take the len variable and use that to change each ASCII value by 5
    // first step it to convert each letter into an integer value
    
    /*    for (int j = 0; j < len; j++)
        {
            printf("now let's change the values to their ASCII values\n\n");
            printf("%c:  ", c);
        }    
        */
            
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
                printf("\n");
                
        */
        
  return 0;
  }
  
  
