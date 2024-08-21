//Домашнее задание №6
//Задача 6. Возвести в степень
//Написать рекурсивную функцию возведения целого числа n в степень p. int recurs_power(int n, int p)
//Используя данную функцию, решить задачу.
//Данные на входе: Два целых числа -100 >= n >= 100 и 0 >= p >= 100
//Данные на выходе: Одно целое число n в степени p

#include <stdio.h>
int exponen(int n, int p)
{
 if (p == 0)
 return 1;
 return n * exponen(n,--p);
}

int main()
{
int n, p;
 scanf("%d %d", &n, &p);
 printf("%d", exponen(n, p));
 return 0;
}
