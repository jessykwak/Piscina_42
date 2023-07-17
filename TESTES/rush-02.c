#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define MAX_BUFFER_SIZE 10
#define MAX_WORD_SIZE 100

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return i;
}

int ft_strcmp(const char *str1, const char *str2)
{
    int i = 0;
    while (str1[i] == str2[i])
    {
        if (str1[i] == '\0')
            return 0;
        i++;
    }
    return str1[i] - str2[i];
}

char *search_dict(const char *dictionary, int number)
{
    // Open the dictionary file
    int file_descriptor = open(dictionary, O_RDONLY);
    if (file_descriptor == -1)
    {
        write(2, "Error: Failed to open the dictionary file\n", 41);
        return NULL;
    }

    char buffer[MAX_BUFFER_SIZE];
    int buffer_index = 0;
    int temp = number;

    // Convert the number to a string representation
    if (temp == 0)
    {
        buffer[buffer_index++] = '0';
    }
    else
    {
        // Handle negative numbers
        if (temp < 0)
        {
            buffer[buffer_index++] = '-';
            temp = -temp;
        }

        // Convert each digit to a character
        int divisor = 1;
        while (temp / divisor > 0)
        {
            divisor *= 10;
        }
        divisor /= 10;

        while (divisor > 0)
        {
            int digit = temp / divisor;
            buffer[buffer_index++] = digit + '0';
            temp %= divisor;
            divisor /= 10;
        }
    }

    buffer[buffer_index] = '\0'; // Null-terminate the buffer

    buffer_index = 0; // Reset the buffer index
    buffer[buffer_index++] = ':';
    buffer[buffer_index++] = ' ';

    char word[MAX_WORD_SIZE];
    int word_index = 0;
    int read_size;
    int buffer_match = 1;

    while ((read_size = read(file_descriptor, &word[word_index], 1)) > 0)
    {
        if (word[word_index] == '\n')
        {
            word[word_index] = '\0';

            // Compare each character in the word with the buffer
            int i = 0;
            while (buffer[i] != '\0' && buffer[i] == word[i])
            {
                i++;
            }

            // If the word matches the buffer, extract it
            if (buffer[i] == '\0' && buffer_match)
            {
                char *result = (char *)malloc((word_index - i + 1) * sizeof(char));
                for (int j = i; j < word_index; j++)
                {
                    result[j - i] = word[j];
                }
                result[word_index - i] = '\0';
                close(file_descriptor);
                return result;
            }

            word_index = 0;
            buffer_match = 1;
        }
        else if (buffer[buffer_index] != '\0' && buffer[buffer_index] != word[word_index])
        {
            buffer_match = 0;
        }

        word_index++;
    }

    close(file_descriptor);
    return NULL;
}

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        write(2, "Error: No number provided\n", 26);
        return 1;
    }
    else if (argc == 2)
    {
        const char *dictionary = "numbers.dict";
        int number = atoi(argv[1]);
        char *word = search_dict(dictionary, number);
        if (word != NULL)
        {
            write(1, word, ft_strlen(word));
            write(1, "\n", 1);
            free(word);
        }
        else
        {
            write(2, "Error: Number not found in the dictionary\n", 41);
            return 1;
        }
    }
    else if (argc == 3)
    {
        const char *dictionary = argv[1];
        int number = atoi(argv[2]);
        char *word = search_dict(dictionary, number);
        if (word != NULL)
        {
            write(1, word, ft_strlen(word));
            write(1, "\n", 1);
            free(word);
        }
        else
        {
            write(2, "Error: Number not found in the dictionary\n", 41);
            return 1;
        }
    }
    else
    {
        write(2, "Error: Invalid number of arguments\n", 35);
        return 1;
    }

    return 0;
}
