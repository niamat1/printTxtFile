#include<stdio.h>
#include<string.h>
void stinformation();

int main(){
    stinformation();
    return 0;
}

void stinformation(){
    char name[100], sub[100];
    int id, born;
    float cgpa;
    FILE*info;
    info = fopen("stinfo.txt","r");
    if(!info){
        printf("file not exist");
        fclose(info);
    }
    else{
            printf("Serial\t Name \t  sub \t   id \t    cgpa     Born\n");
            int i=1;
        while(fscanf(info,"%s %s %d %f %d",&name,&sub,&id,&cgpa,&born)!=EOF){
            printf("%-8d %-8s %-8s %-8d %-8.2f %-8d\n",i,name,sub,id,cgpa,born);
            i=i+1;
        }
        fclose(info);
    }
}
