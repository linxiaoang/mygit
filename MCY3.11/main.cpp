#include <iostream>
#include<string>
using namespace std;

class GradeBook
{
public:

        explicit GradeBook(string name1, string name2)
        :courseName(name1),teacherName(name2)
        {

        }

   void setCourseName(string name1)
   {
       courseName=name1 ;
   }
  void setTeacherName(string name2)
   {
       teacherName=name2 ;
   }

        string getCourseName() const
   {
       return courseName;
   }
       string getTeacherName() const
   {
       return teacherName;
   }

   void displayMessage() const
   {
       cout<<"Welcome to the gradebook for"<<getCourseName()<<
       "\nThis course is presented by:"<<getTeacherName();
   }
private:
    string courseName;
    string teacherName;
};
    int main()
    {
    string name1,name2;
    GradeBook myGradeBook("CS101 Introduction to C++ Programming","shibo");
    cout<<"myGradeBook creaded for course:"<<myGradeBook.getCourseName()<<endl;



    cout<<"/nPlease enter the coursename:"<<endl;
    getline(cin,name1);
    cout<<"/nPlease enter the teacher name:"<<endl;
    getline(cin,name2);
    myGradeBook.setCourseName(name1);
     myGradeBook.setTeacherName(name2);
     cout<<endl;
     myGradeBook.displayMessage();
    }





