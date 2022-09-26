#include <stdio.h>
#include <string.h>

void callClock();
void callNote();
void callSomething();

int main(void){

    while(1){
        char line[16];
        //io user choice
        // strcmp to clock, note, or something to 1, 2,3
        printf("Reading your felegalow:\n");
        //%*c dispose of the new line.
        // https://stackoverflow.com/questions/63621779/how-to-clear-the-content-of-a-string-which-has-already-been-used-in-c-programmin
        scanf("%15[^\n]%*c", line);
        printf("Your line: %s\n", line);
        int request;
        if (strcmp(line, "clock") == 0){
            request = 1;
        } else if (strcmp(line, "note") == 0){
            request = 2;
        } else if (strcmp(line, "something") == 0){
            request = 3;
        }

        memset(line, 0, sizeof(line));

        switch(request){
            case 1:
                printf("You chose clock\n");
                callClock();
                break;
            case 2:
                printf("You chose note\n");
                callNote();
                break;
            case 3:
                printf("You chose something\n");
                callSomething();
                break;
            default:
                printf("Don't.\n");
                break;
        }
    }
    
}

void callNote(){
    printf("I am note.\n");
};
void callClock(){
    printf("I am clock.\n");
}
void callSomething(){
    printf("I am something.\n");
}