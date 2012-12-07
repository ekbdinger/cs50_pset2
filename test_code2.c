// this time I'm going to get the argument from the command line

#include <stdio.h>
 #include <cs50.h>
 #include <string.h>
 #include <stdlib.h>  // required for the atoi()
  #include <ctype.h>   // for islower() and isdigit()
 
 
int main(int argc, string argv[])                
{ 

    if ( argc > 2 )
    {
        printf("please enter only one key value.  ");
    }
    
    else
    {
         // REST OF THE CODE GOES HERE
    
    }
    
  // so just a simple if statement should suffice here

    
/*  for (int i = 1; i < argc; i++)
    {
        for (int j = 0, n = strlen(argv[i]); j < n; j++)
        {
            printf("%c\n", argv[i][j]);
            
            // check to verify that it is a digit that was entered
            if( isdigit( argv[i][j] ) )
                printf("the isdigit function worked!\n");
                
                // sweet this worked
        }
        printf("\n");
    }
*/  
    
     
   return 0;
}
 









    


   // testing the isdigit()    BRING THIS BACK IN A BIT
    
/*  if( isdigit( fred ) )
      printf("the isdigit function worked!\n");
*/        
  /*  if( isdigit('9') )
        printf("the isdigit function worked!\n");
   */
    

/*
    string lower[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    
    // testing that it would print out a and z. And this did work
    printf("the first letter is %s\n", lower[0]);
    printf("last letter is:  %s\n", lower[25]);
    
*/


    // do I even need this else statement?        
    /*   I think it will just do a spac
            else   
            {
            printf("The variable is not a letter");   // so now I need to replace this code here.  
            }
            */

    // Let's try out the islower() function
    //  #include <ctype.h>
    //  int islower( int ch );
    
    
  /*  if (islower(c))
        keystr[len++] = c;
    }
    */
    
 /*
    if (islower('B'))
    {
        printf("that is lower case\n");
    }
    if (isupper('B'))
    {
        printf("that is uppper case\n");
    }
    
   */
