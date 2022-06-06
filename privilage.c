//
// Created by abdel on 1/22/2021.
//

#include "privilege.h"
static Listentery Student;
static List student;

void init_privilege(){
    CreateList(&student);
}
int check_user_ID_password(int ID, char *password) {
        RetrieveList(ID,&Student,&student);
        if ((Student.id == ID) && strcmp(password, Student.password) == 0) {
            return 1;

        } else
            return 0;



}
int check_admin_password(int adminPassword) {
    if (adminPassword == ADMINPASSWORD){
        return 1;
    }
    else
        return 0;
}
int add_new_record(char *name, char *password,int ID , int degree){
    if (!ListFull(&student)) {
        Student.name = name;
        Student.password = password;
        Student.id = ID;
        Student.degree = degree;
        Insert(ID, Student, &student);
        return 1;
    } else
        return 0;
}
int modify_student_name(int ID, char *name){
RetrieveList(ID,&Student,&student);
        if (ID == Student.id){
            strcpy(Student.name,name);
            return 1;

        } else
            return 0;

}
int modify_student_password(int ID, char *password){

RetrieveList(ID,&Student,&student);
        if (ID == Student.id){
            strcpy(Student.password,password);
            return 1;


        } else
            return 0;

}
int modify_degree(int ID,int degree){
    RetrieveList(ID,&Student,&student);
        if (ID == Student.id){
            Student.degree = degree;
            return 1;
        } else
            return 0;



}
int traverse_record(int ID){
    RetrieveList(ID,&Student,&student);

        if (Student.id == ID){
            TraverseList(&student,display);
            return 1;

        }else
            return 0;


}

void display(Listentery student){
    printf("User Id %d \n User Name %s \n User Degreee %d\n",student.id,student.name,student.degree);
}
int remove_record(int ID){
    for (int i = 0; i < ListSize(&student) ; ++i) {
        if (Student.id=ID){
            Delete(ID,&Student,&student);
        } else
            return 0;
    }
    return 1;
}

