#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	//printf("hello world\n");
//	scanf("%d", &a);
//	printf("%d\n", a);
//
//	return 0;
//}


//��дһ���������"hello world!"��
/*#include <stdio.h>
int main()
{

    printf("hello world!");

    return 0;

}*/


//��дһ���������һ����*����ɵ������Σ���ױ����߸���*����
/*#include <stdio.h>
int main()
{

    printf("   * \n  *** \n ***** \n*******\n");

    return 0;

}*/


//��дһ�������ܹ�������֪�����ߵ������ε������
#include <stdio.h>
#include <math.h>
int main()
{

    float a,b,c,s,l;

    scanf("%f %f %f", &a, &b, &c);

    l=(a+b+c)/2;

    printf("s=%f\n",sqrt(l*(l-a)*(l-b)*(l-c)));

    return 0;

}


//��дһ�������ܹ�����һԪ���η��̵ĸ���
/*#include <stdio.h>
#include <math.h>
int main()
{
    printf("������һԪ���η��̷��̵�abcֵ:\n");

    float a,b,c,x1,x2,s,l;

    scanf("%f %f %f", &a, &b, &c);

    s=b*b-4*a*c;

    l=sqrt(s);

    x1=(-b+l)/2*a,x2=(-b-l)/2*a;

    printf("�÷��̵ı��ʽΪ: \n(%f)x*x+(%f)x+(%f)=0 \n",a,b,c);

    if(s<0)

        printf("�÷���û��ʵ������");

    else

        printf("�÷��̵�����ʵ����Ϊ:x1=%f,x2=%f \n",x1,x2);

    return 0;

}*/


/*��дһ�����򣬸ó�����롢���Ӻ����к�����Ļ����ʾ������Ϣ��
We study the C Programming language.
We all like it.*/
/*#include <stdio.h>
int main()
{

    printf("We study the C Programing language. \nWe all like it.\n");

    return 0;

}*/


//��дһ����������Ļ����ʾ���������ѧ�źͳ������ڡ�
/*#include <stdio.h>
int main()
{

    printf("���������� \nѧ�ţ�10020222022001 \n�������ڣ�2000��1��1��\n");

    return 0;

}*/


/*��дһ����������Ļ����ʾ������Ϣ��
This Program prints a formulate:
72*88=6336
Ҫ��
(1)���밴������ʽ�������������
(2)6336���ܳ����ڳ����У������ǳ����������ģ�����%d�ĸ�ʽ���Ʒ������*/
/*#include <stdio.h>
int main()
{

    printf("This Program prints a formulate: \n72*88=%d\n",72*88);

    return 0;

}*/