#include <stdio.h>
 
// returns true if `X` and `Y` are the same
int compare(const char *X, const char *Y)
{
    while (*X && *Y)
    {
        if (*X != *Y) {
            return 0;
        }
 
        X++;
        Y++;
    }
 
    return (*Y == '\0');
}
 
// Function to implement `strstr()` function
const char* strstr(const char* X, const char* Y)
{
    while (*X != '\0')
    {
        if ((*X == *Y) && compare(X, Y)) {
            return X;
        }
        X++;
    }
 
    return NULL;
}
 
// Implement `strstr()` function in C
int main()
{ 
    printf("%i\n", compare("alisson", "alisson marcos"));
 
    return 0;
}