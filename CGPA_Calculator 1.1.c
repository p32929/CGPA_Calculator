
#include<stdio.h>

struct A
{
    char name[10];
    double credit, gpa, total;
};

void main()
{
    struct A a[100];
    int i,n;
    double Tcr=0, Tcg=0;
    printf("Total subject:\n");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Enter sub code:\n");
        scanf("%s", &a[i].name);
        printf("Enter credits for %s:\n", a[i].name);
        scanf("%lf", &a[i].credit);
        printf("GPA for %s:\n", a[i].name);
        scanf("%lf", &a[i].gpa);
        a[i].total= a[i].credit * a[i].gpa;

    }
    int j;
    printf("\nSL\tSubject\t\tCredits\t\tGPA\t\tTotal\n");
    for(j=0; j<i; j++)
    {
        Tcr+=a[j].credit;
        Tcg+=a[j].total;
        printf("%d\t%-12s\t%.2lf\t\t%.2lf\t\t%.2lf\n",j+1, a[j].name, a[j].credit,a[j].gpa, a[j].total);
    }
    printf("\nCGPA = %.4lf\n", Tcg/Tcr);
    return 0;
}

