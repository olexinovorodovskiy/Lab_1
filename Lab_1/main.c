#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define Name "Olexiy"
#define LastName "Novorodovskiy"
#define GroupName "RE-21"
#define Faculty "RTF"
#define University "Igor Sikorsky Kyiv Polytechnic Institute"
#define RTF "RTF IS THE BEST!"
#define A "***************************"
#define B "==========================="
int main()
{
 printf("\n%s", A);
 printf("\n%s\n", B);
 unsigned  int semestr;
 float admissionScore;
 int grade1;
 int grade2;
 int grade3;
 int grade4;
 int grade5;
 double averageGrade;
 unsigned int age;

 printf(" %s %s", Name, LastName);//%s Ч виведенн€ символьного р€дка (набору символ≥в)
 printf("\n Enter following data");

 printf("\n---------------------------");
 printf("\n Enter semestr:");
 scanf("%u", &semestr);

 printf("%s\n", A);

 printf("Enter your admission score: ");
 scanf("%f", &admissionScore);//%f Ч введенн€ чисел типу float

 printf(" Enter grade #1: ");
 scanf("%d", &grade1);//%d або %i Ч введенн€ ц≥лих дес€ткових чисел ≥з знаком

 printf(" Enter grade #2:");
 scanf("%d", &grade2);//%d або %i Ч введенн€ ц≥лих дес€ткових чисел ≥з знаком

 printf(" Enter grade #3:");
 scanf("%d", &grade3);//%d або %i Ч введенн€ ц≥лих дес€ткових чисел ≥з знаком

 printf(" Enter grade #4:");
 scanf("%d", &grade4);//%d або %i Ч введенн€ ц≥лих дес€ткових чисел ≥з знаком

 printf(" Enter grade #5:");
 scanf("%d", &grade5);//%d або %i Ч введенн€ ц≥лих дес€ткових чисел ≥з знаком

 printf(" Enter your age: ");
 scanf("%u", &age);//%u Ч введенн€ беззнакових ц≥лих дес€ткових чисел,
 printf("---------------------------");

 averageGrade = (double)(grade1 + grade2 + grade3 + grade4 + grade5) / 5; // зм≥нна, середнЇ значенн€ оц≥нки.

 getch();

 system("cls");
 printf("\n %s", A);
 printf("\n [     %s    ]", RTF);
 printf("\n %s", B);
 printf("\n      Data validation");
 printf("\n Semestr-%u", semestr);
 printf("\n Admission Score-%.3f", admissionScore);
 printf("\n+--------------------------+");
 printf("\n|Grade #1-%d\t\t   | ", grade1);
 printf("\n|Grade #2-%d\t\t   | ", grade2);
 printf("\n|Grade #3-%d\t\t   | ", grade3);
 printf("\n|Grade #4-%d\t\t   | ", grade4);
 printf("\n|Grade #5-%d\t\t   | ", grade5);
 printf("\n+--------------------------+");
 printf("\n Your age-%u ", age);
 getch();


 system("cls");
 printf("\n  +------------------+");
 printf("\n  | %s |", RTF);
 printf("\n  +------------------+");

 printf("\n  %s", University);
 printf("\n  %s", Faculty);
 printf("\n  %s", GroupName);
 printf("\n +------------------------------+");
 printf("\n |student: %s %s |", Name, LastName );
 printf("\n |age: %u\t\t\t|", age);
 printf("\n |semestr: %u\t\t\t|", semestr);
 printf("\n +------------------------------+");
 printf("\n  admission score= %3.3f. ", admissionScore);
 printf("\n  average grade = %.3lf", averageGrade);//%lf Ч введенн€/виведенн€ чисел типу double.
 printf("\n");
     return 0;
}
