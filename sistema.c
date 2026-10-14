#include <stdio.h>
#include <locale.h>


int main () {

    setlocale(LC_ALL, "Portuguese"); 

    int opt = 0;
    
    int qtdSimulacoes;
    
    int qtd_equipes, jogos_disputados;

    int vitorias_equipe = 0, empates_equipe = 0, derrotas_equipe = 0, total_pontos, total_jogos = 0;

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
                do {
                    total_jogos = 0;

                    printf("Digite a quantidade de vitórias da equipe %d: ", i);
                    scanf ("%d", &vitorias_equipe);
                    total_jogos += vitorias_equipe;
                    total_pontos = vitorias_equipe * 3;

                    printf("Digite a quantidade de empates da equipe %d: ", i);
                    scanf ("%d", &empates_equipe);
                    total_jogos += empates_equipe;
                    total_pontos += empates_equipe;

                    printf("Digite a quantidade de derrotas da equipe %d: ", i);
                    scanf ("%d", &derrotas_equipe);
                    total_jogos += derrotas_equipe;

                    if (total_jogos == jogos_disputados) {
                        printf ("%d jogos por equipe\n", jogos_disputados);
                        printf ("Equipe %d: %d Vitórias, %d Empates e %d derrotas\n", i, vitorias_equipe, empates_equipe, derrotas_equipe);
                        printf ("Pontuação: %d\n", total_pontos);
                        if (total_pontos >= 15) {
                            printf ("Situação: Excelente campanha\n");
                        }
                        else if (total_pontos >= 10) {
                            printf ("Situação: Boa campanha\n");
                        }
                        else if (total_pontos >= 5) {
                            printf ("Situação: Campanha regular\n");
                        }
                        else {
                            printf ("Situação: Campanha ruim\n");
                        }
                        
                    }

                    if (total_jogos != jogos_disputados) {
                        printf ("Quantidade de partidas irregular!");
                    }
                } while (total_jogos != jogos_disputados);
                
            }
        
        
        break;
        
        case 2:
        
        break;

        case 3:
            printf("================================\n");
            printf("|Resultado    Pontuação        |\n");
            printf("|Vitoria   -  3 pontos         |\n");
            printf("|Empate    -  1 ponto          |\n");
            printf("|Derrota   -  0 pontos         |\n");
            printf("================================\n");
            printf("|Pontos      Situação          |\n");
            printf("|15 ou mais  Excelente campanha|\n");
            printf("|De 10 a 14  Boa campanha      |\n");
            printf("|De 5 a 9    Campanha regular  |\n");
            printf("|Menos de 5  Campanha ruim     |\n");
            printf("================================\n");
            printf("Limites\n");
            printf("Quantidade de equipes: entre 3 e 10.\n");
            printf("Quantidade de jogos a disputar: entre 1 e 10.\n");
        break;

        case 4:
            do {
                printf("\nEscreva o número de simulações que você deseja realizar (escolha um número entre 1 e 5)\n");
                scanf("%d", &qtdSimulacoes);
                } while(qtdSimulacoes < 1 || qtdSimulacoes > 5);
            for(int i = 1; i <= qtdSimulacoes; i++){
                int total_jogos_simulacao = 0, vitorias_equipe_simulacao, total_pontos_simulacao = 0, empates_equipe_simulacao, derrotas_equipe_simulacao, j = 1;

                do { 
                    int total_jogos_simulacao = 0, total_pontos_simulacao = 0;
                    printf("Digite a quantidade de vitórias da equipe %d: ", j);
                    scanf ("%d", &vitorias_equipe_simulacao);
                    total_jogos_simulacao += vitorias_equipe_simulacao;
                    total_pontos_simulacao = vitorias_equipe_simulacao * 3;

                    printf("Digite a quantidade de empates da equipe %d: ", j);
                    scanf ("%d", &empates_equipe_simulacao);
                    total_jogos_simulacao += empates_equipe_simulacao;
                    total_pontos_simulacao += empates_equipe_simulacao;

                    printf("Digite a quantidade de derrotas da equipe %d: ", j);
                    scanf ("%d", &derrotas_equipe_simulacao);
                    total_jogos_simulacao += derrotas_equipe_simulacao;

                    if (total_jogos_simulacao == jogos_disputados) {
                        printf ("%d jogos por equipe\n", jogos_disputados);
                        printf ("Equipe %d: %d Vitórias, %d Empates e %d derrotas\n", j, vitorias_equipe_simulacao, empates_equipe_simulacao, derrotas_equipe_simulacao);
                        printf ("Pontuação: %d\n", total_pontos_simulacao);
                        if (total_pontos_simulacao >= 15) {
                            printf ("Situação: Excelente campanha\n");
                        }
                        else if (total_pontos_simulacao >= 10) {
                            printf ("Situação: Boa campanha\n");
                        }
                        else if (total_pontos_simulacao >= 5) {
                            printf ("Situação: Campanha regular\n");
                        }
                        else {
                            printf ("Situação: Campanha ruim\n");
                        }
                        
                    }

                    if (total_jogos_simulacao != jogos_disputados) {
                        printf ("Quantidade de partidas irregular!");
                    }
                    j++;
                } while (total_jogos_simulacao != jogos_disputados);
                
            }
        
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
