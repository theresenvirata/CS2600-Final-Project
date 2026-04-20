// Alexander Haffty, Carter Do, Joudi Heliani, Natalie Duong, Therese Virata

//words.txt was created using ChatGPT with the following prompt: "Produce a txt file that has the following properties: It's 100 lines long, each line has one English word in all lowercase, the words aren't to hard, and is 5-10 characters long."

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char* getWord();

int main() {
	printWelcome();
	srand(time(NULL)); //creates a random seed for rand, otherwise we'd keep getting the same number :(

	char* word = getWord();
	
	if (word != NULL) { //prints out actual word, delete in final product
		printf("%s\n", word);
	}


	
	return 0;
}

//Used ChatGPT to check code for correctness
char* getWord() {
	FILE *fptr;
	fptr = fopen("words.txt", "r");
	if (!fptr) {
		printf("Error in finding words.txt, maybe it's not in the same directory?");
		return NULL;
	}
	int lineNum = (rand() % 100) + 1; //random number from 1-100
	static char answer[12]; //stores word
	
	for (int i = 0; i < lineNum; i++) {
		//constantly overwrites answer
		if (!fgets(answer, sizeof(answer), fptr)) { //if fgets retrieves a null value, return NULL
			fclose(fptr);
			return NULL;
		}

	}

	fclose(fptr);
	return answer;
}

// Function to print full hangman
void printHangmanFull() {
	printf(
        	"  +---+\n"
        	"  |   |\n"
        	"  O   |\n"
        	" /|\\  |\n"
        	" / \\  |\n"
        	"      |\n"
        	"=========\n"
	);
}

// instruction screen
void printWelcome() {
	printHangmanFull();
	

	printf("\nWelcome to Hangman!\n");	
	printf("Instructions:\n");
	printf("- Guess the word one letter at a time.\n");
	printf("- You have 6 incorrect guesses.\n");
	printf("- Try to solve the word before you run out of tries!\n\n");
}

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