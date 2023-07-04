/*
Design a program to read a password made of 3 numeric digits that prints the legend “Door Open“ if it was typed correctly, or “Error, try
again“ if some number was type incorrect. The program shall follow the state machine diagram below. Notice there are transition with a
condition this is interpreted as an if sentence and those transition in blank are not conditioned.
*/

#include<stdio.h>

enum state {IDLE, FIRST_DIGIT, SECOND_DIGIT, THIRD_DIGIT, OPEN_DOOR, ERROR};

 void main(){
    int state = IDLE;
    int run = 1, pass;
    while( run ){
        switch(state){
            case IDLE:
                //display welcome mesage
                printf("\nEnter 3 digist password (x<0 exit)\n");
                state = FIRST_DIGIT;
                break;
            case FIRST_DIGIT:
                //read number and query if is correct
                scanf("%d",&pass);
                if(pass==8) state = SECOND_DIGIT;
                else if(pass<0) run=0;
                else state = ERROR;
                break;
            case SECOND_DIGIT:
                //read number and query if is correct
                scanf("%d",&pass);
                if(pass==2) state = THIRD_DIGIT;
                else if(pass<0) run=0;
                else state = ERROR;
                break;
            case THIRD_DIGIT:
                //read number and query if is correct
                scanf("%d",&pass);
                if(pass==4) state = OPEN_DOOR;
                else if(pass<0) run=0;
                else state = ERROR;
                break;
            case OPEN_DOOR:
                //display open door message and end the program
                printf("\ndoor is open\n");
                printf("exit\n");
                run=0;
                break;
            case ERROR:
                //display error message
                printf("\nwrong number!");
                state = IDLE;
                break;
            default:
                break;
            
        }
    }

}
