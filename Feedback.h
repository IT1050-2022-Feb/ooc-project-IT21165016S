//feedback
class Feedback//base class 
{ 
private:
  string  Comment;
  int f_rate;
public:
Feedback(){}
Feedback(string U_comment,int U_frate){ 
Comment=U_comment;
f_rate=U_frate;
~Feedback();
}
  //implementatin
void sendFeedback(RegisteredUser*r){}//dependency relationship with registered user
void displayFeedback()
{
cout << "comment" << Comment<< endl;
cout <<"rate" << f_rate << endl;
}
};