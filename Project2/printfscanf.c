//#include <stdio.h>
//int main_printfscanf(void)
//{
//	//������ ������ ���� ����
//	int age = 12;
//	printf("%d\n" , age);
//	age = 13; 
//	printf("%d\n", age); /*���� ���̿� ���°Ŵ� �ּ��̿��� �ȶ�*/
//	
//	printf("1\n");
//	//printf("2\n"); /*�ƴϸ� //�̰� �ΰ� �ص� �� ���� �ּ����� ó��*/
//	printf("3\n");
//
//	//�Ǽ��� ������ ���� ����
//	float f = 46.5f;  //float ������ ���� �ڿ� f ���
//	printf("%.2f\n", f); //.2 �� �Ҽ��� ���� �ǹ�
//	double d = 4.428;
//	printf("%.2lf\n", d);
//
//	//���
//	const int YEAR = 2000; //const �� ��� �ǹ�
//	printf("�¾ �⵵ : %d\n", YEAR);
//
//	//printf��
//	//����
//	int add = 3 + 7; //10
//	printf("3 + 7 = %d\n", add);
//	printf("%d x %d = %d\n", 26, 40, 26 * 40); //������� ���
//
//	//scanf
//	//Ű���� �Է��� �޾Ƽ� ����
//	int input;
//	printf("���� �Է��ϼ��� : ");
//	scanf_s("%d", &input); //"&"�� input�̶�� ������ ���ǵ� ���� ���� �Է¹ްڴٴ� �ǹ�
//	printf("�Է°� : %d\n", input);
//
//	int one, two, three;
//	printf("3���� ������ �Է��ϼ��� :");
//	scanf_s("%d %d %d", &one, &two, &three);
//	printf("ù��° �� : %d\n", one);
//	printf("�ι�° �� : %d\n", two);
//	printf("����° �� : %d\n", three);
//	
//	//����(�� ����), ���ڿ�(�� ���� �̻��� ���� ����)
//	char c = 'A';
//	printf("%c\n", c);
//
//	//��������
//	char str[256];
//	scanf_s("%s", str, sizeof(str)); //���ڿ��� %s, str�տ� &����, �׸��� ũ�� ��� �ʿ� !����� �ȵǴ���
//	printf("%s\n",str);
//
//
//	������Ʈ
//	�������� �������� ������ �Լ� (���� �ۼ�)
//	�̸�? ����? ������? Ű? ���˸�?
//	char name[256];
//	printf("�̸��� ������?");
//	scanf_s("%s", name, sizeof(name));
//
//	int age;
//	printf("����̿���?");
//	scanf_s("%d", &age);
//
//	float weight;
//	printf("�����Դ� �� kg �̿���?");
//	scanf_s("%f", &weight);
//
//	double height;
//	printf("Ű�� �� cm �̿���?");
//	scanf_s("%lf", &height);
//
//	char what[256];
//	printf("���� ���˸� ���������?");
//	scanf_s("%s", what, sizeof(what));
//
//	���� ���� ���
//	printf("\n\n--- ������ ���� ---\n\n");
//	printf("�̸�        : %s\n", name);
//	printf("����        : %d\n", age);
//	printf("������      : %.2f\n", weight);
//	printf("Ű          : %2.lf\n", height);
//	printf("����        : %s\n", what);
//
//
//
//
//	return 0;
//}