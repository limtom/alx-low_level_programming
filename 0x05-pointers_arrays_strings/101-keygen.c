#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * Main- Entry point
  * 101-crackme: generate a random string
   * Return: 0 success
    */
    
    int main() {
        /*Create the variable */
            int i, str_length;
                char str[] = "abcdefghijklmnopqrstuvwxyz0123456789~!@#$%^&*_+-;:/|";
                    
                        /*Allocate a memory space for the password*/
                            char *password = malloc(sizeof(char)*10);
                                
                                    /*Get the length of the string*/
                                        str_length = strlen(str);
                                            
                                                srand(time(NULL)); /*Set the seed for the random generator*/
                                                    
                                                        /*Generate the random string */
                                                            for(i = 0; i < 10; i++){
                                                                    int ch_index = rand()%str_length;/*Number generated between the length of the character*/
                                                                            password[i] = str[ch_index];
                                                                                }
                                                                                    
                                                                                        /*Print the password*/
int pass_len = strlen(password);
                                                                                            for(i = 0; i < pass_len; i++){
                                                                                                    printf("%c", password[i]);
                                                                                                        }
                                                                                                            
                                                                                                                /*Free the allocated memeory*/
                                                                                                                    free(password);
                                                                                                                        
                                                                                                                            return 0;
                                                                                                                            }