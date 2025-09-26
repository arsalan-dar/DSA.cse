#include <stdio.h>

struct student
{
    int roll_no;
    struct student *next;
};
int main()
{
    struct student s1, s2, s3;
    printf("enter roll no of student 1\n");
    scanf("%d", &s1.roll_no);
    printf("enter roll no of student 2\n");
    scanf("%d", &s2.roll_no);
    printf("enter roll no of student 3\n");
    scanf("%d", &s3.roll_no);
    s1.next = &s2;
    s2.next = &s3;
    s3.next = NULL;
    struct student *h;
    h = &s1;
    // display
    struct student *p;
    p = h;
    while (p != NULL)
    {
        printf("rpll no =%d\n", p->roll_no);
        p = p->next;
    }
}
