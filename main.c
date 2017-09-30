#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double developer(double a,double b,double c)
{
    printf("Vous avez choisis la fonction developper\n");
    printf("Votre fonction est sur la forme\t ax3+bx2+cx0\n");
    printf("Donc avec vos valeurs: %lfx3+%lfx2+%lfx\n", a, b, c);
    printf("Sous sa forme developper: %lfx3+(%lf-%lf)x2 +(%lf-%lf)x-%lf\n", a, b, a, c, b, c);
    printf("%lf=a\n%lf=b-a\n%lf=c-b\n\n",a,b,c);
    printf("%lf=a\nb=-%lf-%lf\nc=-%lf-%lf\n",a,b,a,b,b);
    printf("Taper maintenant entre 1 et 4 pour choisir la fonction\t");
    return 0;
}

double formecanonique(double a, double b, double c)
{
    double s1 = 0;
    double s2 = 0;
    printf("Vous avez choisi la forme canonique\n");
    printf("Votre fonction est sur la forme\t %lfx3+%lfx2+%lfx\n\n", a, b, c);
    printf("La forme canonique s'ecrit: a[(x+b/2a)2-b*b-4ac/4a*a]\n\n");
    printf("Sous la forme canonique: %lf[(x+%lf/2*%lf)*2-(%lf*%lf-4*%lf*%lf)/4*%lf*%lf]\n",a , b, a, b, b, a, c, a, a);
    printf("La 2eme parenthese represente le discriminant\n\n");
    s1 = b/(2 * a);//calcul pour simplifier les valeurs plus haut
    s2 = (b * b - 4 * a * c)/(4 * a * a);//idem
    printf("%lf[(x+%lf)2-%lf]\n",a, s1, s2);//application de plus haut
    printf("Taper maintenant entre 1 et 4 pour choisir la fonction\t");
    return s1;
}

double discriminant(double a,double b,double c)
{
    double discriminant = 0;
    double X1 = 0;
    double X2 = 0;
    printf("Vous avez choisi le discriminant\n");
    printf("Le discriminant =b*b -4a*c\n");
    printf("=(%lf*%lf) -4*%lf*%lf\n", b, b, a, c);
    discriminant = b * b -(4 * a * c);
    printf("= %lf\t",discriminant);//la suite est une propriete du trinome et du discriminant
    if(discriminant > 0)
    {
        printf("Admet 2 solution\n");
        X1=(-b - (sqrt(discriminant)))/2 * a;
        X2=(-b + (sqrt(discriminant)))/2 * a;
        printf("X1=%lf       X2=%lf\n", X1, X2);
    }
    else if(discriminant == 0)
    {
        printf("Admet une solution\n");
        discriminant =- b/(2 * a);
        printf("%lf\n", discriminant);
    }
    else
    {
        printf("Admet aucune solution\n");
    }
    printf("Taper maintenant entre 1 et 4 pour choisir la fonction\t");
    return discriminant;
}

double factoriser(double a,double b,double c)
{

    double discriminant=0;
    discriminant= b * b -(4 * a * c);
    printf("Vous avez choisis la fonction factoriser\n");
    printf("Discriminant= %lf\t", discriminant);//autre propriete du trinome pour ensuite trouver le sens de variation
    if(discriminant > 0)
    {
        printf("-a(x-x1)(x-x2)\n");
    }
    else if(discriminant == 0)
    {
      printf("a(x-x0)\n");
    }
    else
    {
        printf("Aucune factorisation\n");
    }
    printf("Taper maintenant entre 1 et 4 pour choisir la fonction\t");
    return discriminant;
}

int main()
{
	double a = 0,b = 0,c = 0;
    long choix = 0;

	printf("BIENVENUE DANS UN PROGRAMME DEDIE AUX TRINOME\n\n");
	printf("Rappel: si vous voyez --,je rapelle que (-)+(-) = + :)\n");

	printf("Entrer 3 valeur en appuyant sur entrer apres chacunes d'entres elles, celles correspondant a A,B,C\n");
	printf("a=");
	scanf("%lf", &a);
	printf("b=");
	scanf("%lf", &b);
	printf("c=");
	scanf("%lf", &c);

	printf("Taper maintenant entre 1 et 4 pour choisir la fonction\n");
	printf("1:Developper trinome\n2:Forme canonique du trinome\n3:Le discriminant\n4:Factoriser\t5:Quitter\n");

	do
	{
	   scanf("%ld",&choix);
	    switch(choix)
	    {
	        case 1:
                developer(a, b, c);
            break;
            case 2:
                formecanonique( a, b, c);
            break;
            case 3:
                discriminant( a, b, c);
            break;
            case 4:
                factoriser( a, b, c);
            break;
	    }

	}while(choix >= 1 && choix <= 4);
	return 0;
}
