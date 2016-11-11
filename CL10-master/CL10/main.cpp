#include <iostream>
#include <string>
using namespace std;

#include "Question.hpp"

int main()
{
	int score = 0;

	FillInTheBlankQuestion question;

	question.SetQuestion("What is 2 + 2?");
	question.SetAnswer("4");

	if(question.AskQuestion())
	{
		score++;
	}

	TrueFalseQuestion question1;

	question1.SetQuestion("Is a ploar bears skin white?");
	question1.SetAnswer(false);

	if (question1.AskQuestion())
	{
		score++;
	}


	MultipleChoiceQuestion question2;

	string answers[4] = { "4", "8", "12", "9" };

	question2.SetQuestion("How many lives does a cat have?");
	question2.SetAnswers(answers, 3);

	if (question2.AskQuestion())
	{
		score++;
	}


	cout << "Final score: " << score << endl;

	return 0;
}


