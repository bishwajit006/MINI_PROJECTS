/* Write a programme to calculate the average CGPA of a student*/
#include<stdio.h>
int main()
{
    int semester,subject,n,i,j;
    double grade,credit,totalgrade,semestercredit,semestercg,totalcg=0,totalcredit=0,r;
    printf("Enter the number of Semester : ");
    scanf("%d",&semester);
    for(i=1;i<=semester;i++)
    {
       semestercredit=totalgrade=semestercg=grade=credit=r=0.0;
        printf("\n\n\nSEMESTER-%d",i);
        printf("\n\nEnter the Number of Subjects : ");
        scanf("%d",&subject);
        for(j=1;j<=subject;j++)
        {
            printf("\nEnter the credit of the subject-%d : ",j);
            scanf("%lf",&credit);
            semestercredit+=credit;
            printf("\nEnter the CGPA of the subject-%d : ",j);
            scanf("%lf",&grade);
            r=(credit*grade);
            totalgrade+=r;
        }
        semestercg=(totalgrade/semestercredit);
        printf("\nSEMESTER-%d : CGPA = %.2lf",i,semestercg);
        totalcg+=(semestercg*semestercredit);
        totalcredit+=semestercredit;
    }
    printf("\n\n\n-----------------------------------");
    printf("\n  The Average CGPA/SGPA : %.2lf",totalcg/totalcredit);
    printf("\n-----------------------------------\n\n\n\n\n");
    printf("Thank You");
return 0;
}
