#include <stdio.h>
#include <locale.h>


int main () {

    setlocale(LC_ALL, "Portuguese"); 

    int opt = 0;

    int qtd_equipes, jogos_disputados;

    int vitorias_equipe = 0, empates_equipe = 0, derrotas_equipe = 0, total_pontos;

    do {
        printf ("Digite a quantidade de equipes participantes: ");
        scanf ("%d", &qtd_equipes);
        if (qtd_equipes < 3 || qtd_equipes > 10) {
            printf ("Quantidade inválida!\n");
        }
    }while (qtd_equipes < 3 || qtd_equipes > 10);

    do {
        printf ("Digite a quantidade de jogos disputados: ");
        scanf ("%d", &jogos_disputados);
        if (jogos_disputados < 1 || jogos_disputados > 10) {
            printf ("Quantidade inválida!\n");
        }
    }while (jogos_disputados < 1 || jogos_disputados > 10);
    
    while (opt != 5) {
        printf ("1 - Registrar resultados do campeonato\n");
        printf ("2 - Mostrar resumo do campeonato\n");
        printf ("3 - Mostrar regulamento\n");
        printf ("4 - Simular campanha de uma equipe\n");
        printf ("5 - Encerrar sistema\n");
        printf ("Escolha uma opção: ");
        scanf ("%d", &opt);

        switch (opt) {
        case 1:
            
            for (int i = 1; i <= qtd_equipes; i++) {
                printf("Digite a quantidade de vitória da equipe %d", i);
                scanf ("%d", &vitorias_equipe);
            }
        
        break;
        
        case 2:
        
        break;

        case 3:
        
        break;

        case 4:
        
        break;

        case 5:
        printf ("Sistema encerrado com sucesso.\n");
        printf ("Obrigado por utilizar o sistema.");
        break;

        default:
        printf ("Opção inválida! Digite uma opção disponível.\n");
        break;
    }
    }


    
    return 0;
}