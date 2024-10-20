
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char word1[50];
    char word2[50];
    int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    printf("enter the first word: \n");
    scanf("%s",word1);
    printf("enter the second word: \n");
    scanf("%s",word2);
    int n = 0;
    int score1 = 0;
    int score2 = 0;
    while (word1[n] != '\0')
    {
        if (isupper(word1[n]))
        {
            score1 += POINTS[word1[n] - 'A'];
            n++;
        }
        else if (islower(word1[n]))
        {
            score1 += POINTS[word1[n] - 'a'];
            n++;
        }
        else if ((ispunct(word1[n])))
        {
            n++;
        }
    }
    n = 0;
    while (word2[n] != '\0')
    {
        if (isupper(word2[n]))
        {
            score2 += POINTS[word2[n] - 'A'];
            n++;
        }
        else if (islower(word2[n]))
        {
            score2 += POINTS[word2[n] - 'a'];
            n++;
        }
        else if ((ispunct(word2[n])))
        {
            n++;
        }
    }
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("\nPlayer 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}
