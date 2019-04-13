#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 5

typedef struct TipoLista {
    int itens[TAM_MAX];
    int primeiro, ultimo;
}TipoLista;

void InicializarLista (TipoLista *lista) {
    lista->primeiro=lista->ultimo= -1;
}

int VaziaLista (TipoLista lista) {
    if (lista.primeiro == -1 )
        return 1;
    else
        return 0;
}

void InsereLista (int x, TipoLista *lista) {
    if (!VaziaLista(*lista)){
        if (lista->ultimo < TAM_MAX){
            lista->itens[lista->ultimo+1] = x;
            lista->ultimo++;
        } else {
            printf("\n\nA lista esta cheia\n\n");
        }
    } else {
        lista->primeiro = 0;
        lista->ultimo = 0;
        lista->itens[lista->primeiro];
    }
}

void ImprimeLista (TipoLista lista){
    int leitura;
    leitura = lista.primeiro;
    for (int i=0;i==lista.ultimo;i++){
        printf("\n\nSegue a lista abaixo:");
        printf("%d - item %d", i, lista.itens[leitura]);
        leitura++;
    }

}

int menu () {
    int teclado;
    printf("Implementacao de Lista Linear Com Vetores de tamanho 5\n\n");
    printf("0 - Sair do programa\n");
    printf("1 - Inserir no final da lista\n");
    printf("2 - Ver a lista inteira indexada\n");
    printf("Opcao: ");
    scanf("%d",&teclado);
    return teclado;
}

void opcao (int teclado, TipoLista *lista) {
    switch (teclado) {
    case 0:
        exit(0);
        break;
    case 1:
        InsereLista(teclado,lista);
        break;
    case 2:
        ImprimeLista(*lista);
        break;
    default:
        printf("Digite uma alternativa válida!!");
    }
}

int main () {
    TipoLista *lista;
    InicializarLista (lista);
    int teclado = -1;
    while (teclado != 0) {
        teclado = menu();
        opcao(teclado,lista);
    }
    return 0;
}



