/* mario.c
the half-pyramid mario problem */

#include <stdio.h>
#include <cs50.h>

int main(void)
{
   //Declaring a variable
   int height_pyramid = 0;
   
   //Taking user input and checking if it matches inbounds and prompt for retry
   do
   {
     printf ("Height:");
     height_pyramid = GetInt();
     
     if(height_pyramid == 0)
     {
        return 0;
      }   
     
     }while(height_pyramid < 1 || height_pyramid > 23);
     
       
     for(int i = 0; i < height_pyramid; i++)
       {
       
         //print the required spaces
         for(int j = 0; j < height_pyramid -i-1; j++)
         {
         
           printf("%s"," ");
         }
       
     //Print the "#"character
      for(int k  = 0; k < i+2; k++)
      {
        
        printf("#");
        
      }
      printf("\n");
     }
   return 0;
}


