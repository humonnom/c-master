#include <stdio.h>

// 두 정수를 더하는 함수를 작성하세요.
int addNumbers(int a, int b)
{
    // 코드를 작성하세요.
    return 0;
};

// 배열에서 최대값을 찾는 함수를 작성하세요.
int findMax(int arr[], int size)
{
    // 코드를 작성하세요.
    return 0;
};

// 문자열의 길이를 계산하는 함수를 작성하세요. (라이브러리 함수 사용 금지)
int stringLength(char str[])
{
    // 코드를 작성하세요.
    return 0;
};

int main()
{
    int num1 = 10, num2 = 20;
    int result = addNumbers(num1, num2);
    printf("%d + %d = %d\n", num1, num2, result);

    int numbers[] = {5, 2, 9, 1, 7};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int max = findMax(numbers, size);
    printf("배열의 최대값: %d\n", max);

    char message[] = "Hello, World!";
    int length = stringLength(message);
    printf("문자열의 길이: %d\n", length);

    return 0;
};