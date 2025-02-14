#include <iostream>
using namespace std;
int main()
{
    int marks;
    char     grade = 'A';
    cout << " enter your marks :- ";
    cin >> marks;
    (marks>0 && marks<100)?  
    (marks <= 100 && marks >= 85) ? cout << "your grade is A ."
    : (marks < 85 && marks >= 75) ? cout << "Your grade is B ."
    : (marks < 75 && marks >= 65) ? cout << "Your grade is C ."
    : (marks < 65 && marks >= 50) ? cout << "Your grade is D ."
                                  : cout << "Your grade is F ."
    :
    cout << "invalid marks ";

    switch (grade)
    {
    case 'A':
    if(marks<=100 && marks>=85){
        cout<<"Excellent work!  ";
      }else if(marks<85 && marks>=75){
          cout<<"Well done. ";
      }else if(marks<75 && marks>=65){
          cout<<"Good job.  ";
      }else if(marks<65 && marks>=50){
          cout<<"You passed,but you could do better.  ";
      }else {
          cout<<"Sorry you failed .";
      }

        break;
   
    default:
        cout << "Sorry you failed  ";
        break;
    }


    if(marks<100 && marks>0){
        if (marks <= 100 && marks >= 50)
        {
            cout << "Congratulations! you are eligible for the next level.";
        }
        else
        {
            cout << "Please try again next time. " << endl;
        }
    }else{
        cout<<"invalid marks ";
    }
}
