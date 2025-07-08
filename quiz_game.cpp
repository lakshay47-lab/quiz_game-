#include<iostream>
using namespace std;
int askQuestion(string question,string options[],int correctOption){
cout<<question<<endl;
  for(int i=0;i<4;i++){
    cout<<i+1<<" . "<<options[i]<<endl;
  }
  int answer;
  cout<<"Enter your answer(1-4): ";
  cin>>answer;
  if(answer==correctOption){
    cout<<"Correct answer.\n"<<endl;
    return 1;
  }
  else{
    cout<<"Incorrect answer.\n"<<endl;
    return 0;
  }

  
}
int main(){
  int score=0;
  string q1Options[] = {"A. Cristiano Ronaldo", "B. Lionel Messi", "C. Pelé", "D. Diego Maradona"};
  score += askQuestion("Who has the most goals in international football?", q1Options, 1);

  string q2Options[] = {"A. India", "B. Australia", "C. New Zealand", "D. Sri Lanka"};
  score += askQuestion("Which country has won the most Cricket World Cups?", q2Options, 2);

  string q3Options[] = {"A. Oxygen", "B. Hydrogen", "C. Carbon Dioxide", "D. Nitrogen"};
  score += askQuestion("Which is the most abundant gas in Earth's atmosphere?", q3Options, 4);
  cout<<"Your final score is : "<<score<< " out of 3\n"<<endl;

  

  
  return 0;
}