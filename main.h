#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

void alarm_handler(int signum) __attribute__((unused));
void print_prompt(void);
int read_command(char *command, int size);
void execute_command(char *command);
int run_child(char *command);
int wait_child(int pid);

#endif

