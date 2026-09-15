 #include <stdio.h>
//posicionamento dos inteiros

    char nome[50];
    int idade;
    int a, b;
    float nota1, nota2, media;
    int numero;
    float salario;
    int opcao = 4;//4
    float x, y, resultado;
    float altura, peso;
    

int main() {

    // 1. Nome 
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    //faltou &
    printf("Ola, %s!\n", &nome);
    //faltou s

    // 2. Idade
    printf("\nDigite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
        printf("Entrada permitida\n");
    else
        printf("Entrada nao permitida\n");

    // 3. Soma
    printf("\n Digite dois inteiros: ");
    scanf("%d %d", &a, &b);
    //printf("%d", &b);
    //essa linha de cima nao existe
    printf("Soma = %d\n", a + b);
    // e +

    // 4. Maior numero
    printf("\nDigite dois inteiros: ");
    scanf("%d %d", &a, &b);
    //faltou %d

    if (a > b)
        printf("Maior = %d\n", a);
    else
        printf("Maior = %d\n", b);
        

    // 5. Media
    printf("\nDigite duas notas: ");
    scanf("%f %f", &nota1, &nota2);

    media = nota1 + nota2 / 2;

    if (media >= 7)
        printf("Aprovado\n");
    else
        printf("Reprovado\n");
        //;

    // 6. Positivo, negativo ou zero
    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    if (numero > 0)
        printf("Positivo\n");
        //positivo e nao negativo
    else if (numero < 0)
        printf("Negativo\n");
        //negativo e nao positivo
    else
        printf("Zero\n");

    // 7. Par ou impar
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 != 1)
    //é !=
        printf("Par\n");
    else
        printf("Impar\n");

    // 8. Calculadora
    printf("\nDigite dois numeros: ");
    scanf("%f %f", &x, &y);

    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            resultado = x + y;
            break;
        case 2:
            resultado = x - y;
            break;
        case 3:
            resultado = x * y;
            break;
        case 4:
            resultado = x / y;
            break;
        default:
            printf("Opcao invalida\n");
    }

    printf("Resultado = %2.f\n", resultado);
    //%f

    // 9. Salario
    printf("\nDigite seu salario: ");
    scanf("%f", &salario);

    salario = salario + salario * 0.10;//+

    printf("Novo salario: %.2f\n", salario);


    // 10. Concurso
    printf("\nDigite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua nota: ");
    scanf("%f", &nota1);//%f

    if (nota1 >= 60)
        printf("%s: aprovado\n", nome);
    else
        printf("%s: reprovado\n", nome);

    // DESAFIO
    printf("\n===== RELATORIO =====\n");

    printf("Nome: ");
    scanf("%s", &nome);//%s e &

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Altura: ");
    scanf("%f", &altura);//%f

    printf("Peso: ");
    scanf("%f", &peso);//%f
    
    printf("\n===== RELATORIO FINAL =====\n Nome: %s\n Idade: %d \n Altura: %2.f \n Peso: %2.f", nome, idade, altura, peso);
    


    printf("\n===== RELATORIO =====\n");
    
	printf("Nome: ",nome);
    scanf("%s", &nome);
    
    printf("Idade: ", idade);
    scanf("%d", &idade);
    
    printf("Altura: ", altura);
    scanf("%f", &altura);
    
    printf("Peso: ", peso);
    scanf("%f", &peso);
    
    printf("\n===== RELATORIO FINAL =====\n Nome: %s\n Idade: %d \n Altura: %2.f \n Peso: %2.f", nome, idade, altura, peso);

    return 01;
}

