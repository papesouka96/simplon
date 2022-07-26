#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	int math[2];
	int i;
  int n;
  int m;
  int k;	
  int fr[2];
  int ang[2];
  char Nom[80];
  int pc[2];
  int s, t, u,w;
  float notem, notef, notea, notep ;
  
  float moyenne, somme;
  	

  printf("saisir votre Nom\n");
  scanf("%s",Nom);

	// Saisie des notes en mathematique
  printf("saisir les notes de Mathematique\n");
	for (i=0; i<2; i++)
	{
    
		printf("saisir la note numero %d: en mathematique\n", i+1);
		scanf("%d", &math[i]);
    if (math[i]<0 || math[i]>20)
    {
    printf("saisit incorrect reesseyer note superieure a 20\n");
    return 0;
    }
    
     s = s + math[i];
     
	}
  notem=(float)s/i;
  printf(" %f est la noteen mathematique\n",notem);

// saisie des notes en francais
   printf("saisir les notes de francais\n");
	for (n=0; n<2; n++)
	{
    
		printf("saisir la note numero %d: en francais\n", n+1);
		scanf("%d", &fr[n]);
    if (fr[n]<0 || fr[n]>20)
    {
    printf("saisit incorrect reesseyer note superieure a 20\n");
    return 0;
    }
    t = t + fr[n];
  
	}
  notef=(float)s/n;
  printf("%f est la note en francais\n",notef);

  // saisie des notes en anglais
 printf("saisir les notes d'anglais\n");
	for (m=0; m<2; m++)
	{
    
		printf("saisir la note numero %d: en anglais\n", m+1);
		scanf("%d", &ang[m]);
    if (ang[m]<0 || ang[m]>20)
    {
    printf("saisit incorrect reesseyer note superieure a 20\n");
    return 0;
    }
    u = u + ang[m];
  
	}
 notea=(float)s/m;
  printf("%f est la note en anglais\n",notea);

// saisie de la note en chimie
 printf("saisir les notes de physique chimie\n");
	for (k=0; k<2; k++)
	{
    
		printf("saisir la note numero %d: en physique chimie\n", k+1);
    
		scanf("%d", &pc[k]);
if (pc[k]<0 || pc[k]>20)
    {
    printf("saisit incorrect reesseyer note superieure a 20\n");
    return 0;
    }
    w = w + pc[k];
     
	}
   notep=(float)s/k;
  printf("%f est la note en physique chimie\n",notep);

	// Affichage
      printf("les notes que vous avez entrées pour %s sont\n",Nom);
	for (i=0; i<2; i++)
  {
		printf("La notes de math n° %d est %d\n", i+1, math[i]);
    
}
for (i=0; i<2; i++)
  {
		
    printf("La notes  de fr n° %d est %d\n", i+1, fr[i]);
}
for (i=0; i<2; i++)
  {
		
    printf("La notes  d'ang n° %d est %d\n", i+1, ang[i]);
}
for (i=0; i<2; i++)
  {
		
    printf("La notes  de pc n° %d est %d\n", i+1, pc[i]);
}
somme=(notem*5)+(notef*3)+(notea*2)+(notep*4);
moyenne=somme/14;

if(moyenne<10)
{
printf("\nLa moyenne de %s est: %f. c'est médiocre",Nom,moyenne);
}
if(moyenne==10)
{
printf("\nLa moyenne de %s est: %f.c'est passable",Nom,moyenne);

}
if(moyenne >= 12 && moyenne <= 14)
{
printf("\nLa moyenne de %s est: %f.c'est tres bien",Nom,moyenne);
}
if(moyenne > 14){
printf("La moyenne de %s est: %f.c'est excellent",Nom,moyenne);
}
}