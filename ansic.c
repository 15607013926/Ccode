#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main(){
//    
//    float a[1];
//    scanf("%s",&a);
//    
//  
//    printf("%d",a);
//     
//    return 0;
//}
//int main() {
//
//    float a;
//    scanf("%f", &a);
//    printf("%0.f",a);
//    return 0;

//}
//#include <stdio.h>
//int main()
//{
//    
//        float val;
//    scanf("%f", &val);
//    printf("%.0f\n", val);
//    return 0;
//}
//
//#include<stdio.h>
//int main() {
//
//    long int a;
//    float b, c, d;
//    scanf("%d", &a);
//    
//    if ((a > 20000000) || (a < 1))
//    {
//        printf("—ß∫≈ ‰»Î¥ÌŒÛ");
//    }
//    scanf("%f,%f,%f", &b, &c, &d);
//    if ((b < 100) || (b > 0) || (c < 100) || (c > 0) || (d <100) || (d > 0)) {
//        
//        printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", a, b, c, d);
//    }
//    else {
//        printf("≥…º® ‰»Î¥ÌŒÛ");
//    }
//    return 0;
//
//}
//#include<stdio.h>
//int main() {
//
//
//    char a, b;
//    scanf("%s", &a);
//    
//    scanf("%s", &b);
//
//    
//    char e = b + 32;
//
//
//    printf("%c\n", a + 32);
//    printf("%c", e);
//
//    return 0;
//
//}
#include<stdio.h>
//int main() {
//
//
//    char a, b;
//    scanf("%s", &a);
//    scanf("%s", &b);
//
//
//    printf("%c\n", a + 32);
//    printf("%c", b + 32);
//
//    return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//    char ch;
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch >= 'A' && ch <= 'Z')    ch += 32;
//        putchar(ch);
//    }
//}
#include <stdio.h>
int main()
{
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if (ch >= 'A' && ch <= 'Z') {
            ch += 32;
            putchar(ch);
        }
     
    }

}