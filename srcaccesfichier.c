#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "/home/mathieu/sources/accesfichier/srcaccesfichier.h"
void option_verbose(FILE* file,int argc,char* argv[],char chaine[1000],int count1,int count2)
{   
    file=fopen(argv[2],"r+");
    printf("=> %s <=",argv[2]);
    fclose(file);
}
void option_version(FILE* file,char* argv[])
{
    file=fopen(argv[2],"r");
    printf("tail (GNU coreutils) 9.1\nCopyright © 2022 Free Software Foundation, Inc.\nLicense GPLv3+ : GNU GPL version 3 ou ultérieure <https://gnu.org/licenses/gpl.html>\nCeci est un logiciel libre. Vous êtes libre de le modifier et de le redistribuer.\nCe logiciel n'est accompagné d'ABSOLUMENT AUCUNE GARANTIE, dans les limites permises par la loi.\n\nÉcrit par Paul Rubin, David MacKenzie, Ian Lance Taylor et Jim Meyering.\n");
    fclose(file);
}
void option_n(FILE* file,int argc,char* argv[],int count1,int count2,char chaine[1000])
{
    
    if(strchr(argv[1],'-')==NULL)
    {
        file=fopen(argv[1],"r");
        while(!feof(file))
        {
            fgets(chaine,500,file);
            count1++;        
        }
        fclose(file);
        file=fopen(argv[1],"r");
        while(!feof(file))
            {
                fgets(chaine,500,file);
                count2++;
                if(count2 >= count1-10)
                {
                    printf("%s",chaine);
                }
            }
            printf("\n");
            fclose(file);

    }
    else
    {
        file=fopen(argv[3],"r");
        if(file!=NULL)
        {
            int n;
            int cast;
            while(!feof(file))
            {
                fgets(chaine,500,file);
                count1++;
            }
            fclose(file);
            file=fopen(argv[3],"r");
            cast=atoi(argv[2]);
            n=count1-cast;
            while(!feof(file))
            {
                fgets(chaine,500,file);
                count2++;
                if(count2 >= n)
                {
                    printf("%s",chaine);
                }
            }
            printf("\n");
            fclose(file);
        }
    }
}