#include <stdio.h>
#include<time.h>
void main() {
    int money, remain, button, coin500, coin100, coin50, coin10;
    printf("투입금액을 입력하세요:");
    scanf("%d", &money);
    while (1) {
        printf("지급을 원하면 1을,그외의 수는 반환:");
        scanf("%d", &button);
        if (button != 1 || money < 200) {
            break;
        }
        if (button == 1); {
            if (money >= 200) {
                printf("음료지급\n");
                money = money - 200;
            }
        }
    }
    remain = money;
    coin500 = remain/ 500;
    coin100 = (remain - coin500 * 500) / 100;
    coin50 = (remain % 100) / 50;
    coin10 = (remain - coin500 * 500 - coin100 * 100 - coin50 * 50)/10;
    printf("남은금액=%d 500원:%d개 100원:%d개 50원:%d개 10원:%d개\n", remain, coin500, coin100, coin50, coin10);

}
/*void main()
{
    int num, in_val, cnt = 0;
    num = rand() % 10;
    scanf("%d", &in_val);
    while (num != in_val)
    {
        if (in_val > num) printf("%d보다 작습니다\n", in_val);
        else printf("%d보다 큽니다\n", in_val);
        cnt++;
        scanf("%d", &in_val);
    }
    printf("정답입니다 %d번째 입니다",cnt+1);
}/*
