#include <stdio.h>      // Inclui a biblioteca padrão de entrada e saída
#include <stdlib.h>     // Inclui a biblioteca para alocação de memória e funções utilitárias

#define VALOR_MAXIMO_PIXEL 255  // Define o valor máximo de um pixel em uma imagem PGM

// Função para aplicar o filtro da mediana em uma imagem
void aplicar_filtro_mediana(int **img, int w, int h, int t) {
    int d = t / 2;  // Calcula o deslocamento da janela (metade do tamanho do filtro)
    int *janela = malloc(t * t * sizeof(int));  // Aloca memória para a janela do filtro

    // Percorre cada pixel da imagem, ignorando as bordas
    for (int i = d; i < h - d; i++) {
        for (int j = d; j < w - d; j++) {
            int k = 0;  // Índice para a janela
            // Preenche a janela com os valores dos pixels vizinhos
            for (int x = -d; x <= d; x++)
                for (int y = -d; y <= d; y++)
                    janela[k++] = img[i + x][j + y];

            // Ordena a janela usando o método de ordenação por bolha
            for (int m = 0; m < t * t - 1; m++) {
                for (int n = 0; n < t * t - m - 1; n++) {
                    if (janela[n] > janela[n + 1]) {
                        // Troca os elementos
                        int temp = janela[n];
                        janela[n] = janela[n + 1];
                        janela[n + 1] = temp;
                    }
                }
            }

            img[i][j] = janela[k / 2];  // Atribui a mediana ao pixel central
        }
    }
    free(janela);  // Libera a memória alocada para a janela
}

// Função para ler uma imagem PGM de um arquivo
int **ler_pgm(const char *nome, int *w, int *h) {
    FILE *f = fopen(nome, "r");  // Abre o arquivo para leitura
    fscanf(f, "P2\n%d %d\n%*d\n", w, h);  // Lê o cabeçalho da imagem (tipo e dimensões)
    
    // Aloca memória para a matriz da imagem
    int **img = malloc(*h * sizeof(int *));
    for (int i = 0; i < *h; i++) {
        img[i] = malloc(*w * sizeof(int));  // Aloca memória para cada linha da imagem
        for (int j = 0; j < *w; j++)
            fscanf(f, "%d", &img[i][j]);  // Lê os valores dos pixels
    }
    fclose(f);  // Fecha o arquivo
    return img;  // Retorna a matriz da imagem
}

// Função para salvar uma imagem PGM em um arquivo
void salvar_pgm(const char *nome, int **img, int w, int h) {
    FILE *f = fopen(nome, "w");  // Abre o arquivo para escrita
    fprintf(f, "P2\n%d %d\n%d\n", w, h, VALOR_MAXIMO_PIXEL);  // Escreve o cabeçalho da imagem
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++)
            fprintf(f, "%d ", img[i][j]);  // Escreve os valores dos pixels
        fprintf(f, "\n");  // Nova linha após cada linha de pixels
    }
    fclose(f);  // Fecha o arquivo
}

// Função principal do programa
int main() {
    int w, h;  // Variáveis para armazenar a largura e altura da imagem
    int **img = ler_pgm("entrada.pgm", &w, &h);  // Lê a imagem de entrada
    aplicar_filtro_mediana(img, w, h, 3);  // Aplica o filtro da mediana com tamanho 3x3
    salvar_pgm("saida.pgm", img, w, h);  // Salva a imagem filtrada em um novo arquivo
    for (int i = 0; i < h; i++) free(img[i]);  // Libera
}