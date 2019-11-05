#include <cs50.h>
#include <stdio.h>

void leading_spaces(int height) {
    while (height - 1 > 0) {
        printf(" ");
        height--;
    } 
}

void center_gap(void) {
    printf("  ");
}

int main(void)
{
   int height;
    do { 
       height = get_int("Height: ");
        } while ( height < 1 || height > 8);
    // Here is where the fun begins...
    int level = 1;
    int c;
    int duplicate;
    while (height > 0) {
       leading_spaces(height);
       for (duplicate = 2; duplicate > 0; duplicate--) {
          for (c = level; c > 0; c--)  {
             putchar('#');
          }
          center_gap();
       }
       height--; 
       level++;
       putchar('\n');
    }
    putchar('\n');
    
    
}
