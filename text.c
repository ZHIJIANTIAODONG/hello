#include <stdio.h> //头文件.h
#include <stdbool.h>
#include <string.h>

/*/int main(void)

{
  int a = 10;
  char c = '1';
  float f = 10.1;
  double d = 10.11;
  bool b = 1;

    printf("变量a空间里存放了一个数值为：%d\n",a);
    printf("变量c空间里存放了一个数值为：%c\n",c); 
    printf("变量f空间里存放了一个数值为：%f\n",f);
    printf("变量d空间里存放了一个数值为：%lf\n",d);
    printf("变量b空间里存放了一个数值为：%d\n",b);
     
  return 0;*/

   /*int main()
  {
    char ret;
    char sty[2]={"1"};
    char dst[4]={"5134"};

    printf("1.sty=%s\n",sty);

    strcpy(sty, dst);

    printf("2.sty=%s\n",sty);


    
  }*/



/*int main(void)
{
    //int ret;

    //char str[15] = {"1"};
    char str[2] = {"1"};
    char dst[13] = {"2324523453"};

    printf("1、str: %s\n", str);

    strcpy(str, dst);    //越界 存储 数据

    printf("2、str: %s\n", str);    //越界 访问 数据


    //strcpy(str, dst);   //把 dst 内容复制  并 覆盖到str空间中
    //printf("3、str: %s\n", str);
}*/

/*int main ()
{
  int *a;
  ////
  char *b;
  short *e;
  long *f;
  float *c;
  double *d;
  printf("int=%ld\n",sizeof(&*a));
  printf("char=%p\n",sizeof(&*b));
  printf("short=%p\n",sizeof(&*e));
  printf("long=%p\n",sizeof(&*f));
  printf("float=%p\n",sizeof(&*c));
  printf("double=%p\n",sizeof(&*d));
  return 0;
}*/

/*
int main()
{
  double a=1.0;

  double  *p = &a;

  printf("%lf\n",*p);

  *p=100.1;

  printf("%.10lf\n",*p);
  printf("%lf\n",a);

  return 0;
}*/


//花时间搞清楚
/*int main()
{
  int str[10] = {1,3,5,7,9,11,13,8,9};

  int *p = &str[0];

  p+=2;

  printf("*p == %d\n",*p); //5

  printf("*p++ == %d\n",*p++); //先执行*p，再++  //5 - 7
  printf("%d\n",*p);
  printf("%p\n",&*p);
  //相当于a = *p++，此时先把*p赋予给a，让后p自加，此时指针发生偏移，地址改变

  printf("(*p)++ == %d\n",(*p)++);  //7 - 8
  //先执行括号内的内容
  //printf("(*p)++ == %d\n",++(*p));
  printf("%d\n",*p);
  printf("%p\n",&*p);
  //a = (*p)++ 此时先把*p赋予给a， 让后进行解引符的运算， 最后在对解引符得到的值进行自加 ， 因此地址没有改变

  printf("*++p == %d\n",*++p);//先自加再解析 9 - 9
  printf("%p\n",&*p);
  printf("%d\n",*p);
  // a = *++p, 此时先对p进行自加， 指针发生偏移 ，地址改变 ，解引后为偏移后的空间位置对应的值

  printf("++*p == %d\n",++*p);//先自加再解析 10 - 10
  printf("%d\n",*p);
  printf("%p\n",&*p);
  // a = ++*p 此时先对p进行解引， 得到的值进行自加， 指针没有发生偏移 ，地址不变， 空间内的值发生改变

  return 0;
}*/

/*int main()
{
  //char num =100;
  int a =  1;
  int *p = &a;
  printf("%d\n",a);
  printf("%d\n",*p);
  printf("%p\n",p);
  //printf("%c\n",num);
  return 0;
}*/

/*野指针
int main()
{
  int *p;  //系统赋值为随机值，非法访问，未知空间
  printf("%p\n",p);

  printf("%d\n",*p);

  *p = 100; //非法写入 未知空间


  printf("%d\n",*p);
  return 0;
}
*/

/*void指针简单应用*/
/*int main()
{
  char c = '1';
  void *p = NULL;
  p = &c;
  printf("c == %c\n",*(char*)p);
  //先把void型指针转换为char型指针
  //再解引里面的地址值，找到对应地址值的空间
  //将空间数据取出来
}*/
#include <stdlib.h>

/*int main()
{
  void *p = malloc(10);
  //分配10个空间字节，并反馈空间地址值，使用void型指针变量保存反馈的地址值
  *(char *)p = '1';
  *(int*)p = 100;
  (int *)p++;
  *(int*)p = 200;
  printf("%d",*(int *)p);

}*/

/*
int main()
{
  //void *p = calloc(4,sizeof(int));

  void *p = calloc(4,1);

  printf("%s\n",(char *)p);

  strcpy((char *)p , "123");

  printf("%s\n",(char *)p);

  p=realloc(p,10);

  strcpy((char*)p,"123456789");

  printf("%s\n",(char*)p);
}*/

/**/
/*int main()
{
  char *p = "123";
  printf("%s\n",p);
  //与数组的区别是空间大小不一样
  char str[10] = "123";
  //定义数组，分配连续空间10个字节，并把数据123\0存贮再空间里
  //空间大小为10个字节
  printf("%s\n",str);

  int a = 0;
  int *p1=&a;
  printf("%p\n",p1);
  printf("%s\n",p1);
}*/

/*int main()
{
  char *p = "123";
  //"123"字符串为常量，数据不可改，一旦更改则数据不再为原有数据


  char str[10] = "123";

  printf("%s,%s\n",p,str);


  int i;
  for(i=0;i<10;i++)
  {
    printf("%c\n",str[i]);
  }

  int a;
  for(a=0;a<strlen("123");a++)
  {
    printf("%c\n",*p++);
  }


  str[0] = '5';
  printf("%s\n",str);



}*/
/*int main()
{
  char str[10] = "123";
  char (*p)[10] = &str;
  //str的类型为char[10]
  //因此取str的地址p应该为其相同的类型
  //char *p[10]，表达不行的原因是[]的优先级较高
}*/
/*int main()
{
  int arr[5] = {1,2,4,7,9};
  arr[0] = 8;
  //等价于*（arr + 0） =8；
  //arr在这里表示数组首元素地址
  printf("%d\n",arr[0]);
  arr[1] = 9;
  printf("%d\n",arr[1]);
  int i = 0;
  for (size_t i = 0; i < 5; i++)
  {
    
    printf("%d\n",arr[i]);
  }

  //a[i]   a为数组名 i 为下标
  // *(a + i)
  //*(i + a) 
  //i[a]
  //arr arr+1 arr+2 都是地址
  //arr[0]  arr[1] 都是元素
}*/

/*各种数组字符串的输出*/
/*int main()
{
  char str[10] = "123456";

  printf("第%d行的数据 %p \n",__LINE__,str);//首元素地址
  printf("%s \n",str);//把整个数组里的字符串打印
  printf("%p \n",&str);

  printf("%c \n",str[0]);
  printf("%p \n",str+5);
  printf("%s \n",str+5); //打印该地址的字符


  printf("%c \n",str[5]);//取下标为5的数据

  printf("%c \n",*str+5);//解引用首元素地址，得到值后加5
  printf("%c \n",*(str+5));//先指针偏移，再解引用
  printf("%p \n",&str[5]);//取下标为5的空间的地址
  printf("%c \n",*&str[5]); //取地址后解引用，得到下标为5的数据
  printf("%p \n",&*&str[5]); // &与*可以抵消,相当于取下标为5的地址

}*/

/*
void main()
{
  int arr[5]={1,2,3,4,5};
  int (*p)[5] = &arr;
  printf("%d\n",*arr);
  //int (*p)[5] = NULL;
  //p = &arr
  //首元素地址，然后解引用
  printf("%p\n",*p++);
  p--;
  //

  printf("%p\n",p[0]);
  //p[0] -> *(p + 0)

  printf("%p\n",*p);
  //*(p + 0) -> *(&arr+0) ->p

  printf("%p\n",*(p+1));
  //*(p+1) -> *(&arr +1) ->&arr+1 是整个数组地址+1也就是+1*int[5]

  printf("%p\n",&arr[1]);
  printf("%d\n",*(arr+1));

  printf("%d\n",**p);
  //*（*p） -> *(arr)
  printf("%d\n",*p[0]);
  // *p[0] ->  **(p + 0) -> *(*p) ->*(arr)
  printf("%d\n",*p[1]);
  // *p[1] ->  **(p + 1) 偏移了20个字符跳出该数组


}*/

/*int main()
{
  const int *p =&a;//常量指针
  //不可以提供*p改变指针内部数字
  //可以提供指向其他地址改变内部数字
  int *const p =&b;//指针常量
  //不可以改变指针的地址指向
  //可以提供*p赋值改变指针内部数字
  int a=10,b= 30;
  const int * const p = &a;
  //指针方向与赋值皆不行
  a=30;
  //*p=50;
}*/

/*int main()
{
  int a= 10;
  printf("%.5d\n",a);

}*/

/*int main()
{
  int add[10] = {1,2,3,4,5,6};
  int *p = add;

  int (*p1)[10] = &add;

  int i = 0;
  for(i=0;i<10;i++)
  {
    //printf("%p\n",(*p1++));//不懂
    //可能偏移一个int[10]字节

    //printf("%d\n",(*p1)[i]);
    //(*p1)[i]  -> *(*p1+i)

    //printf("%d\n",add[i]);

    //printf("%p\n",(*p1+i));
    //p1指针地址偏移一个int
    
    //printf("%d\n",*(*p1+i));
    //*p1表示的是该数组中元素的地址
  }
}*/

/*int main()
{
  int arr[2][3] = {{1,2,3},{4,5,6}};

  int (*p)[3] = arr;
  //此处取arr的首元素地址,其类型为int[3]
  //数组指针要与数组类型一致
  int (*q)[2][3] = &arr;
  int i,j;
  for(i=0;i<2;i++)
  {
    for(j=0;j<3;j++)
    {
      //printf("%d\n",(*q)[i][j]);
      //*(*(*q+i)*+j)
      printf("%d\n",*(*(*q+i)+j));
    }
  }
}*/

// const 与 *，从左向右，从const先碰到*，不能对*p直接进行赋值，先碰到p，不能取地址方式 






