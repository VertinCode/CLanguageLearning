/*题目描述
任意输入一个字符，判断其ASCII是否是奇数，若是，输出YES，否则，输出NO。
例如，字符A的ASCII值是65，则输出YES，若输入字符B(ASCII值是66)，则输出NO。
输入格式
输入一个字符。
输出格式
如果其ASCII值为奇数，则输出YES，否则，输出NO。
样例输入
A
样例输出
YES*/
# include <stdio.h>
        int main() {
            char ch;
            scanf("%c",&ch);
            if (ch % 2 == 0){
                printf("NO");
            }
            else{
                printf("YES");
            }
            return 0;
        }