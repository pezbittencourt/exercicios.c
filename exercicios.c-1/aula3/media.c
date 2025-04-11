int main (void){
    
//calcule a média de dois numeros diferentes
  printf ("\nPara começarmos bem, vamos calcular sua média deste semestre.\n");
  printf ("insira suas notas:\n");
float  nota1;
float nota2;
  scanf ("%f", &nota1);
  scanf ("%f", &nota2);
float media = (nota1 + nota2) / 2.0;
  printf("sua média deste semestre é de: %d\n", media);
    
  return 0;

  

}