
#include <stdio.h>
#include <string.h>

struct cat
{
    char name[50];
    char breed[40];
    int age;
};

int main()
{
    struct cat my_cat =
        {
            "varu", "billu", "23"};
    struct cat *ptr_cat;
    ptr_cat = &my_cat;
    printf("Cat's name: %s\n", ptr_cat->name);
    printf("Cat's breed: %s\n", ptr_cat->breed);
    my_cat.age = 23;
    printf("Cat's age: %d\n", ptr_cat->age);

    strcpy(ptr_cat->name, "pussy");
    ptr_cat->age++;

    printf("cat's new name: %s\n", ptr_cat->name);
    printf("cat's new age: %d\n", ptr_cat->age);

    return 0;
}