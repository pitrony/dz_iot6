//Домашнее задание №6
//Задача 2. От A до B
//Составить рекурсивную функцию. Выведите все числа от A до B
//включительно, в порядке возрастания, если A < B, или в порядке убывания в противном случае.
//Данные на входе: Два целых числа через пробел.
//Данные на выходе: Последовательность целых чисел.

#include <stdio.h>
void print_a_b(int a, int b)
{
 if (a == b) 
   {
 printf("%d", a);
   } 
 else
      {
        if (a < b) printf("%d ", a++);
        if (a > b) printf("%d ", a--);
        print_a_b(a, b);
      }
}

int main()
{
int a, b;
 scanf("%d %d", &a, &b);
 print_a_b(a, b);
 return 0;
}
