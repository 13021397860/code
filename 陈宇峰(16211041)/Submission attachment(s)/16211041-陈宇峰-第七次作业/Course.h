#ifndef COURSE_H
#define COURSE_H

#include <string>
using namespace std;

class Course
{
    public:
        Course();
        Course(const string,const int);
        virtual ~Course();
        string getname() const;
        int getcreditHour() const;
        void setname(const string);
        void setcreditHour(const int);
        friend ostream& operator<<(ostream&, const Course&);
        virtual int getScore() const=0;

    protected:

    private:
        string name;
        int creditHour;
};

#endif // COURSE_H
