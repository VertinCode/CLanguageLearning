/*输入格式
输入仅一行，有两个整数，第一个为确诊数，第二个为死亡数。
输出格式
输出仅一行，死亡率，以百分数形式输出，精确到小数点后3位。*/
#include <stdio.h>
    int main() {
        int confirmed, deaths;
        scanf("%d %d", &confirmed, &deaths);
        printf("%.3f%%\n", (float)deaths / confirmed * 100);
        return 0;
    }