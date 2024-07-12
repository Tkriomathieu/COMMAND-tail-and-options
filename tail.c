#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "/home/mathieu/sources/accesfichier/srcaccesfichier.h"
int main(int argc,char* argv[])
{
    FILE* file=NULL;
    char chaine[1000];
    int count1=1,count2=1;
    if(strcmp(argv[1],"--version")==0)
    {
        option_version(file,argv);
    }
    else if(strcmp(argv[1],"-n")==0)
    {
        option_n(file,argc,argv,count1,count2,chaine);
    }
    else if(strcmp(argv[1],"-v")==0)
    {
        option_verbose(file,argc,argv,chaine,count1,count2);
    }
    return 0;
}