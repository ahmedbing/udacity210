

//main.h 

class Student
{
    public:
    int studentID;
    int grades[10];
    
    void setStudentID(int num);
    void setGrade(int gradeNum, int grade);
    int getID();
    int getGrades(int gradeNum);
    void printGrades();
    int getMin();
    int getMax();
    float getAverageGrade();
};

// ********************
class CourseEnrollment
{
    public:
    Student students[6];
    void addStudents(Student* stdnt);
    int *getAllGrades();
    int *sortAllGrades();
    int getMinGrade();
    int getMaxGrade();
    float getAvgGrade();
    //int grades[60];
};

void Student::setStudentID(int num){
    studentID = num;
}

void Student::setGrade(int gradeNum, int grade){
    grades[gradeNum]=grade;
}

void Student::printGrades(){
    for(int i=0; i < 10; i++){
        std::cout<< grades[i] << " " ;
    }
    std::cout<< "\n";
}

int Student::getID(){
    return studentID;
}

int Student::getGrades(int gradeNum){
    return grades[gradeNum];
}

int Student::getMin(){
    int min=grades[0];
    for(int i=1; i < 10; i++){
        if( grades[i] < min)
            min=grades[i];
    }   
    return min;
}

int Student::getMax(){
    int max=grades[0];
    for(int i=1; i < 10; i++){
        if( grades[i]> max)
            max=grades[i];
    }   
    return max;
}

float Student::getAverageGrade(){
    int sum;
    for(int i=0; i<10; i++){
        sum += grades[i];
    }
    return (sum/10.0);
}

void CourseEnrollment::addStudents(Student* stdnt){
    for(int i=0; i<6; i++ ){/*
        for(int x=0; x<10; x++){
            students[i].setGrade(x, stdnt.getGrades[x]);   
        }
        students[i].setStudentID(stdnt.getID);
    */
        students[i]= stdnt[i];
    }
}
/*
int CourseEnrollment::*getAllGrades(){
    int allGrades[60];
    int dum=0
    for (int i=0; i<6 ; i++){
        for(int num=0; num<10; num++){
            allGrades[dum]=students[i].grades[num];
            dum++;
        }
    }
    return allGrades;
}

int CourseEnrollment::*getAllGrades(){
    
*/


int CourseEnrollment::getMinGrade(){
    int min=students[0].grades[0];
    for (int i=0; i<6 ; i++){
        for(int num=0; num<10; num++){
            if(min > students[i].grades[num]){
                min = students[i].grades[num];
            }
        }
    }
    return min;
}

int CourseEnrollment::getMaxGrade(){
    int max=students[0].grades[0];
    for (int i=0; i<6 ; i++){
        for(int num=0; num<10; num++){
            if(max < students[i].grades[num]){
                max = students[i].grades[num];
            }
        }
    }
    return max;
}

float CourseEnrollment::getAvgGrade(){
    float sum=0;
    for(int i=0; i<6; i++){
        for(int y=0; y<10; y++){
            sum += students[i].grades[y];
        }
    }
    return (sum/60.0);
}




