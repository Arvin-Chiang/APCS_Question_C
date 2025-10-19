#include <stdio.h>

int main()
{
    int HH1 = 0;
    int HH2 = 0;
    int MM1 = 0;
    int MM2 = 0;
    int SS1 = 0;
    int SS2 = 0;
    int TS1 = 0;
    int TS2 = 0;
    int t1 = 0;
    int t2 = 0;
    int t3 = 0;

    scanf("%d:%d:%d",&HH1,&MM1,&SS1);
    scanf("%d:%d:%d",&HH2,&MM2,&SS2);
    
    TS1 = TS1 + HH1*3600+MM1*60+SS1;
    TS2 = TS2 + HH2*3600+MM2*60+SS2;

    if( TS1 > TS2 )
    {
        t1 =  TS1 - TS2;
        t2 = t1;
        t3 = t2;
        t1 = t1 / 3600;
        t2 = t2 - 3600 * t1;
        t2 = t2 / 60;
        t3 = t3 - 3600 * t1 - t2 * 60;

        printf("%d:%d:%d",t1,t2,t3);
    } 
    else
    {
        t1 =  TS2 - TS1;
        t2 = t1;
        t3 = t2;
        t1 = t1 / 3600;
        t2 = t2 - 3600 * t1;
        t2 = t2 / 60;
        t3 = t3 - 3600 * t1 - t2 * 60;

        printf("%d:%d:%d",t1,t2,t3);
    }
}