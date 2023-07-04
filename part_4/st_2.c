/*
Modify the state machine to process a 5 digit password 36579. 
*/

#include<stdio.h>

enum state {IDLE, FIRST_DIGIT, SECOND_DIGIT, THIRD_DIGIT, FOUR_DIGIT, FIFTH_DIGIT, OPEN_DOOR, ERROR};

 void main(){
    int state = IDLE;
    int run = 1, pass;
    while( run ){
        switch(state){
            case IDLE:
                //display welcome mesage
                printf("\nEnter 3 digits password (x<0 exit)\n");
                state = FIRST_DIGIT;
                break;
            case FIRST_DIGIT:
                //read number and query if is correct
                scanf("%d",&pass);
                if(pass==3) state = SECOND_DIGIT;
                else if(pass<0) run=0;
                else state = ERROR;
                break;
            case SECOND_DIGIT:
                //read number and query if is correct
                scanf("%d",&pass);
                if(pass==6) state = THIRD_DIGIT;
                else if(pass<0) run=0;
                else state = ERROR;
                break;
            case THIRD_DIGIT:
                //read number and query if is correct
                scanf("%d",&pass);
                if(pass==5) state = FOUR_DIGIT;
                else if(pass<0) run=0;
                else state = ERROR;
                break;
            case FOUR_DIGIT:
                //read number and query if is correct
                scanf("%d",&pass);
                if(pass==7) state = FIFTH_DIGIT;
                else if(pass<0) run=0;
                else state = ERROR;
                break;
            case FIFTH_DIGIT:
                //read number and query if is correct
                scanf("%d",&pass);
                if(pass==9) state = OPEN_DOOR;
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

