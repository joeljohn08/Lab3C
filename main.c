#include <stdio.h>
int sum(int n);
void print_n(const char *s, int n);

int sum_n(int n)
{
 
    if(n != 0)
    {
        return n + sum_n(n - 1);
    }
    else
    {
        return n;
    }
}

void print_n(const char *s, int n)
 {
    if(n == 0)
    {
     return;
    }
    else
    {
      printf("%s\n", s);
      print_n(s,n-1);
    }
     return ;
 }

int main(void) 
{
 int num;
 char *string;
 printf("Enter an int: ");
 scanf("%d", &num);
 printf("Sum is %d ", sum_n(num));
 int tot = sum_n(num);
 printf("Enter a string: ");
 scanf("%c", string);
 print_n(string, tot);

  return 0;

}
