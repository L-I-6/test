// �򵥼�?? �ɼ���������??2�������ֱ�������ǵĺ͡��������??
/*�򵥼�??*/
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

// �������ε���?? ��֪���ε��ϵס��µ׺͸ߣ��������ε����??
// #include <stdio.h>
// int main()
// {
//     float bottom, top, high,area;
//     printf("���������ε��µ�:");
//     scanf("\n%f", &bottom);
//     printf("���������ε��ϵ�:");
//     scanf("\n%f", &top);
//     printf("���������εĸߣ�");
//     scanf("\n%f", &high);
//     area = (bottom+top)*high*0.5;
//     printf("���ε����:%f",area);
//     return 0;
// }

// ����ַ���Ӧ��ASCII?? ��������һ���ַ���������ַ���Ӧ��ASCII��??
// #include<stdio.h>
// int main(){
//     char a;
//     scanf("%s",&a);
//     printf("%d",a);
// }

// // �������ͳ��Ȳ���   ��д���򣬲�����ʹ�õļ����ϵͳ�ַ��͡������͡����Ρ������͡�������ʵ�͡�˫����ʵ����ռ�е��ֽ�������
// #include<stdio.h>
// int main(){
//     printf("size of char=%d\n",sizeof(char));
//     printf("size of int=%d\n",sizeof(int));
//     printf("size of short=%d\n",sizeof(short));
//     printf("size of long int=%d\n",sizeof(long int));
//     printf("size of float=%d\n",sizeof(float));
//     printf("size of double=%d\n",sizeof(double));

// }

// �ɼ��ж�  ����һ��ѧ������ѧ�ɼ������������60�������Fail�������������Pass������Ҫ�ı�����������йص����??
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

// �ַ�ת��  ����һ���ַ���������Ǵ�д��ĸ�������Ӧ��Сд��ĸ���������Сд��ĸ�������Ӧ�Ĵ�д��ĸ������ԭ���������Ҫ�ı�����������йص����??
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

// ���ú��׹�ʽ����������� ������������??
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
        printf("�����������%f", area);
    }
    else
    {
        printf("���������޷���������Σ�");
    }
    return 0;
}

//  �ж��Ƿ��ܹ���һ��������   �Ӽ��������������ж��Ƿ��ܽ�������Ϊ�����ε������߹���һ�������Ρ����ܣ������Yes�������������No��??
//  ���Ӵ�С���������� �Ӽ��������������������ǰ��Ӵ�С��������Ȼ�����??
