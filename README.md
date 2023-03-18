This the finding of SGPA & CGPA by using C++ structure And nested structure.


#include<iostream>
using namespace std;

struct Course
{
    string course_code;
    string course_tittle;
    int credit_hours;
};

struct Grade
{
    string grade_alphabet; // changed to string to allow for 'A-' grade
    double grade_pts;
};

struct GPA
{
    Grade grade;
    Course course;
    double result;
};

int main()
{
    GPA info;

    int course_no;
    cout<<"enter the number of courses: ";
    cin>>course_no;
    cin.ignore(); // ignore newline character

    Course course[course_no];

    for(int i=0; i<course_no; i++)
    {
        cout<<"enter course title: ";
        getline(cin, course[i].course_tittle);

        cout<<"enter the course code: ";
        getline(cin, course[i].course_code);
        cin.ignore();

        cout<<"enter the credit hours: ";
        cin>>course[i].credit_hours;
        
	        if (course[i].credit_hours<=0)
	        {
	        	cout<<"invalid credit hours !";
	        	i--;
	        	continue;
	        	
			}
		
        cin.ignore(); // ignore newline character

        cout<<"enter the grade alphabet: ";
        getline(cin, info.grade.grade_alphabet);

        // convert grade alphabet to grade points
        if (info.grade.grade_alphabet == "A")
        {v 
            info.grade.grade_pts = 4.0;
        }
        else if (info.grade.grade_alphabet == "A-")
        {
            info.grade.grade_pts = 3.7;
        }
        else if (info.grade.grade_alphabet == "B+")
        {
            info.grade.grade_pts = 3.3;
        }
        else if (info.grade.grade_alphabet == "B")
        {
            info.grade.grade_pts = 3.0;
        }
        else if (info.grade.grade_alphabet == "B-")
        {
            info.grade.grade_pts = 2.7;
        }
        else if (info.grade.grade_alphabet == "C+")
        {
            info.grade.grade_pts = 2.3;
        }
        else if (info.grade.grade_alphabet == "C")
        {
            info.grade.grade_pts = 2.0;
        }
        else if (info.grade.grade_alphabet == "C-")
        {
            info.grade.grade_pts = 1.7;
        }
        else if (info.grade.grade_alphabet == "D+")
        {
            info.grade.grade_pts = 1.3;
        }
        else if (info.grade.grade_alphabet == "F")
        {
            info.grade.grade_pts = 1.0;
        }
        else
        {
            cout<<"Invalid grade alphabet!"<<endl;
            i--; // repeat the loop iteration for invalid input
            continue;
        }

        info.result += (info.grade.grade_pts * course[i].credit_hours);
        
    }

    // calculate CGPA
    double total_credit_hours=0;
    for(int i=0; i<course_no; i++)
    {
    	total_credit_hours+=course[i].credit_hours;
	}
    
    double cgpa = info.result / total_credit_hours;
    cout<<"your CGPA is::"<<cgpa;
}
