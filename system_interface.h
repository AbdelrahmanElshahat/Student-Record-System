//
// Created by Eslam Walid on 2021-01-20.
//

#ifndef SYSTEM_H
#define SYSTEM_H

#include "privilege.h"
#include <stdio.h>
#include <stdlib.h>


#define ADMIN_MODE 1
#define USER_MODE 2
#define MAX_LENGTH 50

void system_init();
/*
 *  description: prints the welcome massage and set the default admin password.
 *  return: void.
 */

void system_run();
/*
 *  description: starts the system and select the system mode.
 *  return: void.
 */

void admin_mode();
/*
 *  description: begin admin mode.
 *  return: void.
 */

void admin_login(int adminPassword);
/*
 *  description: checks if admin entered correct password.
 *  return: void.
 */

void admin_menu();
/*
 *  description: print a list of the available functionality to the admin.
 *  return: void.
 */

void admin_action();
/*
 *  description: take the command by the admin then perform it.
 *  return: void.
 */

void user_mode();
/*
 *  description: begin user mode.
 *  return: void.
 */

void user_login(int *ID,char *userPassword);
/*
 *  description: check if user entered correct ID and password.
 *  return: void.
 */

void user_menu();
/*
 *  description: print a list of the available functionality to the user.
 *  return: void.
 */

void user_action(int ID);
/*
 *  description: take the command by the user then perform it.
 *  return: void.
 */

#endif //RECORDS_SYSTEM_H
