// 简单计?? 由键盘任意输??2个数，分别计算它们的和、差、积、商??
/*简单计??*/
// #include<stdio.h>
// int main()
// {
//     float a,b;
//     float h,c,j,s;
//     scanf("%f%f", &a,&b);
//     h=a+b;
//     c=a-b;
//     j=a*b;
//     s=a/b;
//     printf("??=%f,??=%f,??=%f,??=%f\n",h,c,j,s);
//     return 0;
// }

// 计算梯形的面?? 已知梯形的上底、下底和高，计算梯形的面积??
// #include <stdio.h>
// int main()
// {
//     float bottom, top, high,area;
//     printf("请输入梯形的下底:");
//     scanf("\n%f", &bottom);
//     printf("请输入梯形的上底:");
//     scanf("\n%f", &top);
//     printf("请输入梯形的高：");
//     scanf("\n%f", &high);
//     area = (bottom+top)*high*0.5;
//     printf("梯形的面积:%f",area);
//     return 0;
// }

// 输出字符对应的ASCII?? 任意输入一个字符，输出此字符对应的ASCII码??
// #include<stdio.h>
// int main(){
//     char a;
//     scanf("%s",&a);
//     printf("%d",a);
// }

// // 数据类型长度测试   编写程序，测试所使用的计算机系统字符型、短整型、整形、长整型、单精度实型、双精度实型所占有的字节数量。
// #include<stdio.h>
// int main(){
//     printf("size of char=%d\n",sizeof(char));
//     printf("size of int=%d\n",sizeof(int));
//     printf("size of short=%d\n",sizeof(short));
//     printf("size of long int=%d\n",sizeof(long int));
//     printf("size of float=%d\n",sizeof(float));
//     printf("size of double=%d\n",sizeof(double));

// }

// 成绩判断  输入一个学生的数学成绩，如果它低于60，输出“Fail”，否则，输出“Pass”。不要改变与输入输出有关的语句??
// #include <stdio.h>
// int main()
// {
//     int score;
//     scanf("%d", &score);
//     if (score <= 60)
//         printf("False");

//     else
//         printf("True");

//     return 0;
// }

// 字符转换  输入一个字符，如果它是大写字母，输出相应的小写字母；如果它是小写字母，输出相应的大写字母；否则，原样输出。不要改变与输入输出有关的语句??
// #include <stdio.h>
// int main()
// {

//     char letter;
//     letter = getchar();
//     if (letter >= 'A' && letter <= 'Z')
//     {

//         letter = letter + 32;
//         printf("%c", letter);
//     }
//     else if (letter >= 'a' && letter <= 'z')
//     {
//         letter = letter - 32;
//         printf("%c", letter);
//     }
//     else
//     {
//         printf("%c", letter);
//     }

//     return 0;
// }

// 利用海伦公式求三角形面积 三角形三个边??
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, area;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        d = (a + b + c) / 2;
        area = sqrt(d * (d - a) * (d - b) * (d - c));
        printf("三角形面积：%f", area);
    }
    else
    {
        printf("这三条边无法组成三角形！");
    }
    return 0;
}

//  判断是否能构成一个三角形   从键盘输三个数，判断是否能将它们作为三角形的三条边构成一个三角形。若能，输出“Yes”，否则，输出“No”??
//  按从大到小排序三个数 从键盘输入三个数，将它们按从大到小进行排序，然后输出??
