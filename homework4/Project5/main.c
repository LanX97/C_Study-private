#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	float x, y;
	int W, Wa, Wb, Wc, Wd;
	char area;

	srand((unsigned)time(NULL));

	printf("�����������ڵ�x���꣺");
	scanf("%f", &x);
	printf("�����������ڵ�y���꣺");
	scanf("%f", &y);

	if (x>0 && x<779 && y>481 && y<562) {
		printf("������A����С�ĵ��ף�\n");
		area = 'A';
	}
	else if(x>0 && x<155 && y>160 && y<481){
		printf("������B����С�������壡\n");
		area = 'B';
	}
	else if (x>0 && x<779 && y>0 && y < 160) {
		printf("������C����С�ĵ��������\n");
		area = 'C';
	}
	else if (x>457 && x<779 && y>160 && y<481) {
		printf("������D�������Բ���������\n");
		area = 'D';
	}
	else if (x>155 && x<457 && y>160 && y<481) {
		printf("������O������ȥ������ʣ�\n");
		area = 'O';
	}
	else if (x<0 || x>779 || y<0 || y>562) {
		printf("���������������⣡\n");
		area = 'P';
	}
	else {
		printf("������������߽�����ϣ�\n");
		area = 'P';
	}

	switch (area) {
		case 'A':
			printf("��ʼ���ʽ������...\n");
			printf("������A����������A��������ת�����̽���O����ʼ�������...\n");

			printf("�밴W��������Ķ������֣�");
			while (1) {
				if ('W' == getchar() || 'w' == getchar()) {
					W = rand() % 100;
					printf("��Ķ�������Ϊ��%d\n", W);
					break;
				}else {
					printf("�밴W��������Ķ������֣�");
				}
			}

			printf("�밴G������A�������Ķ������֣�");
			while (1) {
				if ('G' == getchar() || 'g' == getchar()) {
					Wa = rand() % 10 + 80;
					printf("A�������Ķ�������Ϊ��%d\n", Wa);
					break;
				}
				else {
					printf("�밴G������A�������Ķ������֣�");
				}
			}

			if (W >= Wa)
				printf("�ɹ���������O����������ʳɹ���");
			else
				printf("���ױ�ը������ʧ�ܣ�");

			break;

		case 'B':
			printf("��ʼ���ʽ������...\n");
			printf("������B����������B��������ת�����̽���O����ʼ�������...\n");

			printf("�밴W��������Ķ������֣�");
			while (1) {
				if ('W' == getchar() || 'w' == getchar()) {
					W = rand() % 100;
					printf("��Ķ�������Ϊ��%d\n", W);
					break;
				}
				else {
					printf("�밴W��������Ķ������֣�");
				}
			}

			printf("�밴G������B�������Ķ������֣�");
			while (1) {
				if ('G' == getchar() || 'g' == getchar()) {
					Wb = rand() % 11 + 45;
					printf("B�������Ķ�������Ϊ��%d\n", Wb);
					break;
				}
				else {
					printf("�밴G������B�������Ķ������֣�");
				}
			}

			if (W >= Wb)
				printf("�ɹ���������O����������ʳɹ���");
			else
				printf("�������壬����ʧ�ܣ�");

			break;

		case 'C':
			printf("��ʼ���ʽ������...\n");
			printf("������C����������C��������ת�����̽���O����ʼ�������...\n");

			printf("�밴W��������Ķ������֣�");
			while (1) {
				if ('W' == getchar() || 'w' == getchar()) {
					W = rand() % 100;
					printf("��Ķ�������Ϊ��%d\n", W);
					break;
				}
				else {
					printf("�밴W��������Ķ������֣�");
				}
			}

			printf("�밴G������C�������Ķ������֣�");
			while (1) {
				if ('G' == getchar() || 'g' == getchar()) {
					Wc = rand() % 10 + 60;
					printf("B�������Ķ�������Ϊ��%d\n", Wc);
					break;
				}
				else {
					printf("�밴G������C�������Ķ������֣�");
				}
			}

			if (W >= Wc)
				printf("�ɹ���������O����������ʳɹ���");
			else
				printf("�⵽����������ʧ�ܣ�");

			break;

		case 'D':
			printf("��ʼ���ʽ������...\n");
			printf("������D����������D��������ת�����̽���O����ʼ�������...\n");

			printf("�밴W��������Ķ������֣�");
			while (1) {
				if ('W' == getchar() || 'w' == getchar()) {
					W = rand() % 100;
					printf("��Ķ�������Ϊ��%d\n", W);
					break;
				}
				else {
					printf("�밴W��������Ķ������֣�");
				}
			}

			printf("�밴G������D�������Ķ������֣�");
			while (1) {
				if ('G' == getchar() || 'g' == getchar()) {
					Wd = rand() % 10 + 10;
					printf("D�������Ķ�������Ϊ��%d\n", Wd);
					break;
				}
				else {
					printf("�밴G������D�������Ķ������֣�");
				}
			}

			if (W >= Wd)
				printf("�ɹ���������O����������ʳɹ���");
			else
				printf("������ʧ������ʧ�ܣ�");

			break;

		case 'O':
			printf("������ɣ��ȳ����ʣ�");
			break;
		case 'P':
			printf("����ʧ�ܣ�");
			break;
	}

	return 0;
}