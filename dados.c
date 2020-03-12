typedef enum {VAZIO, BRANCA, PRETA} CASA;
typedef struct {
    int coluna;
    int linha;
} COORDENADA;
typedef struct {
    COORDENADA jog1;
    COORDENADA jog2;
} JOGADA;
typedef JOGADA JOGADAS [32];
typedef struct {
    CASA tab [8][8]; // tab armaneza informaçao sobre o tabuleiro 
    COORDENADA ultima_jogada; // coordenada da ultima jogada 
    JOGADAS jogadas; // jogadas armaneza informaçao sobre as jogadas
    int num_jogadas; // indica quantas jogadas foram efetuadas
    int jogador_atual; //
} ESTADO;





//Funçao que deve ser completada e colocada na camada de dados 
ESTADO *inicializar_estado (){
    ESTADO *e = (ESTADO *) malloc(sizeof(ESTADO));
    e-> jogador_atual=1;
    e-> num_jogadas =0;
    //Falta a resto da inicializaçao
    return e;
}


