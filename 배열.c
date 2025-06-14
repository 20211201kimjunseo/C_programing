// 배열 사용
#include <stdio.h>
int main(void){
    int ages[100],  tot, i;
    double avg;
    tot=0;
    printf("백 명의 나이를 입력하세요: ");
    for(i=0; i<100; i++)
        scanf("%d", &ages[i]);
    for(i=0; i<100; i++)
        tot+=ages[i];
avg = tot / 100.0;
printf("입력된 백 명의 나이 : ");
for(i=0; i<100; i++)  
printf("%d ", ages[i]);
printf("\n백 명의 평균 나이는 %.1f입니다.\n", avg);
return 0;
} 


// 배열 사용한 버블 정렬
#include <stdio.h>

int main(void) {
    int grade[10], i, j, sum, tmp;
    for (i = 0; i < 10; i++)
        scanf("%d", &grade[i]);

    for (i = 0; i < 9; i++) {
        for (j = 9; j > i; j--) {
            if (grade[j - 1] > grade[j]) {
                tmp = grade[j - 1];
                grade[j - 1] = grade[j];
                grade[j] = tmp;
            }
        }
    }

    for (i = 0; i < 10; i++)
        printf("%d ", grade[i]);

    return 0;
}

// 기호 상수 사용
#include <stdio.h>

#define N 10

int main(void) {
    int grade[N], i, j, tmp;

    // N개의 정수 입력
    for (i = 0; i < N; i++)
        scanf("%d", &grade[i]);

    // 버블 정렬
    for (i = 0; i < N - 1; i++) {
        for (j = N - 1; j > i; j--) {
            if (grade[j - 1] > grade[j]) {
                tmp = grade[j - 1];
                grade[j - 1] = grade[j];
                grade[j] = tmp;
            }
        }
    }

    // 정렬 결과 출력
    for (i = 0; i < N; i++)
        printf("%d ", grade[i]);

    return 0;
}

// 2차원 배열
#include <stdio.h>

#define N 3  // 학생 수
#define M 4  // 과목 수

int main(void) {
    int grades[N][M];         // 학생별 과목 점수 저장
    int student[N] = {0};     // 학생별 총점 저장
    int i, j;

    // 입력 받기
    for (i = 0; i < N; ++i)
        for (j = 0; j < M; ++j)
            scanf("%d", &grades[i][j]);

    // 평균 계산 및 출력
    for (i = 0; i < N; ++i) {
        for (j = 0; j < M; ++j)
            student[i] += grades[i][j];  // 총점 계산
        printf("%1d 평균 : %5.2f\n", i, (float)student[i] / M);
    }

    return 0;
}

// 배열과 함수를 같이 사용
#include <stdio.h>
#define N 10
void grade_input(int gr[], int size);
int grade_sum2(int gr[], int size);
void grade_sort(int gr[], int size);

int main(void) {
    int grade[N], i, sum;
    float average;

    grade_input(grade, N);
    sum = grade_sum2(grade, N);
    average = (float) sum / N;

    printf("성적 평균 : %f\n", average);

    grade_sort(grade, N);
    printf("성적순 : ");
    for (i = 0; i < N; i++) printf("%d ", grade[i]);

    return 0;
}

// 1. 성적 입력
void grade_input(int gr[], int size) {
    int i;
    printf("성적 %d개를 입력하세요:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &gr[i]);
    }
}

// 2. 성적 합
int grade_sum2(int gr[], int size) {
    int i, sum = 0;
    for (i = 0; i < size; i++) {
        sum += gr[i];
    }
    return sum;
}

// 3. 성적 정렬 (오름차순)
void grade_sort(int gr[], int size) {
    int i, j, tmp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - 1 - i; j++) {
            if (gr[j] > gr[j + 1]) {
                tmp = gr[j];
                gr[j] = gr[j + 1];
                gr[j + 1] = tmp;
            }
        }
    }
}

// 문자열 출력
#include <stdio.h>
#define N 10
int main(void){
char str[N] = "Hello!";
int i;
for (i = 0; i < N; i++) 
if (str[i] == '\0') 
break;
else
printf("%c", str[i]);
printf("\n");
return 0;
}

// 문자열 출력
#include <stdio.h>
#define N 10
int main(void){
char str[N] = "Hello!";
printf("%s\n", str);
return 0;
}

// 이름과 나이
#include <stdio.h>
#define N 20
int main(void){
char name[N] = "";
int age = 100;
printf("이름을 입력하세요 : ");
scanf("%s", name);
printf("나이를 입력하세요 : ");
scanf("%d", &age);
printf("%s는(은) %d 살입니다.\n", name, age);
return 0;
}

// 이름 입력
#define N 20
#include <stdio.h>

int main(void) {
    char name[N];
    int i = 0;
    char c;

    printf("이름을 입력하세요: ");
    while (1) {
        c = getchar();
        if ((c == ' ') || (i == N)) {
            while ((c = getchar()) != '\n');
            printf("이름을 다시 입력하세요: ");
            i = 0;
            continue;
        }
        if ((c == '\n') || (c == EOF)) {
            name[i++] = '\0';  // 문자열 종료 문자
            break;
        }
        name[i++] = c;
    }

    printf("입력된 이름: %s\n", name);
    return 0;
}

