#include <stdio.h>

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

// need to input a way to get the player to start the game

int main() {
	printWelcome();

	return 0;

} 	
