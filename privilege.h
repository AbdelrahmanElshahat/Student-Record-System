#ifndef PRIVILEGE_H_INCLUDED
#define PRIVILEGE_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "Linkedlist.h"
#include "structstudent.h"
#define ADMINPASSWORD 1234
#define MAX_LENGTH 50


void init_privilege();
int check_user_ID_password(int ID, char *password);

void set_admin_password();
/*
 *  description: set the first password for admin.
 *  return: void.
 */

int check_admin_password(int adminPassword);
/*
 *  description: check if the entered password is correct or not.
 *  return: 1 if correct, 0 if wrong.
 */

void modify_admin_password(char *newAdminPassword);
/*
 *  description: modify the admin password.
 *  return: void.
 */

int add_new_record(char *name, char *password,int ID , int degree);
/*
 *  description: add new record.
 *  return: 1 if adding record succeeded, 0 if not.
 */

int modify_student_name(int ID, char *name);
/*
 *  description: modify the name.
 *  return: 1 if modifying the name succeeded, 0 if not.
 */

int modify_student_password(int ID, char *password);
/*
 *  description: modify the password.
 *  return: 1 if modifying the password succeeded, 0 if not.
 */

int modify_degree(int ID,int degree);
/*
 *  description: modify the degree.
 *  return: 1 if modifying the degree succeeded, 0 if not.
 */

int traverse_record(int ID);
int traverse_list();
/*
 *  description: view info about record.
 *  return: 1 if traversing the record succeeded, 0 if not.
 */
void display(Listentery student);
int remove_record(int ID);
/*
 *  description: remove the record.
 *  return: 1 if removing the record succeeded, 0 if not.
 */



#endif // PRIVILEGE_H_INCLUDED
