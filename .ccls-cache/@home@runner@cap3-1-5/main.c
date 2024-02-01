#include <locale.h> 
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define ex1

#ifdef ex1
// função verificar se número positivo ou negativo ou 0
int verificar(int ve) {

  // if resut
  if (ve < 0) {
    // retorna 0 se for negativo
    return (0);
  } else if (ve > 0) {
    // retorna 1 se for positivo
    return (1);
  } else {
    // retorna -1 se for 0
    return (-1);
  }
}
float somaN(int n1, int n2) {
  // função somar números entre eles
  float n;
  // fazendo a soma n
  for (int i = n1 + 1; i < n2; i++) {
    n += i;
  }

  return (n);
}

float multN(int n1, int n2) {
  // função multiplicar números entre eles
  float n = 1;
  // fazendo a multiplicação n
  for (int i = n1 + 1; i < n2; i++) {
    n *= i;
  }

  return (n);
}
float divN(int n1, int n2) {
  // função dividir números
  float n;
  // fazendo a divisão n

  n = n2 / n1;

  return (n);
}

main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
    int cont;

  // entrada      
  float num1, num2;
  int ve1, ve2;
  float resp;
  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // alimentação
    printf("Digite o 1° número: ");
    scanf("%f", &num1);

    printf("\nDigite o 2° número: ");
    scanf("%f", &num2);

    // deixar num1 como menor
    if (num2 < num1) {
      num1 += num2;
      num2 = num1 - num2;
      num1 = num1 - num2;
    }
    // função verficar
    ve1 = verificar(num1);
    ve2 = verificar(num2);

    // verificar se foram numeros posi ou nega
    switch (3 * ve1 + ve2) {
    case 0: {
      // numeros negativos
      resp = multN(num1, num2);
      printf("\nA multiplicação dos números entre %.2f até %.2f é: %.2f", num1,
             num2, resp);
      break;
    }
    case 4: {
      // numeros positivo
      resp = somaN(num1, num2);
      printf("\nA somatória dos números entre %.2f até %.2f é: %.2f", num1,
             num2, resp);
      break;
    }
    case 1: {
      // positivo e negativo
      resp = num2 / num1;
      printf("\nA Divisão do número %.2f por %.2f é: %.2f", num2, num1, resp);
      break;
    }
    default: {
      // digito 0
      printf("\nDigitado número 0.");
      break;
    }

      // fim switch
    }
    // perguntar se o usuário quer finalizar  
    printf("\n \n deseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    if (cont == 1)
      break;

  } while (1 == 1);
}
#endif

#ifdef ex2
// funções
int fatora(int num) {
  int fa = 1;
  // fatoreal
  for (int i = num; i > 1; i--) {
    fa = fa * i;
  }
  return (fa);
}
int somaalg(int alg) {
  int som = 0, casasdec = 0, aux;
  // descobrir num de algarismo
  while ((pow(10, casasdec)) < alg) {
    casasdec++;
  }

  for (int i = casasdec; i >= 0; i--) {
    // somando com alg dividido por potencia de 10
    som += alg / (pow(10, i));
    // tirar as casas  decimais do número conforme a conta
    aux = alg / (pow(10, i));
    alg -= aux * (pow(10, i));
  }

  return (som);
}
main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
  int cont;

  // entrada      
  int n, fat, soma;
  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // alimentação
    printf("Digite o número para o calculo: ");
    scanf("%d", &n);

    // função fatoreal
    fat = fatora(n);
    // soma algarismo
    soma = somaalg(fat);
    // saída
    printf("\nDo número %d \n%d!: %d \nSoma dos algarismos de %d: %d", n, n,
           fat, fat, soma);

    // perguntar se o usuário quer finalizar  
    printf("\n \n deseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    if (cont == 1)
      break;

  } while (1 == 1);
}
#endif

#ifdef ex3
// funções
float soma(float n1, float n2) { return (n1 + n2); }
float sub(float n1, float n2) { return (n1 - n2); }
float mult(float n1, float n2) { return (n1 * n2); }
float divi(float n1, float n2) { return (n1 / n2); }
main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
    int cont;

  // entrada      
  float num1, num2;

  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // alimentação
    printf("Digite o 1° valor: ");
    scanf("%f", &num1);
    printf("\nDigite o 2° valor: ");
    scanf("%f", &num2);

    // função
    printf("\n%.2f + %.2f = %.2f", num1, num2, soma(num1, num2));
    printf("\n%.2f - %.2f = %.2f", num1, num2, sub(num1, num2));
    printf("\n%.2f * %.2f = %.2f", num1, num2, mult(num1, num2));
    printf("\n%.2f / %.2f = %.2f", num1, num2, divi(num1, num2));
    // perguntar se o usuário quer finalizar  
    printf("\n \n deseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    if (cont == 1)
      break;

  } while (1 == 1);
}
#endif

#ifdef ex5
// funções
float soma(float n1, float n2) { return (n1 + n2); }
float sub(float n1, float n2) { return (n1 - n2); }
float mult(float n1, float n2) { return (n1 * n2); }
float divi(float n1, float n2) { return (n1 / n2); }
main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
    int cont;

  // entrada      
  float num1, num2, resp, sair = 0;
  char op;
  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // alimentação
    printf("Digite o 1° valor: ");
    scanf("%f", &num1);
    resp = num1;

    // entrada de n valores
    while (sair == 0) {
      printf(
          "\nQual operação: (+ Soma, - Subtração, * Multiplicação, / Divisão, 0 Sair)");
      scanf("%c", &op);
       scanf("%c", &op);
      

      switch (op) {
      case ('+'): {
        printf("\nDigite o 2° valor: ");
        scanf("%f", &num2);
        resp = soma(resp, num2);

        // saída
          printf("\nResultado: %f", resp); 
        break;
      }
      case ('-'): {
        printf("\nDigite o 2° valor: ");
        scanf("%f", &num2);
        resp = sub(resp, num2);

        // saída
          printf("\nResultado: %f", resp); 
        break;
      }
        case ('*'): {
        printf("\nDigite o 2° valor: ");
        scanf("%f", &num2);
        resp = mult(resp, num2);

          // saída
          printf("\nResultado: %f", resp); 
        break;
      }
        
        case ('/'): {
        printf("\nDigite o 2° valor: ");
        scanf("%f", &num2);
        resp = divi(resp, num2);

          // saída
          printf("\nResultado: %f", resp); 
        break;
      }
        default:
          {
            sair = 1;
            break;
          }
      }

      
     

  


    }

  

    // perguntar se o usuário quer finalizar  
    printf("\n \n deseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    if (cont == 1)
      break;

  } while (1 == 1);
}
#endif

#ifdef ex4
// funções
float soma(float n1, float n2) { return (n1 + n2); }
float sub(float n1, float n2) { return (n1 - n2); }
float mult(float n1, float n2) { return (n1 * n2); }
float divi(float n1, float n2) { return (n1 / n2); }
main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
    int cont;

  // entrada      
  float num1, num2, resoma, resub, remult, rediv;
  char op;
  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // alimentação
    printf("Digite o 1° valor: ");
    scanf("%f", &num1);
    printf("\nDigite o 2° valor: ");
    scanf("%f", &num2);

    // valores fundamentais
    resoma = soma(num1, num2);
    resub = sub(num1, num2);
    remult = mult(num1, num2);
    rediv = divi(num1, num2);

    // entrada de n valores
    for (int n = 3; 1 == 1; n++) {
      // alimentação
      printf("\nDigite o %d° valor (0 - parar): ", n);
      scanf("%f", &num2);

      // desejar sair
      if (num2 == 0)
        break;

      // funçãovalores
      resoma = soma(resoma, num2);
      resub = sub(resub, num2);
      remult = mult(remult, num2);
      rediv = divi(rediv, num2);
    }

    // saída
    do {
      printf("\n Qual operação quer realizar (+, -, *, /, 0- sair)?");
      getchar();
      op = getchar();

      // casos
      switch (op) {
      case '+': {
        printf("\nSoma dos valores digitados: %.2f", resoma);
        break;
      }
      case '-': {
        printf("\nSubtração dos valores digitados: %.2f", resub);
        break;
      }
      case '*': {
        printf("\nMultiplicação dos valores digitados: %.2f", remult);
        break;
      }
      case '/': {
        printf("\nDivisão dos valores digitados: %f", rediv);
        break;
      }
        // fim switch
      }
      // usuário saiu
    } while (op != '0');
    // perguntar se o usuário quer finalizar  
    printf("\n \n deseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    if (cont == 1)
      break;

  } while (1 == 1);
}
#endif
