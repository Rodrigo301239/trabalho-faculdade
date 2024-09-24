#include <stdio.h>
#include <string.h>

void criar_conta (){
        int cadlogin[10],cadsenha[10],apelido[10];

        printf ("qual login voce gostaria de ter?\n");
        scanf("%s",cadlogin);
        printf("qual seria sua senha?\n");
        scanf("%s",cadsenha);
        printf("poderia nos informar como o senhor(a) gostaria de ser chamado?");
        scanf("%s",apelido);
        printf ("conta criada com sucesso\n");
        //menu ();
    
}

void loginC (){
    int conta,escolha;
    char login [10], senha [10];

    printf ("Ola, seja bem vindo\n\nvoce ja possui uma conta no site?\n1 - nao\n2- sim\n");

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

        printf("\nLogin ou senha invalidos, deseja criar uma conta?\ndigite\n1 - para criar conta\n2- para tentar novamente\n");
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

void ficha_treino (){
    void ficha_treino (){
    printf("Criamos uma ficha de treino com base em seu IMC\n\n");

    // Treino A
    printf("   ||   Treino A  ||\n");
    printf("Voador Peitoral (aquecimento) = 2 series  /  15 repeticoes\n");
    printf("Supino Reto com Barra = 5 series  /  15, 12, 10, 8, 6 repeticoes\n");
    printf("Supino inclinado com halter = 4 series  /  8 a 10 repeticoes\n");
    printf("Voador Peitoral  =  4 series  /  8 a 10 repeticoes\n");
    printf("Pullover (halter, banco reto)  =  3 series  /  10 a 12 repeticoes\n");
    printf("Elevacao lateral maquina = 3 series  /  10 repeticoes\n");
    printf("Triceps frances cross = 3 series  /  10 repeticoes\n");
    printf("Triceps testa com halter (2 halteres) = 3 series  /  10 repeticoes\n");
    printf("Triceps na paralela (Gravitation) = 3 series  /  10 repeticoes\n");

    // Treino B
    printf("   ||   Treino B  ||\n");
    printf("Agachamento corporal (aquecimento) = 2 series  /  15 repeticoes\n");
    printf("Agachamento hack = 5 series  /  8 a 10 repeticoes\n");
    printf("Leg press 45 (piramide) = 4 series  /  12, 10, 8, 6 repeticoes (progresso de carga)\n");
    printf("Cadeira extensora unilateral = 4 series  /  10 repeticoes (cada lado)\n");
    printf("Afundo com halter = 3 series  /  10 repeticoes\n");
    printf("Mesa flexora = 5 series  /  10 repeticoes\n");
    printf("Cadeira flexora unilateral = 4 series  /  10 repeticoes (cada lado)\n");
    printf("Elevacao pelvica (maquina) = 4 series  /  12 a 15 repeticoes\n");
    printf("Panturrilha em pe (agacho articulado) = 4 series  /  12 repeticoes\n");

    // Treino C
    printf("   ||   Treino C  ||\n");
    printf("Desenvolvimento maquina (1 aquecimento) = 1 + 4 series  /  6 a 8 repeticoes (carga alta)\n");
    printf("Elevacao lateral no cabo (cross) = 3 series  /  10 a 12 repeticoes\n");
    printf("Elevacao lateral halter = 3 series  /  10 repeticoes + drop\n");
    printf("Elevacao frontal com barra (pronado) = 3 series  /  8 a 10 repeticoes\n");
    printf("Voador inverso = 3 series  /  10 a 12 repeticoes\n");
    printf("Encolhimento com halter = 4 series  /  12 a 15 repeticoes\n");
    printf("Abdominal supra banco declinado = 3 series  /  10 a 12 repeticoes\n");
    printf("Abdominal infra banco declinado = 3 series  /  10 a 12 repeticoes\n");
    printf("Prancha isometrica = 3 series / max repeticoes\n");

    // Treino D
    printf("   ||   Treino D  ||\n");
    printf("Pulldown com corda = 5 series  /  15, 12, 10, 8, 6 repeticoes (progresso de carga)\n");
    printf("Remada cavalinho pronada = 4 series  /  8 a 10 repeticoes\n");
    printf("Remada baixa supinada (barra) = 4 series  /  8 a 10 repeticoes\n");
    printf("Puxada alta supinada = 3 series  /  10 repeticoes\n");
    printf("Rosca scott = 4 series  /  10 repeticoes\n");
    printf("Rosca banco 45º = 3 series  /  8 a 10 repeticoes\n");
    printf("Rosca martelo com corda cross = 3 series  /  8 a 10 repeticoes\n");
    printf("Rosca punho = 4 series  /  12 a 15 repeticoes\n");
}

        
}
