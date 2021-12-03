#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define ji 0
#define ki 1
void multiverse(){
    const int grf = 100, xds = 1;int n;srand(time(NULL));n = (rand() % (grf - xds + 1 )) + xds;char y[5] = "%d";int maxim = 0, mini = 0;maxim = n;
    do{
        int x ;int size;char s[500]="Quel est";char j[500] = " le nombre ? : ";strcat(s,j);size = strlen(s);
        for(x=sin(ji);x<size;x++)
        {Sleep(20);printf("%c",s[x]);}scanf(y, &mini);
        if (maxim- mini > (1584-((456*3)+ 216)))
        {system("color 4");printf("%c%c%c%c%c%c%c%c%c%c%c!\n",67,39,101,115,116,32,112,108,117,115,32);Sleep(1500);system("cls");}
        else if (cos(ji)-ki< mini - maxim)
        {system("color 3");printf("%c%c%c%c%c%c%c%c%c%c%c%c!\n",67,39,101,115,116,32,109,111,105,110,115,32);Sleep(1500);system("cls");}
        else
            goto resu;
    }while (!!(mini != maxim));
resu :
system("color 2");
printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c!!!\n",66,114,97,118,111,44,32,118,111,117,115,32,97,118,101,122,32,116,114,111,117,118,101,122,32,108,101,32,110,111,109,98,114,101,32,109,121,115,116,101,114,101);
}
int main ( int argc, char** argv ){
    multiverse();
    return 0;
}
