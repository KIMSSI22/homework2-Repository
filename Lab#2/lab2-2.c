#include <stdio.h>
int main()
{
    printf("김민서 2022040010\n");
    int i; //변수
    int *ptr;  //포인터
    int **dptr;  //이중포인터

    i = 1234;

    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);  //변수 i는 1234를 가짐으로 출력
    printf("address of i == %p\n", &i);  //i의 주소 출력
    printf("value of ptr == %p\n", ptr);  //ptr이 가지는 건 없음(쓰레기값 출력)
    printf("address of ptr == %p\n", &ptr);  //ptr의 주소 출력

    ptr = &i; /* ptr is now holding the address of i */ //변수 ptr에 i 주소 넣음

    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);  //그대로 1234 출력
    printf("address of i == %p\n", &i);  //i의 주소 출력
    printf("value of ptr == %p\n", ptr);  //ptr은 i의 주소 가짐으로 출력
    printf("address of ptr == %p\n", &ptr);  //ptr의 주소 출력
    printf("value of *ptr == %d\n", *ptr);  //ptr이 가지고 있는 주소(i)가 가지고 있는 값 출력(1234 출력)

    dptr = &ptr; /* dptr is now holding the address of ptr */  //이중포인터 변수 dptr에 ptr 주소 넣음

    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);  //1234 출력
    printf("address of i == %p\n", &i);  //i의 주소 출력
    printf("value of ptr == %p\n", ptr);  //ptr은 i의 주소 가짐으로 출력
    printf("address of ptr == %p\n", &ptr);  //ptr의 주소 출력
    printf("value of *ptr == %d\n", *ptr);  //ptr이 가지고 있는 주소가 가지고 있는 값 출력(1234 출력)
    printf("value of dptr == %p\n", dptr);  //dptr은 ptr의 주소를 가짐으로 출력
    printf("address of dptr == %p\n", &dptr);  //dptr의 주소 출력
    printf("value of *dptr == %p\n", *dptr);  //dptr이 가지고 있는 주소(ptr 주소)가 가지고 있는 값은 i의 주소로 출력 
    printf("value of **dptr == %d\n", **dptr);  //dptr이 가지고 있는 주소(ptr 주소)가 가지고 있는 주소(i의 주소)가 가지고 있는 값 출력

    *ptr = 7777; /* changing the value of *ptr */  //ptr이 가지고 있는 주소가 가지고 있는 값을 7777로 바꿈

    printf("\n[after *ptr = 7777] \n"); 
    printf("value of i == %d\n", i);  //ptr을 이용해 주소가 가지고 있는 값 1234를 7777로 바꿨기 때문에 7777 출력
    printf("value of *ptr == %d\n", *ptr);  //ptr이 가지고 있는 주소(i)가 가지고 있는 값 출력(7777 출력)
    printf("value of **dptr == %d\n", **dptr); //dptr이 가지고 있는 주소(ptr 주소)가 가지고 있는 주소(i의 주소)가 가지고 있는 값 출력

    **dptr = 8888; /* changing the value of **dptr */  //dptr이 가지고 있는 주소(ptr)가 가지고 있는 주소(i)가 가지고 있는 값을 8888로 바꿈

    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);  //dptr을 이용해 주소가 가지고 있는 값 7777를 8888로 바꿨기 때문에 8888 출력
    printf("value of *ptr == %d\n", *ptr);  //ptr이 가지고 있는 주소(i)가 가지고 있는 값 출력(8888 출력)
    printf("value of **dptr == %d\n", **dptr);  //dptr이 가지고 있는 주소(ptr 주소)가 가지고 있는 주소(i의 주소)가 가지고 있는 값 출력
    return 0;
}