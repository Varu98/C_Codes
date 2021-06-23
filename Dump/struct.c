#include <stdio.h>

struct employee
{
       int emp_id;
       char name[20];
       float salary;
       char address[50];
       int dept_no;
       int age;
};
int main()
{
       struct employee e[2];

       printf("Enter details of two employees\n\n");
       for (int i = 0; i < 2; i++)
       {
              printf("Enter Employee ID\n");

              scanf("%d", &e[i].emp_id);
              printf("Enter Employee name\n");

              scanf("%s", &e[i].name);
              printf("Enter Employee Salay\n");

              scanf("%f", &e[i].salary);
              printf("Enter Employee Address\n");

              scanf("%s", &e[i].address);
              printf("Enter Employee Dept_no\n");

              scanf("%d", &e[i].dept_no);
              printf("Enter Employee Age\n");

              scanf("%d", &e[i].age);

              // printf("Enter Employee ID 2");
              // scanf("%d", &e[i].emp_id);
              // printf("Enter Employee name");
              // scanf("%s", &e[i].name);
              // printf("Enter Employee Salary");
              // scanf("%f", &e[i].salary);
              // printf("Enter Employee Address");
              // scanf("%s", &e[i].address);
              // printf("Enter Employee Dept_no");
              // scanf("%d", &e[i].dept_no);
              // printf("Enter Employee Age");
              // scanf("%s", &e[i].age);
       }

       for (int i = 0; i < 2; i++)
       {
              printf("Employee ID: %d \nEmployee name: %s \n Employee Salary: %f \n Employee Address %s \n Employee Dept_no: %d \n Employee Age: %d", &e[i].emp_id, &e[i].name, &e[i].salary, &e[i].address, &e[i].dept_no, &e[i].age);
       }

       return 0;
}
