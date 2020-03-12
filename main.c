#include <stdio.h>
#include <math.h>
#include <stdlib.h> 
#include <string.h>
#include "dados.h"
#include "interface.h"
#include "logica.h"

int main(){
    ESTADO *e = inicializar_estado();
    interpretador(e);

    return 0;

}