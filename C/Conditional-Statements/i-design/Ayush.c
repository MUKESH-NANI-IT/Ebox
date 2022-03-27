// Aayush's Scholarship
/*
Aayush studies in Teswan National University. Now is the time for exam results. Aayush similar to other students, hopes that his scores in 5 subjects in the exam could fetch him a scholarship for his GRE preparation.

The following simple rules  are used to find whether he is eligible to receive scholarship:
University follows 5 point grading system. In an exam, a student can receive any score from 2 to 5.  2 is called an F grade, meaning that student has failed that exam.
Student should not have fail any of the exams.
Student must obtain a full score in some of his/her exams to show that he/she is excellent in some of the subjects.
He/She must have a grade point average not less than 4.0
​You are given information regarding how Aayush performed in those 5 subjects . Help him determine whether he will receive the scholarship or not.

Input Format:
The input contains 5 space separated integers denoting Aayush’s 5 subjects score in the exam.

Output Format:
Output a single line - "Yes" (without quotes) if Aayush will receive scholarship, or "No" (without quotes) otherwise.
Refer sample input and output for formatting specifications.

Sample Input 1:
3 5 4 4 3

Sample Output 1:
No

Sample Input 2:
3 4 4 4 5

Sample Output 2:
Yes
*/

/*                                                              CODE                                                        */

#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    float avg;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    avg = (float)(a + b + c + d + e) / 5;
    if (a > 2 && b > 2 && c > 2 && d > 2 && e > 2)
    {
        if ((a == 5) || (b == 5) || (c == 5) || (d == 5) || (e == 5))
        {
            if (avg >= 4.0)
            {
                printf("Yes");
            }
            else
            {
                printf("No");
            }
        }
        else
        {
            printf("No");
        }
    }
    else
    {
        printf("No");
    }
}