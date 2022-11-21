#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{


    int x1,x2,y1,y2,x3,y3;
    float area;
    printf("enter the coordinates\n");
    printf("enter the 1st coordinates:\n");
    scanf("%d %d",&x1,&y1);
    printf("enter the 2nd coordinates:\n");
    scanf("%d %d",&x2,&y2);
    printf("enter the 3rd coordinates:\n");
    scanf("%d,%d",&x3,&y3);
    printf("the 1st coordinate:%d %d\n",x1,y1);
    printf("the 2nd coordinate:%d %d\n",x2,y2);
    printf("the 3rd coordinate:%d,%d\n",x3,y3);
    area=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    printf("area=%Lf\n",area);
    if(area==0)
    {
        printf("the points are collinear\n");
    }
    else
    {
        printf("the points are not collinear\n");
    }
    getch();
    return 0;
}    

    
    
     




