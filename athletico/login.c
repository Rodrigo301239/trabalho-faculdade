#include <stdio.h>
#include <string.h>

void menu() {
    printf("Deu certo o código\n");
}

void loginC() {
    int conta;
    char login[10], senha[10], cadlogin[10], cadsenha[10], apelido[10];

    // Inicialização das credenciais de exemplo
    strcpy(cadlogin, "usuario");  // Exemplo de credencial
    strcpy(cadsenha, "senha123");  // Exemplo de credencial

    printf("Você já tem uma conta no site?\n1 - não\n2 - sim\n");

    do {
        scanf("%d", &conta);
        if (conta < 1 || conta > 2) {
            printf("Opção inválida, escreva novamente\n");
        }
    } while (conta < 1 || conta > 2);

    if (conta == 2) {
        printf("Qual seu login?\n");
        scanf("%s", login);
        printf("Qual sua senha?\n");
        scanf("%s", senha);
     
        if (strcmp(login, cadlogin) == 0 && strcmp(senha, cadsenha) == 0) {
            menu();
        } else {
            while (strcmp(login, cadlogin) != 0 || strcmp(senha, cadsenha) != 0) {
                printf("Login ou senha inválidos, tente novamente\n");
                printf("Qual seu login?\n");
                scanf("%s", login);
                printf("Qual sua senha?\n");
                scanf("%s", senha);
            }                 
            menu();
        }
        
    } else if (conta == 1) {
        printf("Qual login você gostaria de ter?\n");
        scanf("%s", cadlogin);
        printf("Qual seria sua senha?\n");
        scanf("%s", cadsenha);
        printf("Poderia nos informar como o senhor(a) gostaria de ser chamado?\n");
        scanf("%s", apelido);
        printf("Conta criada com sucesso!\n");
    }
}

int main() {
    loginC();
    return 0;
}
