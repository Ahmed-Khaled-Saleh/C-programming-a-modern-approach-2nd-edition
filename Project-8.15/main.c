#include <stdio.h>


main()
{
    int key,i=0;
    char message[80];
    printf("Enter a message to be encrypted :");
    do{
            scanf("%c",&message[i]);
            i++;

    }while(message[i-1]!='\n');

    printf("Enter shift key(1-25) :");
    scanf("%d",&key);
    //now replace each element with the a element + key
    for(i=0;message[i]!='\0';i++){
        //first check the round problem (if letter + key exceeds z or Z)
        //we consider 3 cases {lower case letter, upper case letter,special char}
        //lower case letter
        if(key+message[i]>'z')
            message[i]=((message[i]-'a')+key)%26 + 'a';

        //upper case letters
        else if(key+message[i]>'Z')
            message[i]=((message[i]-'A')+key)%26 + 'A';

        //handle otherwise chars(space and ,)
        else if(message[i]==32 || message[i]==',') continue;
        else  message[i]+=key;

    }
    for(i=0;message[i]!='\0';i++)
        printf("%c",message[i]);

}
