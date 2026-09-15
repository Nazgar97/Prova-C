 #include <stdio.h>
 char nome [50];
 int opcao = 2;
 float valor;
 float valorfinal;

 
 int main() {
 	
	printf("Digite seu nome:\n ");
    scanf("%s", &nome);
    
    printf("Qual o valor que vai pagar?\n ");
    scanf("%f", &valor);
    
 	printf("==== Escolha forma de pagamento ====\n 1- A vista (Dinheiro ou Pix)\n 2- Cartao de credito\n");
    scanf("%d", &opcao);
    
 	switch (opcao){
        case 1:
            valorfinal = valor - (valor * 0.05);
        printf("Ola, %s\n O valor original era:%2.f\n O valor final a pagar vai ser: %2.f ", nome, valor, valorfinal);
        break;
 	
        case 2:
            valorfinal = valor;
            printf("Ola, %s\n O valor original era:%2.f\n O valor final a pagar vai ser: %2.f ", nome, valor, valorfinal);
            break;
 	    

        default:
            printf("Opcao invalida\n");
	 }
	 
return 01;

}
