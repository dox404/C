#include<stdio.h>
int main(){
int i=34;
int *j=&i;
printf("The value of i is %u\n",j);
j++;
printf("The value of i is %u\n",j);

return 0;
}

// integer size in my device is 4 bytes but its cand ber differsent in other devices
// in the previous program we saw that we printed the normal adress of the int i and then we  increment the address with j++ 
// so here its shows (the prevois number witrh +4) becaus ehere in my computer the intiger size is 4 bytes