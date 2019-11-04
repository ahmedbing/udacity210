

//main.h 

class Student
{
    
    int studentID;
    int grades[10];
    public:
        void setStudentID(int num);
        void setGrade(int gradeNum, int grade);
        void printGrades();
        int getMin();
        int getMax();
        float getAverageGrade();
};

//********************
class CourseEnrollment
{
    public:
    Student students[6];
    void addStudents(Student std);
    int *getAllGrades();
    int *sortAllGrades();
    int courseMinGrade;
    int courseMaxGrade;
    float courseAvgGrade;
    int grades[60];
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

void CourseEnrollment::addStudents(Student std){
    for(int i=0; i<6; i++ ){
        students[i] = std[i];
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


int CourseEnrollment::courseMinGrade(){
    int min=students[0].grades[0];
    for (int i=0; i<6 ; i++){
        for(int num=0; num<10; num++){
            if(min > students[i].grades[num]){
                min = students[i].grades[num]
            }
        }
    }
    return min;
}

int CourseEnrollment::courseMaxGrade(){
    int max=students[0].grades[0];
    for (int i=0; i<6 ; i++){
        for(int num=0; num<10; num++){
            if(max < students[i].grades[num]){
                max = students[i].grades[num]
            }
        }
    }
    return max;
}




