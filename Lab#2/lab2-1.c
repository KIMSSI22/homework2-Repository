#include <stdio.h>
int main()
{
    printf("김민서 2022040010\n");
    char charType; 
    int integerType;
    float floatType;
    double doubleType;
    
    printf("Size of char: %ld byte\n",sizeof(charType)); //char형으로 선언된 변수임으로 1바이트 출력
    printf("Size of int: %ld bytes\n",sizeof(integerType)); //int형으로 선언된 변수임으로 4바이트 출력
    printf("Size of float: %ld bytes\n",sizeof(floatType)); //float형으로 선언된 변수임으로 4바이트 출력
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); //double형으로 선언된 변수임으로 8바이트 출력

    printf("-----------------------------------------\n");

    printf("Size of char: %ld byte\n",sizeof(char)); //char 자료형은 1바이트로 출력
    printf("Size of int: %ld bytes\n",sizeof(int)); //int 자료형은 4바이트로 출력
    printf("Size of float: %ld bytes\n",sizeof(float)); //float 자료형은 4바이트로 출력
    printf("Size of double: %ld bytes\n",sizeof(double)); //double 자료형은 8바이트로 출력

    printf("-----------------------------------------\n");

    printf("Size of char*: %ld byte\n",sizeof(char*)); 
    printf("Size of int*: %ld bytes\n",sizeof(int*));
    printf("Size of float*: %ld bytes\n",sizeof(float*));
    printf("Size of double*: %ld bytes\n",sizeof(double*));
    //위 4줄 모두 포인터의 크기이기 때문에 4바이트로 출력

    return 0;
}