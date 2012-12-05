/****************************************************************************
 * First try at the problem set
 *
 * 
 *
 * Demonstrates argv as a two-dimensional array.
 * 
 *  so enter input such as ./caesar3 arg1 arg2
 ***************************************************************************/
 
 #include <stdio.h>
 #include <cs50.h>
 #include <string.h>
 
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
                printf("%d = ", ((int) argv[i][j])+ 5);  // so this is working, I'll just have to substitute 5 with a variable
                // now take that value and convert it back into a character
                printf("%c\n", (argv[i][j])+ 5);  // sweet, this is what I want
                printf("\n");
                
                
                }
                printf("\n");
        }
  return 0;
  }
  
  
  // Sweet, so now it is printing out the correct number associated with each letter
  // 
  // I think the next step will be to take an argument for a how many letters you want to shift
  
  // right now it's just shifting automatically by 5
