#include <iostream>
#include <string>
#include "FBullCowGame.h"

std::string Guess = "";
FBullCowGame BCGame; //instanciar un nuevo juego
void Intro();
void GetGuess();
void PrintBack();
void PlayGame();
bool AskPlayAgain();

int main()
{
	do
	{
		Intro();
		PlayGame();
	} while (AskPlayAgain() == true);
	return 0;
}

void Intro()
{
	//introduccion del programa y preguntas que hace	
	constexpr int WORD_LENGHT = 5;
	std::cout << "Welcome to Bulls & Cows\n";
	std::cout << "Can you guess the  letters " << WORD_LENGHT << " isogram that I'm thinking of ?\n";
	return;
}

void GetGuess()
{
	//adivinanza del jugador
	//BCGame.GetCurrentTry();
	std::cout << "Try " << BCGame.GetCurrentTry() << " Enter Guess: ";
	getline(std::cin, Guess);
	return;
}

void PrintBack()
{
	//devolver valor ingresado
	std::cout << "You guessed: " << Guess;
	std::cout << std::endl << std::endl;
	return;
}

void PlayGame()
{
	//ejecuta el juego
	int MaxTries = BCGame.GetMaxTries();
	std::cout << MaxTries << std::endl;
	for (int i = 0; i < MaxTries; i++)
	{
		GetGuess();
		PrintBack();
	}
	return;
}

bool AskPlayAgain()
{
	std::cout << "Do you want to play again? ";
	std::string Response = "";
	getline(std::cin, Response);
	//std::cout << "Is it Y? "; //<< (Response[0] == 'y' || Response[0] == 'Y');
	std::cout << std::endl;
	bool YesOrNo = (Response[0] == 'y' || Response[0] == 'Y');
	return YesOrNo;
}

