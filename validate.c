# include <string.h>
# include <stdio.h>

int validate(const char *answer, char *display,  char *guess)
{
    int correct = 0;
    int length = strlen(answer);
    for  (int i = 0; i < length; i++) 
    {
        if (answer[i] == guess) 
        {
            display[i] = guess;
            correct = 1;
        }
    }
    return correct;

}