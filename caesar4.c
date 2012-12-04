/****************************************************************************
 * First try at the problem set
 *
 * 
 *
 * Demonstrates argv as a two-dimensional array.
 ***************************************************************************/
 
 #include <stdio.h>
 #include <cs50.h>
 #include <string.h>
 
 // this is a good tutorial here:  http://www.cplusplus.com/doc/tutorial/ntcs/
 
 // instructions share this:  to access k with code use
 // string k = argv[1];
 
 // argc is an int that equals the number of strings that are in argv
 // argc will at least be 1 the program you are running.  So in this program it will be 2
 
 // if the user provides an input greater than two, than generate an error message. Perhaps a do-while loop?
 
 // even though the user types an integer at the prompt, it's store as a string.  Need to convert to int
 
 // int k = atoi(argv[1]);    take a look at the atoi function
 
 // then ask the user for a string.  
 
 
 int main(int argc, string argv[])
 {  
    for (int i = 1; i < argc; i++)  // setting this to i = 1 won't print out the command you just typed
        {
            for (int j = 0, n = strlen(argv[i]); j < n; j++)  // how long is foo bar and run the loop that many times
                {
                printf("%c:  ", argv[i][j]);  // if you do this  printf("%c\n", argv[i][j]);  then each letter is on a separate line
                // prints out the ASCII value
                printf("%d\n", (int) argv[i][j]);
                // add 
                printf("%d = ", ((int) argv[i][j])+ (int) argv[2]);  // so this is working, I'll just have to substitute 5 with a variable
                // now take that value and convert it back into a character
                printf("%c\n", (argv[i][j])+ (int) argv[2]);  // not working here
                printf("\n");
                
                
                }
                printf("\n");
      
        }
  return 0;
  }
