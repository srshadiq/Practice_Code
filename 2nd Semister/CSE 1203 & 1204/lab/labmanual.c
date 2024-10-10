#include <stdio.h>
#include<stdlib.h>
#include<math.h>
struct member
{
    int id;
    float height;
    int weight;
} m;

/******** 1. Add Member ******/

int add_member(int *num)
{
    FILE *p;
    p = fopen("E:\\file.txt", "a");

    printf("Enter member ID: ");
    scanf("%d", &m.id);
    fprintf(p, "%d ", m.id);
    printf("Enter Height (m): ");
    scanf("%f", &m.height);
    fprintf(p, "%.2f ", m.height);
    printf("Enter Weight (Kg): ");
    scanf("%d", &m.weight);
    fprintf(p, "%d \n", m.weight);
    printf("Successfully Added\n");
    fclose(p);
    *num++;
}

/*******   2. update Member  *********/

int update_member(int *num)
{
    struct member m[60];
    FILE *p;
    p = fopen("E:\\file.txt", "r");
    for (int i = 0; i < *num; i++)
    {
        fscanf(p, "%d", &m[i].id);
        fscanf(p, "%f", &m[i].height);
        fscanf(p, "%d", &m[i].weight);
    }
    int id, w;
    float h;
    printf("Enter Member ID:\n");
    scanf("%d", &id);
    printf("Enter new Height & Weight:");
    scanf("%f %d", &h, &w);
    for (int i = 0; i < *num; i++)
    {
        if (id == m[i].id)
        {
            m[i].height = h;
            m[i].weight = w;
        }
    }
    fclose(p);
    p = fopen("E:\\file.txt", "w");
    for (int i = 0; i < *num; i++)
    {
        fprintf(p, "%d ", m[i].id);
        fprintf(p, "%0.2f ", m[i].height);
        fprintf(p, "%d\n", m[i].weight);
    }
    printf("Successfully Updated\n");
    fclose(p);
}

/*******   3. Remove Member  *********/
int remove_member(int *num)
{
    struct member m[60], mn[60];
    FILE *p;
    p = fopen("E:\\file.txt", "r");
    for (int i = 0; i < *num; i++)
    {
        fscanf(p, "%d", &m[i].id);
        fscanf(p, "%f", &m[i].height);
        fscanf(p, "%d", &m[i].weight);
    }
    int id;
    int x = 0, l = 0;
    printf("Enter ID for remove:");
    scanf("%d", &id);
    for (int i = 0; i < *num; i++)
    {
        if (id == m[i].id)
        {
            l++;
            continue;
        }
        mn[x].id = m[i].id;
        mn[x].height = m[i].height;
        mn[x].weight = m[i].weight;
        x++;
    }
    fclose(p);
    p = fopen("E:\\file.txt", "w");
    for (int i = 0; i < *num - l; i++)
    {
        fprintf(p, "%d ", mn[i].id);
        fprintf(p, "%0.2f ", mn[i].height);
        fprintf(p, "%d\n", mn[i].weight);
    }
    printf("Successfully Removed\n");
    fclose(p);
    *num--;
}
/*******   4. Maximum Height & Weight  *********/
int max_height_weight(int *num)
{
    struct member m[60];
    FILE *p;
    p = fopen("E:\\file.txt", "r");
    for (int i = 0; i < *num; i++)
    {
        fscanf(p, "%d", &m[i].id);
        fscanf(p, "%f", &m[i].height);
        fscanf(p, "%d", &m[i].weight);
    }
    int answ = m[0].weight;
    int mw = m[0].weight;
    int id_no_w = m[0].id;
    int id_no_h = m[0].id;
    for (int i = 0; i < *num-1; i++)
    {
        if (mw < m[i + 1].weight)
        {
            mw = m[i + 1].weight;
            answ = m[i + 1].weight;
            id_no_w = m[i + 1].id;
        }
    }
    float ansh = m[0].height;
    float mh = m[0].height;
    for (int i = 0; i < *num-1; i++)
    {
        if (mh < m[i + 1].height)
        {
            mh = m[i + 1].height;
            ansh = m[i + 1].height;
            id_no_h = m[i + 1].id;
        }
    }
    printf("Max Height: %0.2f \t ID No: %d\n", ansh, id_no_h);
    printf("Max Weight: %d \t ID No: %d\n", answ, id_no_w);
    fclose(p);
}

/*********   5. Minimum Height & Weight  *********/

int min_height_weight(int *num)
{
    struct member m[60];
    FILE *p;
    p = fopen("E:\\file.txt", "r");
    for (int i = 0; i < *num; i++)
    {
        fscanf(p, "%d", &m[i].id);
        fscanf(p, "%f", &m[i].height);
        fscanf(p, "%d", &m[i].weight);
    }
    int answ = m[0].weight;
    int mw = m[0].weight;
    int id_no_w = m[0].id;
    int id_no_h = m[0].id;
    for (int i = 0; i < *num-1; i++)
    {
        if (mw > m[i + 1].weight)
        {
            mw = m[i + 1].weight;
            answ = m[i + 1].weight;
            id_no_w = m[i + 1].id;
        }
    }
    float ansh = m[0].height;
    float mh = m[0].height;
    for (int i = 0; i < *num-1; i++)
    {
        if (mh > m[i + 1].height)
        {
            mh = m[i + 1].height;
            ansh = m[i + 1].height;
            id_no_h = m[i + 1].id;
        }
    }
    printf("Min Height: %0.2f\tID No: %d\n", ansh, id_no_h);
    printf("Min Weight: %d\t ID No: %d\n", answ, id_no_w);

    fclose(p);
}

/*******   6. Average Height & Weight  *********/
int avg_height_weight(int *num)
{
    struct member m[60];
    FILE *p;
    p = fopen("E:\\file.txt", "r");
    for (int i = 0; i < *num; i++)
    {
        fscanf(p, "%d", &m[i].id);
        fscanf(p, "%f", &m[i].height);
        fscanf(p, "%d", &m[i].weight);
    }
    int sum_w = 0;
    float sum_h = 0.0;
    int cout = 0;
    for (int i = 0; i < *num; i++)
    {
        sum_w = m[i].weight;
        sum_h = m[i].height;
        cout++;
    }
    printf("Average Height: %0.2f\n", sum_h / cout);
    printf("Average Weight: %d\n", sum_w / cout);

    fclose(p);
}

/*******   7.  BMI Classification  *********/
int BMI(int *num)
{
    struct member m[60];
    FILE *p;
    p = fopen("E:\\file.txt", "r");
    for (int i = 0; i < *num; i++)
    {
        fscanf(p, "%d", &m[i].id);
        fscanf(p, "%f", &m[i].height);
        fscanf(p, "%d", &m[i].weight);
    }
    int id;
    float bmi;
    printf("Enter Member ID:");
    scanf("%d", &id);
    for (int i = 0; i < *num; i++)
    {
        if (id == m[i].id)
        {
            bmi = (m[i].weight) / (m[i].height * m[i].height);
            printf("BMI: %0.2f\n", bmi);
        }
    }
    if (bmi >= 0.0 && bmi < 16.0)
    {
        printf("Classicifation: Severe Thinness\n");
    }
    else if (bmi >= 16.0 && bmi < 17.0)
    {
        printf("Classicifation: Moderate Thinness\n");
    }
    else if (bmi >= 17.0 && bmi < 18.5)
    {
        printf("Classicifation: Mild Thiness\n");
    }
    else if (bmi >= 18.5 && bmi < 25.0)
    {
        printf("Classicifation: Normal\n");
    }
    else if (bmi >= 25 && bmi < 30.0)
    {
        printf("Classicifation: Overweight\n");
    }
    else if (bmi >= 30.0 && bmi < 35.0)
    {
        printf("Classicifation: Obese Class I\n");
    }
    else if (bmi >= 35.0 && bmi < 40.0)
    {
        printf("Classicifation: Obese Class II\n");
    }
    else if (bmi > 40.0)
    {
        printf("Classicifation:Obese Class III\n");
    }
    fclose(p);
}
int number(int x)
{
    int a=1,n;
    int ans=0;
    FILE *p;
    p = fopen("E:\\file.txt", "r");
    while(a)
    {
        fscanf(p,"%d",&n);
        if(n=='\0'){
            a=0;
        }
        ans++;
    }
    fclose(p);
    return ceil(ans/3);
}
int main()
{
    int a=1;
    int x=0;
    number(x);
    int *num=&x;
    printf("n=%d",*num);
    while(a)
    {
    printf("********* Main Menu *********\n");
    printf("\n 1. Add Member\n");
    printf(" 2. Update Member\n");
    printf(" 3. Remove Member\n");
    printf(" 4. Max Height & Weight\n");
    printf(" 5. Min Height & Height\n");
    printf(" 6. Average Height & Weight\n");
    printf(" 7. BMI classification\n");
    printf(" 8. Exit\n");
    printf("   Enter Your option(1-8):");
    printf("\n num=%d",*num);

    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        add_member(&num);
        break;
    case 2:
        update_member(&num);
        break;
    case 3:
        remove_member(&num);
        break;
    case 4:
        max_height_weight(&num);
        break;
    case 5:
        min_height_weight(&num);
        break;
    case 6:
        avg_height_weight(&num);
        break;
    case 7:
        BMI(&num);
        break;
    case 8: a=0;
        break;

    }
    }

    return 0;
}