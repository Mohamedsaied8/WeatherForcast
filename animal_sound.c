#include <stdio.h>

void cow_sound()
{
 printf("COW Sound\n");
}

void cat_sound()
{
 printf("CAT Sound\n");
}

void dog_sound()
{
 printf("DOG Sound\n");
}

enum Sound
{
    COW,
    CAT,
    DOG
};

int main()
{
    //condition to switch on sound
    int choice;
    printf("Enter your choice:\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case COW:
        cow_sound();
        break;
    case CAT:
        cat_sound();
        break;
    case DOG:
        dog_sound();
        break;
    default:
        printf("not valid input\n");
        break;
    }

    return 0;
}
