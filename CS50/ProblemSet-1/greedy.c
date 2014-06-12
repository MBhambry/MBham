/* the greedy algorithm
how much money we owned

author- Mohak Bhambry
*/

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){


//ask the users for how much change required

//inialize the variables to
float x;
int y;
  do{
    //print the statement
    
    printf("O hai!  How much change is owed?");
    
    x = (100 * GetFloat()); //getting the random float amount from the users
    y = round(x); //rounding it so as to detect the change we owned
    }while(x <0);

//divde total by quarters, dimes, nickels and pennies and print out the added total
    int q = y / 25;
    int d = (y - (25 * q)) / 10;
    int n = (y - ((25 * q)+(10 * d))) / 5;
    int p = (y - ((25 * q) +(10 *d) +(5 * n)));
    int t = q + d + n + p;
    printf("%d\n",t);
    return 0;
}
