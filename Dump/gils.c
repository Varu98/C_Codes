#include <stdio.h>
struct employee
{
    int emp_id;
    float salary;
    char name[50];
    char address[50];
    int dept_no;
    int age;
};
int main()
{
    struct employee e[5];
    for (int i = 1; i <= 15; i++)
    {
        printf("Enter employee id\n");
        scanf("%d", &e[i].emp_id);
        printf("Enter employee name\n");
        scanf("%c\n", &e[i].name);
        printf("Enter employee address\n");
        scanf("%c\n", &e[i].address);
        printf("Enter employee age\n");
        scanf("%d\n", &e[i].age);
        printf("Enter employee dept no.\n");
        scanf("%d\n", &e[i].dept_no);
    }
    for (int i = 1; i <= 100; i++)
    {
        printf("the employee id is:%f\n", e[i].emp_id);
        printf("the employee name is:%c\n", e[i].name);
        printf("the employee address is:%c\n", e[i].address);
        printf("the employee age is:%d\n", e[i].age);
        printf("the employee debt no is:%d\n", e[i].dept_no);
    }
    return 0;
}