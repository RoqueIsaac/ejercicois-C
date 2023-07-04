/*
Modify the state machine two manage two doors one with the
password 36579 and the second one with 36581. Pleas provide the appropriate chart.
*/


#include<stdio.h>

enum state {IDLE, FIRST_DIGIT, SECOND_DIGIT, THIRD_DIGIT, FOUR_DIGIT, FIFTH_DIGIT, OPEN_DOOR, ERROR};
void door1(void);
void door2(void);

void main(void){
    char door;    
    while(1){
        
        printf("\nWhich door to open, 1 or 2 (- to exit) ? ");
        scanf(" %c",&door);   //se deja espacio en %c debido a que detecta in \n<salto de linea del enter> --> 1\n
        if(door=='1'){
            printf("\nDoor 1");
            door1();
        }
        else if(door=='2'){
            printf("\nDoor 2");
            door2();
        }
        else if(door=='-'){
            break;
        }
        else{
            printf("\nnot available! ");
        }
    }
    printf("\n\nEND\n");
}


void door1(void){
    int state = IDLE;
    int run = 1;
    char pass;
    while(run){
        switch(state){
            case IDLE:
                //display welcome mesage
                printf("\nEnter 5 digit password (- to exit)\n");
                state = FIRST_DIGIT;
                break;
            case FIRST_DIGIT:
                //read number and query if is correct
                scanf(" %c",&pass);
                if(pass=='3') state = SECOND_DIGIT;
                else state = ERROR;
                break;
            case SECOND_DIGIT:
                //read number and query if is correct
                scanf(" %c",&pass);
                if(pass=='6') state = THIRD_DIGIT;
                else state = ERROR;
                break;
            case THIRD_DIGIT:
                //read number and query if is correct
                scanf(" %c",&pass);
                if(pass=='5') state = FOUR_DIGIT;
                else state = ERROR;
                break;
            case FOUR_DIGIT:
                //read number and query if is correct
                scanf(" %c",&pass);
                if(pass=='7') state = FIFTH_DIGIT;
                else state = ERROR;
                break;
            case FIFTH_DIGIT:
                //read number and query if is correct
                scanf(" %c",&pass);
                if(pass=='9') state = OPEN_DOOR;
                else state = ERROR;
                break;
            case OPEN_DOOR:
                //display open door message and end the program
                printf("\ndoor is open\n");
                run=0;
                break;
            case ERROR:
                //display error message
                if(pass=='-'){
                    printf("\nmain menu ");
                    run=0;
                }else{
                    printf("\nWrong number!");
                    state = IDLE;
                }
                break;
            default:
                break;
            
        }
    }
    
}


void door2(void){
    int state = IDLE;
    int run = 1;
    char pass;
    while(run){
        switch(state){
            case IDLE:
                //display welcome mesage
                printf("\nEnter 5 digit password (- to exit)\n");
                state = FIRST_DIGIT;
                break;
            case FIRST_DIGIT:
                //read number and query if is correct
                scanf(" %c",&pass);
                if(pass=='3') state = SECOND_DIGIT;
                else state = ERROR;
                break;
            case SECOND_DIGIT:
                //read number and query if is correct
                scanf(" %c",&pass);
                if(pass=='6') state = THIRD_DIGIT;
                else state = ERROR;
                break;
            case THIRD_DIGIT:
                //read number and query if is correct
                scanf(" %c",&pass);
                if(pass=='5') state = FOUR_DIGIT;
                else state = ERROR;
                break;
            case FOUR_DIGIT:
                //read number and query if is correct
                scanf(" %c",&pass);
                if(pass=='8') state = FIFTH_DIGIT;
                else state = ERROR;
                break;
            case FIFTH_DIGIT:
                //read number and query if is correct
                scanf(" %c",&pass);
                if(pass=='1') state = OPEN_DOOR;
                else state = ERROR;
                break;
            case OPEN_DOOR:
                //display open door message and end the program
                printf("\ndoor is open\n");
                run=0;
                break;
            case ERROR:
                //display error message
                if(pass=='-'){
                    printf("\nmain menu ");
                    run=0;
                }else{
                    printf("\nWrong number!");
                    state = IDLE;
                }
                break;
            default:
                break;
            
        }
    }
    
}
