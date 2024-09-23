#include <stdio.h>
#include <string.h>


void menu (){
printf("deu certo o codigo");
}

void criar_conta (){
        int cadlogin[10],cadsenha[10],apelido[10];

        printf ("qual login voce gostaria de ter?\n");
        scanf("%s",cadlogin);
        printf("qual seria sua senha?\n");
        scanf("%s",cadsenha);
        printf("poderia nos informar como o senhor(a) gostaria de ser chamado?");
        scanf("%s",apelido);
        printf ("conta criada com sucesso\n");
        menu ();
    
}

void loginC (){
    int conta,escolha;
    char login [10], senha[10];

    printf ("voce ja tem uma conta no site?\n1 - nao\n2- sim\n");
    

    do{   
        scanf ("%d",&conta);
        if (conta < 1 || conta > 2) {
        printf("opcao invalida, escreva novamente\n");
    }

    }while (conta <= 0 || conta >= 3);

    if (conta == 2){
        printf ("qual seu login\n");
        scanf ("%s",login);
        printf ("qual sua senha?\n");
        scanf ("%s",senha); 

        printf("\nLogin ou senha invalidos, deseja criar uma conta?\ndigite\n1 - para criar conta\n2- para tentar novamente");
        scanf ("%d",&escolha);
    
        switch (escolha)
        {
        case 1:
            criar_conta ();
            break;
        
        case 2:
            do {
        printf ("qual seu login\n");
        scanf ("%s",login);
        printf ("qual sua senha?\n");
        scanf ("%s",senha);  

        printf("\nLogin ou senha invalidos, deseja criar uma conta?\ndigite\n1 - para criar conta\n2- para tentar novamente");
        scanf ("%d",&escolha);   
        break; 

        if (escolha == 1)
        {
            criar_conta ();
        }
        

        }while (escolha = 2);
        
        
    }         
       
    }
    else {
        criar_conta ();
    }    
}   
int main (){
    loginC ();

    return 0;
}