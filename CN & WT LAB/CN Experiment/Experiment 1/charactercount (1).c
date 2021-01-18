

#include <stdio.h>

int main()
{ 
    char string[100];
    int c = 0,
    count[26] = {0}, x;
if (string[c] >= 'a' && string[c] <= 'z')
{
    x = string[c] - 'a'; count[x]++;
    }
for (c = 0; c < 26; c++) 
printf("%c occurs %d times in the string.\ n", c + 'a', count[c]);


    return 0;
}
