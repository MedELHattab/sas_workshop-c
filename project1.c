#include <stdio.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_WORD_LENGTH 50

// Global arrays to store data and symbols
char data[MAX_WORDS][MAX_WORD_LENGTH];
char symbols[] = {'@', '$', '&', '#'};

// Variable to keep track of the number of words in data
int wordCount = 0;

// Function to display data
void displayData() {
    printf("Current Data:\n");
    for (int i = 0; i < wordCount; i++) {
        printf("%s\n", data[i]);
    }
}

// Function to add data
void addData() {
    if (wordCount < MAX_WORDS) {
        printf("Enter a word: ");
        scanf("%s", data[wordCount]);
        wordCount++;
        printf("Data added successfully.\n");
    } else {
        printf("Data storage is full.\n");
    }
}

// Function to search for data
void searchData() {
    char search_word[MAX_WORD_LENGTH];
    printf("Enter the word to search: ");
    scanf("%s", search_word);

    for (int i = 0; i < wordCount; i++) {
        if (strcmp(data[i], search_word) == 0) {
            printf("%s found in the data.\n", search_word);
            return;
        }
    }

    printf("%s not found in the data.\n", search_word);
}
// Function to remove data
void removeData() {
    char remove_word[MAX_WORD_LENGTH];
    printf("Enter the word to remove: ");
    scanf("%s", remove_word);

    for (int i = 0; i < wordCount; i++) {
        if (strcmp(data[i], remove_word) == 0) {
            // Shift remaining elements to fill the gap
            for (int j = i; j < wordCount - 1; j++) {
                strcpy(data[j], data[j + 1]);
            }
            wordCount--;
            printf("%s removed from the data.\n", remove_word);
            return;
        }
    }

    printf("%s not found in the data.\n", remove_word);
}

// Function to generate the wordlist
void generateWordlist() {
    printf("Generated Wordlist:\n");
    for (int i = 0; i < wordCount; i++) {
        printf("%s ", data[i]);

        for (int j = 0; j < (rand() % 3 + 1); j++) {
            printf("%s ", data[i]);
        }

        if (i < 10) {
            printf("%c ", symbols[i]);
        }
    }
    printf("\n");
}

int main() {
    int choice;

    while (1) {
        printf("\nApplication Menu\n");
        printf("===================\n");
        printf("[1] Display Data\n");
        printf("[2] Add Data\n");
        printf("[3] Search for Data\n");
        printf("[4] Remove Data\n");
        printf("[5] Generate Wordlist\n");
        printf("[6] Exit\n");
        printf("===================\n");
        printf("Enter your choice [1-6]: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayData();
                break;
            case 2:
                addData();
                break;
            case 3:
                searchData();
                break;
            case 4:
                removeData();
                break;
            case 5:
                generateWordlist();
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice. Please enter a number between 1 and 6.\n");
        }
    }

    return 0;
}
