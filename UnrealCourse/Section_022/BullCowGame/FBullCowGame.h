#pragma once
#include <string>

class FBullCowGame
{
	public:
		void Reset(); //change return value
		int GetMaxTries() const;
		int GetCurrentTry() const;
		bool IsGameWon() const;
		bool CheckGuessValidity(std::string); //change return value


	private:
		int MyCurrentTry = 1;
		int MyMaxTries = 5;
};