#include <stdio.h>
#include <locale.h>


int main () {

    setlocale(LC_ALL, "Portuguese"); 

    int opt = 0;

    int qtd_equipes, jogos_disputados;

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
        
        break;
        
        case 2:
        
        break;

        case 3:
        
        break;

        case 4:
        
        break;

        case 5:
        printf ("Saindo...");
        break;

        default:
        printf ("Opção inválida! Digite uma opção disponível.\n");
        break;
    }
    }

    
    
    return 0;
}