#include <stdio.h>

void main()
{
  int a, b, c;
  float avg;
  printf("Enter a\n");
  scanf("%d",&a);
  printf("Enter b\n");
  scanf("%d",&b);
  printf("Enter c\n");
  scanf("%d",&c);

  avg = (a+b+c)/3.0;
  printf("The average of 3 number is: %f", avg);  
  return;
}










// gcc num.c
// ./a.exe
// original path
// %SystemRoot%\system32;%SystemRoot%;%SystemRoot%\System32\Wbem;%SYSTEMROOT%\System32\WindowsPowerShell\v1.0\;C:\Program Files\Git\cmd;C:\Program Files\nodejs\;C:\ProgramData\chocolatey\bin;