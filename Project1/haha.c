#include <stdio.h>
#include<time.h>
void main() {
    int money, remain, button, coin500, coin100, coin50, coin10;
    printf("���Աݾ��� �Է��ϼ���:");
    scanf("%d", &money);
    while (1) {
        printf("������ ���ϸ� 1��,�׿��� ���� ��ȯ:");
        scanf("%d", &button);
        if (button != 1 || money < 200) {
            break;
        }
        if (button == 1); {
            if (money >= 200) {
                printf("��������\n");
                money = money - 200;
            }
        }
    }
    remain = money;
    coin500 = remain/ 500;
    coin100 = (remain - coin500 * 500) / 100;
    coin50 = (remain % 100) / 50;
    coin10 = (remain - coin500 * 500 - coin100 * 100 - coin50 * 50)/10;
    printf("�����ݾ�=%d 500��:%d�� 100��:%d�� 50��:%d�� 10��:%d��\n", remain, coin500, coin100, coin50, coin10);

}
/*void main()
{
    int num, in_val, cnt = 0;
    num = rand() % 10;
    scanf("%d", &in_val);
    while (num != in_val)
    {
        if (in_val > num) printf("%d���� �۽��ϴ�\n", in_val);
        else printf("%d���� Ů�ϴ�\n", in_val);
        cnt++;
        scanf("%d", &in_val);
    }
    printf("�����Դϴ� %d��° �Դϴ�",cnt+1);
}/*
