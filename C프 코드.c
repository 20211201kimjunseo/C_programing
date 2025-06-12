// while 반복문 사용
#include <stdio.h>
int main(void){
    int i;
    i = 1;
    while (i < 3){
        printf("i = %d\n", i);
        i++;
    }
    printf("while 문 종료\n");
    return 0;
}

// while 반복문으로 5! 구하기
#include <stdio.h>

int main(void) {
    unsigned f;
    int i;

    i = f = 1;
    while (i <= 5) {
        f *= i;
        i++;
    }

    printf("5! = %u\n", f);
    return 0;
}

// while 반복문 사용2
#include <stdio.h>

int main(void) {
    unsigned long long f;
    int n;

    printf("계승을 구할 수를 입력 하세요 : ");
    scanf("%d", &n);

    f = n;
    printf("%d! = ", n);

    while (--n)
        f *= n;

    printf("%llu\n", f);
    return 0;
}

// getchar() 함수 사용
#include <stdio.h>

int main(void) {
    int c, total_byte = 0, line_count = 0;

    while ((c = getchar()) != EOF) {
        total_byte++;
        if (c == '\n')
            ++line_count;
    }

    printf("파일 크기 : %d 바이트\n", total_byte);
    printf("파일 줄 수 : %d 행\n", line_count);
    return 0;
}

// for 문 사용
#include <stdio.h>

int main(void) {
    unsigned long long f;
    int n, i;

    printf("계승을 구할 수를 입력 하세요 : ");
    scanf("%d", &n);

    if (n >= 0) {
        for (f = i = 1; i <= n; i++)
            f *= i;
        printf("%d! = %llu\n", n, f);
    }
    else
        printf("음수를 입력했습니다.\n");

    return 0;
}

// for 문 + 삼항 연산자(i ? -n : n)는 i는 참일 때 -n, 거짓일 때 n
#include <stdio.h>

int main(void) {
    double y;
    int n, i = 0;

    printf("2^n 프로그램\n");
    printf("n : ");
    scanf("%d", &n);

    if (n < 0) {
        i = 1;
        n = -1 * n;
    }

    y = 1.0;
    for (int i = 1; i <= n; i++)
        y *= 2;

    if (i)
        y = 1.0 / y;

    printf("2^%d = %f\n", i ? -n : n, y);
}

// break 문 사용
#include <stdio.h>

int main(void) {
    unsigned long long f;
    int n, i;

    while (1) {
        printf("계승을 구할 수를 입력 하세요 : ");
        scanf("%d", &n);
        if (n >= 0)
            break;
        printf("음수를 입력했습니다. 양수를 입력하세요.\n");
    }
    // while 문 몸체에 있는 break를 만나면 제어는 여기로 넘어옴

    for (f = i = 1; i <= n; i++)
        f *= i;

    printf("%d! = %llu\n", n, f);
    return 0;
}

// continue 문 사용1
#include <stdio.h>

int main(void) {
    unsigned long long f;
    int n, i, done = 1;

    // continue를 만나면 제어는 여기로 넘어옴
    while (done) {
        printf("계승을 구할 수를 입력 하세요 : ");
        scanf("%d", &n);

        if (n < 0) {
            printf("음수를 입력했습니다. 양수를 입력하세요.\n");
            continue;
        }

        for (f = i = 1; i <= n; i++)
            f *= i;

        printf("%d! = %llu\n", n, f);
        done = 0;
    }
}

// continue 문 사용1
#include <stdio.h>

int main(void) {
    int n, i, sum;

    printf("n을 입력하세요 : ");
    scanf("%d", &n);

    for (sum = i = 0; i <= n; i++) {
        if (i % 2)
            continue;
        sum += i;
        // continue를 만나면 제어는 여기로 넘어옴
        // for 문의 세 번째 수식 (i++)가 실행됨
    }

    printf("%d까지 짝수의 합 = %d\n", n, sum);
    return 0;
}

// goto 문 사용
#include <stdio.h>

int main(void) {
    unsigned long long f;
    goto read;

compute:
    int n, i;
    for (f = i = 1; i <= n; i++)
        f *= i;
    printf("%d! = %llu\n", n, f);
    goto end;

read:
    printf("계승을 구할 수를 입력 하세요 : ");
    scanf("%d", &n);
    if (n < 0) {
        printf("음수를 입력했습니다. 양수를 입력하세요.\n");
        goto read;
    }
    goto compute;

end:
    return 0;
}

// switch 문 사용 방법
#include <stdio.h>

int main(void) {
    . . .
    switch(op) {
        case '+' :
            printf("%.2f + %.2f = %.2f\n", opd1, opd2, opd1 + opd2);
            break;
        case '-' :
            printf("%.2f - %.2f = %.2f\n", opd1, opd2, opd1 - opd2);
            break;
        case '*' :
            printf("%.2f * %.2f = %.2f\n", opd1, opd2, opd1 * opd2);
            break;
        case '/' :
            printf("%.2f / %.2f = %.2f\n", opd1, opd2, opd1 / opd2);
            break;
        default:
            printf("잘못된 연산자입니다.\n");
    }
    return 0;
}