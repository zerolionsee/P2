// #include <stdio.h>
/* int main()
{
  int num1=0;
  int num2=0;
  int sum=0;
  printf("input num1=\nnum2=\n");
  scanf("%d%d",&num1,&num2);//num1、num2存入地址
  sum=num1+num2;
  printf("sum=%d\n",sum);
} */

/* int main()
{
  const int num=4;//const修饰的常变量
  printf("num=%d\n",num);
  // num=8;
  printf("num=%d\n",num);
  return 0;
  const int n = 10; // n是变量，但是又有常属性，所以说n是常变量。
  int arr[n]={0};
  return 0;
} */
//define 定义的标识符常量
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
int main()
{
  enum Sex s=MALE;
  s=female;
  printf("%d\n",MALE);//0
  printf("%d\n",FEMALE);//1
  printf("%d\n",SECRET);//2
  return 0;
} */
#include <stdio.h>
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
  printf("%d\n",strlenth(arr1));
  printf("%d\n", strlenth(arr2));
  printf("%d\n", strlenth(arr3));
  return 0;
}
