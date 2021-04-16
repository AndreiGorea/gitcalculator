#include <stdio.h>
#include <stdlib.h>
void print_help();
float calculate(float nr1,float nr2,char operation);
int main()
{
    float nr1,nr2,result;
    char operation;
    print_help();                      //afisare help

    printf("Dati nr1 = ");             //citire date
    scanf("%f",&nr1);
    printf("Dati nr2 = ");
    scanf("%f",&nr2);
    printf("Dati operatia = ");
    scanf(" %c",&operation);

    result=calculate(nr1,nr2,operation);  //calculare


    printf("Rezultatul este : %.4f",result);  //afisare rezultate


    return 0;
}
void print_help()
{
    printf("Calculatorul lui Andrei :\n\n");
    printf("+ Adunare\n");
    printf("- Scadere\n");
    printf("* Inmultire\n");
    printf("/ Imparitre\n\n\n");

}
float calculate(float nr1,float nr2,char operation)
{


    float result=0;
    switch(operation)
    {
    case '+':
        result=nr1+nr2;
        break;
    case '-':
        result=nr1-nr2;
        break;
    case '*':
        result=nr1*nr2;
        break;
    case '/':
        result=nr1/nr2;
        if(nr2==0)
            printf("Impartirea la doi nu exista\n");
        exit(-2);
        break;
    default:
        printf("Nu se suporta asa operatie");
        exit(-1);

    }
    return result;
}

