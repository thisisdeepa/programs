/*
    @Input: Forouzan
    @Expected output as:

    -------------------Senders Side------------------------------

Enter the String data you wanna send:	Forouzan

466f
726f
757a
616e
The Sum generated is 8fc7
The checksum generated is 7038
----------------------------------------------------------------------

Enter 1 if you wanna intoduce an error otherwise press 0:	0

-------------------------------Receiver's side-------------------------

466f
726f
757a
616e
7038
The Sum generated is ffff
The checksum generated is 0
 No error detected
----------------------------------------------------------------------

 */

#include<stdio.h>
#include<string.h>
#include<time.h>

#include<stdlib.h>

char str[100];
int generateChecksum(int mode,int checksum){
    int n,temp,sum=0;

    if(strlen(str)%2 != 0){
        n = (strlen(str)+1)/2;
    }
    else{
        n = strlen(str)/2;
    }

    for(int i=0;i<n;i++){
        temp = str[i*2];
        temp = (temp*256) + str[(i*2)+1];
        printf("\n%x",temp);
        sum = sum+temp;
    }

    
    if(mode == 1){
        printf("\n%x",checksum);
        sum += checksum;
    }
  
    if(sum%65536 != 0){
        n = sum%65536;
        sum = (sum/65536) + n;
    }
    printf("\nThe Sum generated is %x",sum); // This will be the checksum we obtained.
    sum = 65535 - sum; //Now, as we now we perform the complement. So, subtracting from FFFF in case of hexadecimal
                        // is same as subtracting from 65535 in case of decimal.
    printf("\nThe checksum generated is %x",sum); //This will print the checksum. FInal checksum.

    return sum;
}

void main(){

    int sum1 = 0; //We will use this to store the checksum at the senders side.
    int sum2 = 0; //We will use this to store the checksum at the senders side.

    printf("\n-------------------Senders Side------------------------------\n");
    printf("\nEnter the String data you wanna send:\t");
    scanf("%s",str); //This will be the dataword we wanna send.

    sum1 = generateChecksum(0,0); //This will generate the checksum for the particular string and put it in sum1.

    printf("\n----------------------------------------------------------------------\n");
    int ch;
  
    printf("\nEnter 1 if you wanna intoduce an error otherwise press 0:\t");
    scanf("%d",&ch);    
    srand(time(NULL)); //Why do we do this ? 

   
    printf("\n-------------------------------Receiver's side-------------------------\n");
    if(ch == 1){

        //We can modify the dataword itself
        int num = (rand() % (strlen(str)));   //We randomlt generate the index number of the bit to change.
        printf("\nRandom number: %d, so we will change the this indexed character.",num);
        str[num]++; //This will simply introduce some error, as it will increase the character by one.
        sum2 = generateChecksum(1,sum1); //We again generate the checksum.


        if(sum2 == 0){
            //As sum is 0, so no error detected.
            printf("\n No error detected");
        }
        else{
            //Error detected here.
            printf("\n Error detected");
        }

    }
    else{
        sum2 = generateChecksum(1,sum1); //We will send the checksum generated and the mode bit here.
        //Again, with the same logic , we will print whether error is detected or not.
        if(sum2 == 0){
            printf("\n No error detected");
        }
        else{
            printf("\n Error detected");
        }
    }

    printf("\n----------------------------------------------------------------------\n");
}