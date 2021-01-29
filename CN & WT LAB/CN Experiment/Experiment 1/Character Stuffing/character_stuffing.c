#include<stdio.h>
#include<string.h>
int main() {
int frames;
char data[100];
char data1[100];
char data2[100];
int i,j=0,l;
char stf_str[100];
printf("enter number of frames:");
scanf("%d",&frames);
printf("enter the characters:");
scanf("%s",data);
printf("original data :");
printf("%s",data);
printf("\n");
l=strlen(data);
for(i=0;i<1;i++) {
if(data[i]=='d'&&data[i+1]=='l'&&data[i+2]=='0') {
data1[j]='d';
data1[j+1]='l';
data1[j+2]='0';
j=j+3;
}
data1[j]=data[i];
j++;
}
data[j] ='0';
printf("character stuffing :");
strcpy(stf_str,"dlestx");
strcat(stf_str,data1);
strcat(stf_str,"dleetx");
printf("%s",stf_str);
printf("\n");
l=strlen(data1);
j=0;
for(i=0;i<1;i++) {
if(data1[i]=='d'&&data1[i+1]=='l'&&data1[i+2]=='e'&&data1[i+3]=='d'&&data1[i+4]=='l'&&data1[i+5]=='e') {
data2[j]=data1[i+3];
data2[j+1]=data1[i+4];
data2[j+2]=data1[i+5];
j=j+3;
i=i+3;
}
else {
data2[j]=data1[i];
j++;
}
}
data2[j]='\0';
printf("received data :");
printf("%s",data2);
printf("\n");
printf("\n");
return 0;
}
