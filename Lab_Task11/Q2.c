#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_WORDS 1000
#define MAX_WORD_LEN 50
typedef struct
{
    char word[MAX_WORD_LEN];
    int count;
} WordCount;
WordCount words[MAX_WORDS];
int wordCount = 0;
void check(const char *word)
{
    for (int i = 0; i < wordCount; i++)
    {
        if (strcmp(words[i].word, word) == 0)
        {
            words[i].count++;
            return;
        }
    }
    if (wordCount < MAX_WORDS)
    {
        strcpy(words[wordCount].word, word);
        words[wordCount].count = 1;
        wordCount++;
    }
}
void processFile(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (!file)
    {
        perror("Error opening file");
        return;
    }
    char word[MAX_WORD_LEN];
    while (fscanf(file, "%49s", word) == 1)
    {
        char cleanWord[MAX_WORD_LEN];
        int j = 0;
        for (int i = 0; word[i]; i++)
        {
            if (isalnum(word[i]))
            {
                cleanWord[j++] = tolower(word[i]);
            }
        }
        cleanWord[j] = '\0';

        if (j > 0)
        {
            check(cleanWord);
        }
    }
    fclose(file);
}
void printWordCounts()
{
    for (int i = 0; i < wordCount; i++)
    {
        printf("%s: %d\n", words[i].word, words[i].count);
    }
}
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }
    processFile(argv[1]);
    printWordCounts();
    return 0;
}
