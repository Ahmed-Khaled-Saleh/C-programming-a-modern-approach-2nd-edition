#include <stdio.h>
/*project 8.6 is intended to read an array of chars and then modifying each corresponding
elements between the BIFF language and the original text */

main()
{
    int i=0;
    char message[100];
    printf("Enter message : ");
    do{
            scanf("%c",&message[i]);
            i++;

    }while(message[i-1]!='\n');//we read chars until user hit enter( in ascii enter means'\n')

    for(i=0;i<message[i]!='\0';i++)
        {
            switch(message[i]){
            case 'A':
            case 'a':
                message[i]='4';
                break;
            case 'b':
            case 'B':
                message[i]='8';
                break;
            case 'e':
            case 'E':
                message[i]='3';
                break;
            case 'i':
            case 'I':
                message[i]='1';
                break;
            case 'o':
            case 'O':
                message[i]='0';
                break;
            case 's':
            case 'S':
                message[i]='5';
                //note that the last case of switch statement doesn't need a break statement .


            }


        }
        //now print out the message in the new format
        for(i=0;i<message[i]!='\0';i++)
            printf("%c",message[i]);

}
