    #include <stdio.h>

struct date
{
    int date, month, year;
};

struct studentData
{
    char name[32];
    int marks;
    struct date dateOfBirth;
};

struct studentData readStudentData()
{
    struct studentData student1;

    printf("\nEnter student's name");
    scanf("%s", student1.name);

    printf("\nEnter marks");
    scanf("%d", &student1.marks);

    printf("\nEnter date of birth");
    scanf("%d%d%d", &student1.dateOfBirth.date, &student1.dateOfBirth.month, &student1.dateOfBirth.year);

    return student1;
}

void printStudentData(struct studentData studentInfo)
{
    printf("\n\nStudent Name - %s", studentInfo.name);
    printf("\nStudent Marks - %5d", studentInfo.marks);
    printf("\nStudent Date-Of-Birth - %2d/%2d/%2d", studentInfo.dateOfBirth.date, studentInfo.dateOfBirth.month, studentInfo.dateOfBirth.year);
}

void sortStudentsByMarks(struct studentData a[10], int n)
{
    int i, j;
    struct studentData swap;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i].marks < a[j].marks)
            {
                swap = a[i];
                a[i] = a[j];
                a[j] = swap;
            }
        }
    }
}

void main()
{
    int i, n;
    struct studentData a[10];

    printf("Enter the number of students. - ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        a[i] = readStudentData();
    }

    printf("The Unsorted data is - \n");
    for (i = 0; i < n; i++)
    {
        printStudentData(a[i]);
    }

    sortStudentsByMarks(a,n);

    printf("\nThe Sorted data is - \n");
    for (i = 0; i < n; i++)
    {
        printStudentData(a[i]);
    }
}
