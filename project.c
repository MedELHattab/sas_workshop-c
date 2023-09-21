#include <stdio.h>
#include <string.h>

#define N 100
#define Length 100

char listdata [N] [Length];
char symbols[] = {'@', '$', '&', '#'};
int count = 0;

void displaylist(){
	printf("the current data is :\n");
	for (int i = 0;i < count;i++){
		printf("%s\n",listdata[i]);
	}
}

void addlist() {
	if (count < N) {
        printf("enter the new data :\n");
        scanf("%s", listdata[count]);
        count++;
        printf("Data added successfully.\n");
    } else {
        printf("Data storage is full.\n");
    }
}

void searchlist() {
    char search_word[Length];
    printf("Enter the word to search: ");
    scanf("%s", search_word);

    for (int i = 0; i < count; i++) {
        if (strcmp(listdata[i], search_word) == 0) {
            printf("%s" found in the data.\n", search_word);
            return;
        }
    }

    printf("%s" not found in the data.\n", search_word);
}

void removelist() {
	char removed_data [Length];
	printf ("Enter the word you want to delete it\n");
	scanf("%s", removed_data);
	if (strcpm(listdata[i],removed_data) ==0){
		 for (int j = i; j < count - 1; j++) {
                strcpy(listdata[j], listdata[j + 1]);
            }
            count--;
            printf("%s"removed from the data.\n", removed_data);
            return;
        }
    }

    printf("%s not found in the data.\n", removed_word);
}
	}

int main () {
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
                displaylist();
                break;
            case 2:
                addlist();
                break;
            case 3:
                searchlist();
                break;
            case 4:
                removelist();
                break;
            //case 5:
              //  generatelist();
                //break;
            case 5:
                return 0;
            default:
                printf("Invalid choice. Please enter a number between 1 and 6.\n");
        }
    }

    return 0;
}
