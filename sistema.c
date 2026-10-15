#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int opt = 0;
    int qtd_equipes, jogos_disputados;

    int vitorias_equipe = 0, empates_equipe = 0;
    int derrotas_equipe = 0, total_pontos = 0;
    int total_jogos = 0;

    int total_vitorias = 0, total_empates = 0;
    int total_derrotas = 0, soma_pontos = 0;

    float media_pontos = 0.0;

    int equipes_excelentes = 0, equipes_boas = 0;
    int equipes_regulares = 0, equipes_ruins = 0;

    int maior_pontuacao = -1, menor_pontuacao = 999;
    int maior_equipe = 0, menor_equipe = 0;
    int empate_maior = 0, empate_menor = 0;

    int qtdSimulacoes;
    int resultados_registrados = 0;

    // Entrada de dados iniciais
    do {
        printf("Digite a quantidade de equipes participantes: ");
        scanf("%d", &qtd_equipes);

        if (qtd_equipes < 3 || qtd_equipes > 10) {
            printf("Quantidade invalida!\n");
        }

    } while (qtd_equipes < 3 || qtd_equipes > 10);

    do {
        printf("Digite a quantidade de jogos disputados: ");
        scanf("%d", &jogos_disputados);

        if (jogos_disputados < 1 || jogos_disputados > 10) {
            printf("Quantidade invalida!\n");
        }

    } while (jogos_disputados < 1 || jogos_disputados > 10);

    // Menu principal
    while (opt != 5) {

        printf("\n========== MENU ==========\n");
        printf("1 - Registrar resultados do campeonato\n");
        printf("2 - Mostrar resumo do campeonato\n");
        printf("3 - Mostrar regulamento\n");
        printf("4 - Simular campanha de uma equipe\n");
        printf("5 - Encerrar sistema\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opt);

        switch (opt) {

        case 1:

            // Reiniciar os acumuladores
            total_vitorias = 0;
            total_empates = 0;
            total_derrotas = 0;
            soma_pontos = 0;

            equipes_excelentes = 0;
            equipes_boas = 0;
            equipes_regulares = 0;
            equipes_ruins = 0;

            maior_pontuacao = -1;
            menor_pontuacao = 999;

            maior_equipe = 0;
            menor_equipe = 0;

            empate_maior = 0;
            empate_menor = 0;

            resultados_registrados = 0;

            for (int i = 1; i <= qtd_equipes; i++) {

                do {
                    total_jogos = 0;
                    total_pontos = 0;

                    printf("\nEquipe %d\n", i);

                    printf("Digite a quantidade de vitorias: ");
                    scanf("%d", &vitorias_equipe);

                    printf("Digite a quantidade de empates: ");
                    scanf("%d", &empates_equipe);

                    printf("Digite a quantidade de derrotas: ");
                    scanf("%d", &derrotas_equipe);

                    total_jogos = vitorias_equipe +
                                  empates_equipe +
                                  derrotas_equipe;

                    if (total_jogos != jogos_disputados ||
                        vitorias_equipe < 0 ||
                        empates_equipe < 0 ||
                        derrotas_equipe < 0) {

                        printf("Quantidade de partidas irregular!\n");
                        printf("Digite novamente os resultados.\n");
                    }

                } while (total_jogos != jogos_disputados ||
                         vitorias_equipe < 0 ||
                         empates_equipe < 0 ||
                         derrotas_equipe < 0);

                // Calcular pontuacao
                total_pontos = vitorias_equipe * 3 + empates_equipe;

                printf("\n%d jogos por equipe\n", jogos_disputados);
                printf("Equipe %d: %d Vitorias, %d Empates e %d Derrotas\n",
                       i, vitorias_equipe, empates_equipe, derrotas_equipe);

                printf("Pontuacao: %d\n", total_pontos);

                // Classificacao da equipe
                if (total_pontos >= 15) {
                    printf("Situacao: Excelente campanha\n");
                    equipes_excelentes++;
                }
                else if (total_pontos >= 10) {
                    printf("Situacao: Boa campanha\n");
                    equipes_boas++;
                }
                else if (total_pontos >= 5) {
                    printf("Situacao: Campanha regular\n");
                    equipes_regulares++;
                }
                else {
                    printf("Situacao: Campanha ruim\n");
                    equipes_ruins++;
                }

                // Acumuladores gerais
                total_vitorias += vitorias_equipe;
                total_empates += empates_equipe;
                total_derrotas += derrotas_equipe;
                soma_pontos += total_pontos;

                // Maior pontuacao
                if (total_pontos > maior_pontuacao) {
                    maior_pontuacao = total_pontos;
                    maior_equipe = i;
                    empate_maior = 1;
                }
                else if (total_pontos == maior_pontuacao) {
                    empate_maior++;
                }

                // Menor pontuacao
                if (total_pontos < menor_pontuacao) {
                    menor_pontuacao = total_pontos;
                    menor_equipe = i;
                    empate_menor = 1;
                }
                else if (total_pontos == menor_pontuacao) {
                    empate_menor++;
                }
            }

            // Media 
            media_pontos = (float) soma_pontos / qtd_equipes;

            resultados_registrados = 1;

            printf("\nResultados registrados com sucesso!\n");

            break;

        case 2:

            if (resultados_registrados == 0) {
                printf("\nRegistre os resultados primeiro.\n");
            }
            else {

                printf("\n===== RESUMO DO CAMPEONATO =====\n");

                printf("Quantidade de equipes: %d\n", qtd_equipes);
                printf("Jogos disputados por equipe: %d\n", jogos_disputados);

                printf("Total de vitorias: %d\n", total_vitorias);
                printf("Total de empates: %d\n", total_empates);
                printf("Total de derrotas: %d\n", total_derrotas);

                printf("Soma dos pontos: %d\n", soma_pontos);
                printf("Media de pontos: %.2f\n", media_pontos);

                printf("\nClassificacao das campanhas:\n");
                printf("Equipes excelentes: %d\n", equipes_excelentes);
                printf("Equipes boas: %d\n", equipes_boas);
                printf("Equipes regulares: %d\n", equipes_regulares);
                printf("Equipes ruins: %d\n", equipes_ruins);

                printf("\nMaior pontuacao: %d, Equipe %d\n",
                       maior_pontuacao, maior_equipe);

                printf("Menor pontuacao: %d, Equipe %d\n",
                       menor_pontuacao, menor_equipe);

                printf("Equipes com a maior pontuacao: %d\n", empate_maior);
                printf("Equipes com a menor pontuacao: %d\n", empate_menor);
            }

            break;

        case 3:

            printf("\n================================\n");
            printf("|Resultado    Pontuacao        |\n");
            printf("|Vitoria   -  3 pontos         |\n");
            printf("|Empate    -  1 ponto          |\n");
            printf("|Derrota   -  0 pontos         |\n");
            printf("================================\n");
            printf("|Pontos      Situacao          |\n");
            printf("|15 ou mais  Excelente campanha|\n");
            printf("|De 10 a 14  Boa campanha      |\n");
            printf("|De 5 a 9    Campanha regular  |\n");
            printf("|Menos de 5  Campanha ruim     |\n");
            printf("================================\n");

            printf("Limites\n");
            printf("Quantidade de equipes: entre 3 e 10.\n");
            printf("Quantidade de jogos: entre 1 e 10.\n");

            break;

        case 4:

            do {
                printf("\nDigite o numero de simulacoes (1 a 5): ");
                scanf("%d", &qtdSimulacoes);

                if (qtdSimulacoes < 1 || qtdSimulacoes > 5) {
                    printf("Quantidade invalida!\n");
                }

            } while (qtdSimulacoes < 1 || qtdSimulacoes > 5);

            for (int i = 1; i <= qtdSimulacoes; i++) {

                int total_jogos_simulacao = 0;
                int vitorias_equipe_simulacao = 0;
                int empates_equipe_simulacao = 0;
                int derrotas_equipe_simulacao = 0;
                int total_pontos_simulacao = 0;

                do {
                    total_jogos_simulacao = 0;

                    printf("\n===== SIMULACAO %d =====\n", i);

                    printf("Digite a quantidade de vitorias: ");
                    scanf("%d", &vitorias_equipe_simulacao);

                    printf("Digite a quantidade de empates: ");
                    scanf("%d", &empates_equipe_simulacao);

                    printf("Digite a quantidade de derrotas: ");
                    scanf("%d", &derrotas_equipe_simulacao);

                    total_jogos_simulacao =
                        vitorias_equipe_simulacao +
                        empates_equipe_simulacao +
                        derrotas_equipe_simulacao;

                    if (total_jogos_simulacao != jogos_disputados ||
                        vitorias_equipe_simulacao < 0 ||
                        empates_equipe_simulacao < 0 ||
                        derrotas_equipe_simulacao < 0) {

                        printf("Quantidade de partidas irregular!\n");
                        printf("Digite novamente.\n");
                    }

                } while (total_jogos_simulacao != jogos_disputados ||
                         vitorias_equipe_simulacao < 0 ||
                         empates_equipe_simulacao < 0 ||
                         derrotas_equipe_simulacao < 0);

                total_pontos_simulacao =
                    vitorias_equipe_simulacao * 3 +
                    empates_equipe_simulacao;

                printf("\nResultado da simulacao %d\n", i);
                printf("%d jogos disputados\n", jogos_disputados);

                printf("%d Vitorias, %d Empates e %d Derrotas\n",
                       vitorias_equipe_simulacao,
                       empates_equipe_simulacao,
                       derrotas_equipe_simulacao);

                printf("Pontuacao: %d\n", total_pontos_simulacao);

                if (total_pontos_simulacao >= 15) {
                    printf("Situacao: Excelente campanha\n");
                }
                else if (total_pontos_simulacao >= 10) {
                    printf("Situacao: Boa campanha\n");
                }
                else if (total_pontos_simulacao >= 5) {
                    printf("Situacao: Campanha regular\n");
                }
                else {
                    printf("Situacao: Campanha ruim\n");
                }
            }

            break;

        case 5:

            printf("\nSistema encerrado com sucesso.\n");
            printf("Obrigado por utilizar o sistema.\n");

            break;

        default:

            printf("Opcao invalida! Digite uma opcao disponivel.\n");

            break;
        }
    }

    return 0;
}
