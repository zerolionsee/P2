/* #include <stdio.h>
int main()
{
  int num1=0;
  int num2=0;
  int sum=0;
  printf("input num1=\nnum2=\n");
  scanf("%d%d",&num1,&num2);//num1、num2存入地址
  sum=num1+num2;
  printf("sum=%d\n",sum);
} */
/* #include <stdio.h>
int main()
{
  const int num=4;//const修饰的常变量
  printf("num=%d\n",num);
  // num=8;
  printf("num=%d\n",num++);
  return 0;
  const int n = 10; // n是变量，但是又有常属性，所以说n是常变量。
  int arr[n];
  return 0;
} */
// define 定义的标识符常量
/* #define MAX 5
int main()
{
  printf("max=%d\n",MAX);
} */
/* enum Sex
{
  MALE,
  FEMALE,
  SECRET
};
#include <stdio.h>
int main()
{
  enum Sex s = MALE;
  s = FEMALE;
  printf("%d\n", MALE);   // 0
  printf("%d\n", FEMALE); // 1
  printf("%d\n", SECRET); // 2
  return 0;
} */
/* #include <stdio.h>
#include <string.h>
int main()
{
  char arr1[]="abc";//"abc"--'a'、'b、'、'c'、'\0'。\0代表结束
  char arr2[]={'a','b','c',0};//'\0'值是0，'a'是97，'A'是65  ASCII
  char arr3[]={'a','b','c','\0'};//'\0'值是0，等价。还用'0'值是48，NULL值是0
  // char arr4[]={'a','b','c',NULL};//'\0'值是0，等价。还用'0'值是48，NULL值是0
  printf("%s\n",arr1);
  printf("%s\n",arr2);
  printf("%s\n",arr3);
  // printf("%s\n",arr4);
  printf("%d\n",sizeof(arr1));
  printf("%d\n",sizeof(arr2));
  printf("%d\n",sizeof(arr3));
  // printf("%d\n",sizeof(arr4));
  printf("%d\n",strlen(arr1));
  printf("%d\n", strlen(arr2));
  printf("%d\n", strlen(arr3));
  return 0;
} */
/* #include <stdio.h>
#include <string.h>
int main()
{
    // char c ;
    // c="c:\test\32\test.exe";

    char arr1[] ="c:\test\32\test.exe";
    char arr2[]="hekun";
    printf("%d\n", sizeof(arr1));
    printf("%d\n", sizeof(arr2));
    printf("%d\n", strlen(arr1));
    printf("%d\n", strlen(arr2));
    char arr[]="1";
    char c='a';
    int i=8;
    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(c));
    printf("%d\n",sizeof(i));
    printf("%c\n",'\70');
    printf("%c\n",'\x39');
    printf("%d\n",48);
    printf("%c\n",48);
    printf("%d\n",'48');
return 0;
} */

/* #include <stdio.h>
void test()
{
  static int a=1 ;//staitic修饰局部变量，生命周期变长
  a++;
  printf("a=%d\n",a);
}
int main()
{
  int i=0;
  while (i<5)
  {
    test();
    i++;
  }
  return 0;
} */
/* #include <stdio.h>
int main()
{
  extern int g_val;
  printf("g_vla=%d\n",g_val);
  return 0;
}
 */
//说明全局变量
/* extern int Add(int,int);
#include <stdio.h>
int main()
{
  int a =10;
  int b=20;
  int sum=Add(a,b);
  printf("%d\n",sum);
  return 0;

} */
/* #include <stdio.h>
// #define MAX 100//定义标识符常量
// #define 定义宏-带参数
#define MAX(x,y) (x>y?x:y)
int main()
{
  int a=10;
  int b=20;
  int max=MAX(a,b);
  printf("max=%d\n",max);
} */
/* #include <stdio.h>
int main()
{
  int a = 1;
  int b = 2;
  int c = 2;
  int d = 3;
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int i = 0;
  while(i<10)
  {
    printf("%d\n", arr[i]);
    i++;
  }
} */
/* #include <stdio.h>
int main()
{
  int a = 3;
  int b = 4;
  int c;
  c = a & b;
  printf("%d\n", c);
} */
/* #include <stdio.h>
int main()
{
  int a = 10;
  printf("%d\n", a);
  printf("%d\n", !a);
} */
/* #include <stdio.h>
int main()
{
  // int a = 10;
  // printf("%d\n", sizeof(a));
  // printf("%d\n", sizeof(int));
  // printf("%d\n", sizeof a);
  // printf("%d\n", sizeof int);
  int arr[10]={0};
  int n=0;
  printf("%d\n", sizeof arr);
  printf("%d\n", sizeof(arr));
  printf("%d\n", sizeof(arr) / sizeof(arr[0]));
  return 0;
} */
/* #include <stdio.h>
int main()
{
  int a = 3;
  int b = 4;
  printf("%d\n", '&');
}
 */
