#include <iostream>
#include <string>
using namespace std;

struct Question
{
	
	string question;
	string options[4];
	int correct ;
};


string checkAnswer(Question q,int& answer)
{
	
	if (answer ==q.correct)
	{
		
		return "Correct!";
	}
	 else
	{
		return "Incorrect!";
	}
}
void showQuiz(Question q)
{
	cout<<q.question<<endl;
	for(int k =0;k<4;k++){
		cout<<k+1<<". "<<q.options[k]<<endl;
	}
}


int main()
{
	Question q1;
	q1.question = "Which of the following are considered the \"brain\" of the computer?";
	q1.options[0] ="Hard drive";
	q1.options[1] ="RAM";
	q1.options[2] = "CPU";
	q1.options[3]= "GPU";
	q1.correct = 3;
	
	Question q2;
	q2.question = "What does RAM stand for?";
	q2.options[0] ="Radio Amplitude Modulator";
	q2.options[1] ="Random Access Memory";
	q2.options[2] = "Central Processing Unit";
	q2.options[3]= "Rough Actress Maid";
	q2.correct = 2;
	
	Question q3;
	q3.question = "Which of the following is NOT a OS?";
	q3.options[0] ="Google Chrome";
	q3.options[1] ="Android";
	q3.options[2] = "Microsoft Windows";
	q3.options[3]= "Linux";
	q3.correct = 1;
	
	Question q4;
	q4.question = "What is the main function of an IP address?";
	q4.options[0] ="Locate memory(pointer)";
	q4.options[1] ="Locate home address";
	q4.options[2] = "Identify acomputer on a network";
	q4.options[3]= "Encrypt user data";
	q4.correct = 3;
	
	Question questions[4] = {q1, q2, q3, q4};
	for(int i = 0; i < 4; i++)
	{
		showQuiz(questions[i]);
		int answer = 0;
		cin >> answer;
		cout << checkAnswer(questions[i], answer) << endl << endl;
	}
	
	return 0;
}