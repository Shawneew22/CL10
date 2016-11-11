#include "Question.hpp"


void BaseQuestion::SetQuestion(const string& question)
{
	m_question = question;
}

void FillInTheBlankQuestion::SetAnswer(const string& answer)
{
	m_answer = answer;
}

bool FillInTheBlankQuestion::AskQuestion()
{
	cout << m_question << endl;

	string choice;
	cin >> choice;

	if (choice == m_answer)
	{
		cout << "True" << endl;
			return true;
	}

	else
	{
		cout << "False" << endl;
		return false;

	}
}

void TrueFalseQuestion::SetAnswer(bool isTrue)
{
	m_isTrue = isTrue;
}

bool TrueFalseQuestion::AskQuestion()
{
	bool answer;
	cout << m_question << endl;
	cout << "(1) True, (2) False" << endl;
	int choice;
	cin >> choice;

	if (choice == 1)
	{
		answer = true;
	}

	else
	{
		answer = false;
	}

	if (m_isTrue == answer)
	{
		cout << "Correct" << endl;
		return true;
	}

	else
	{
		cout << "False" << endl;
		return false;
	}
}


void MultipleChoiceQuestion::SetAnswers(const string answers[4], int correctIndex)
{
	for (int i = 0; i < 4; i++)
	{
		m_answers[i] = answers[i];
	}
	m_correctIndex = correctIndex;
}

bool MultipleChoiceQuestion::AskQuestion()
{
	cout << m_question << endl;

	for (int i = 0; i < 4; i++)
	{
		cout << i + 1 << " . " <<  m_answers[i] << endl;
	}
	int answer;
	cout << "What is your answer?" << endl;
	cin >> answer;

	if (answer - 1 == m_correctIndex)
	{
		cout << "Correct" << endl;
		return true;
	}

	else
	{
		cout << "Incorrect" << endl;
		return false;
	}
}


