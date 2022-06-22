#include <stdio.h>
#include <string.h>
#define true 1
#define false 0

int getSize(char *input){
//  Returns size of CHAR an array
    int i=0;
    while(input[i]!= '\0')
        ++i;
    return i;
}

int getSizeInt(int *input){
//  Returns size of an INT array
    int i=0;
    while(input[i]!= -1)
        ++i;
    return i;
}
const int  charlimit   =   240;

int main(){

    //Init variables
    char        input[charlimit];
    char        output[charlimit];
    char        numHold[charlimit]; //Holds Char while reading a binary chunk
    int         numInt[charlimit]; // Holds found number
    int         holdInt=0; // To calculate the decimal
    int         index=0;  // to control numHold
    int         intIndex=0; //to control numInt

    /** Loop from here  **/
        //reset vars
        strcpy(input, "\0");
        strcpy(output, "\0");
        strcpy(numHold, "\0");
        for(int i=0; i< charlimit;++i) numInt[i]=-1;
        index               =   0;
        holdInt             =   0;
        intIndex            =   0;

        //take input
        printf("Input: ");
        fflush(stdin);
        scanf("%[^\n]s", input);
        int inputSize = getSize(input);

        //Read Input
        for(int i=0; i<inputSize+1; ++i){
            if(input[i]==' ' || i==inputSize){
                int multi = 1;
                holdInt=0;
                for(int j = index-1; j>=0; --j){
                    if(numHold[j]=='1'){
                        holdInt += multi;
                    }
                    multi *=2;
                }
                numInt[intIndex++] = holdInt;
                holdInt =0;
                multi = 1;
                index = 0;
            }
            else{
                numHold[index++]=input[i];
            }
        }

        //sort
        int temp = 0;
         for(int i=0; i<getSizeInt(numInt); i++)
        {
            for(int j=i+1; j<getSizeInt(numInt); j++)
            {
                if(numInt[j] < numInt[i])
                {
                    temp = numInt[i];
                    numInt[i] = numInt[j];
                    numInt[j] = temp;
                }
            }
    }
        printf("\n");
        for(int i=0;i<getSizeInt(numInt); ++i) printf("%d ", numInt[i]);
        printf("\n");
    
}
