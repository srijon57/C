#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{   char ch, w[100],s[100];
    scanf("%c %s %[^\n]s", &ch, w, s);
    
    printf("%c\n%s\n%s\n", ch, w, s);
   
    return 0;
}
