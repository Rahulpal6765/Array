#include<stdio.h>
int main (){
    int age=22;
    int _age = 24;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u\n%u\ndifference is %u\n", ptr, _ptr, ptr - _ptr);

    _ptr = &age;

    printf("%u\n%u\ncomparison is %u", ptr, _ptr, ptr == _ptr);
}
