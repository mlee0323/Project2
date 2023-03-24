//#include <stdio.h>
//int main_printfscanf(void)
//{
//	//정수형 변수에 대한 예제
//	int age = 12;
//	printf("%d\n" , age);
//	age = 13; 
//	printf("%d\n", age); /*여기 사이에 들어가는거는 주석이여서 안뜸*/
//	
//	printf("1\n");
//	//printf("2\n"); /*아니면 //이거 두개 해도 그 줄은 주석으로 처리*/
//	printf("3\n");
//
//	//실수형 변수에 대한 예제
//	float f = 46.5f;  //float 쓸때는 숫자 뒤에 f 사용
//	printf("%.2f\n", f); //.2 는 소숫점 개수 의미
//	double d = 4.428;
//	printf("%.2lf\n", d);
//
//	//상수
//	const int YEAR = 2000; //const 가 상수 의미
//	printf("태어난 년도 : %d\n", YEAR);
//
//	//printf란
//	//연산
//	int add = 3 + 7; //10
//	printf("3 + 7 = %d\n", add);
//	printf("%d x %d = %d\n", 26, 40, 26 * 40); //순서대로 출력
//
//	//scanf
//	//키보드 입력을 받아서 저장
//	int input;
//	printf("값을 입력하세요 : ");
//	scanf_s("%d", &input); //"&"는 input이라는 변수가 정의된 곳에 값을 입력받겠다는 의미
//	printf("입력값 : %d\n", input);
//
//	int one, two, three;
//	printf("3개의 정수를 입력하세요 :");
//	scanf_s("%d %d %d", &one, &two, &three);
//	printf("첫번째 값 : %d\n", one);
//	printf("두번째 값 : %d\n", two);
//	printf("세번째 값 : %d\n", three);
//	
//	//문자(한 글자), 문자열(한 글자 이상의 여러 글자)
//	char c = 'A';
//	printf("%c\n", c);
//
//	//여러글자
//	char str[256];
//	scanf_s("%s", str, sizeof(str)); //문자열은 %s, str앞에 &없이, 그리고 크기 명시 필요 !띄어쓰기는 안되더라
//	printf("%s\n",str);
//
//
//	프로젝트
//	경찰관이 범죄자의 정보를 입수 (조서 작석)
//	이름? 나이? 몸무게? 키? 범죄명?
//	char name[256];
//	printf("이름이 뭐예요?");
//	scanf_s("%s", name, sizeof(name));
//
//	int age;
//	printf("몇살이예요?");
//	scanf_s("%d", &age);
//
//	float weight;
//	printf("몸무게는 몇 kg 이예요?");
//	scanf_s("%f", &weight);
//
//	double height;
//	printf("키는 몇 cm 이예요?");
//	scanf_s("%lf", &height);
//
//	char what[256];
//	printf("무슨 범죄를 저질렀어요?");
//	scanf_s("%s", what, sizeof(what));
//
//	조서 내용 출력
//	printf("\n\n--- 범죄자 정보 ---\n\n");
//	printf("이름        : %s\n", name);
//	printf("나이        : %d\n", age);
//	printf("몸무게      : %.2f\n", weight);
//	printf("키          : %2.lf\n", height);
//	printf("범죄        : %s\n", what);
//
//
//
//
//	return 0;
//}