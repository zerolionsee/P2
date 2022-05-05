// static int g_val=2;//改变了变量的作用域
static int Add(int x ,int y)//staitic修饰函数，改变了函数的连接属性，外部连接属性
{
  int z=x+y;
  return z;
}
