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
	Question q[4];
	cout<<"Load questions and their options also the correct answer \n";
	for(int i =0;i<4;i++)
	{
		cout<<i<<endl;
		cout<<"Enter question below: \n";
		getline(cin,q[i].question);
		cout<<"Enter options below\n";
		for(int k =0 ;k<4;k++)
		{
			cout<<k + 1<<". ";
			getline(cin,q[i].options[k]);
			
		}
	cout<<"Enter correct option(1-4): ";
	cin>>q[i].correct;	
	cin.ignore();
		
	}
	
	
	
	return 0;
}