
#include <stdio.h>



//goto funciona de la siguiente manera 

// goto etiqueta;


int archivo(){

    FILE *archivo = fopen("datos.txt", "r");
    if(archivo == NULL){
        goto error;
    }

    fclose(archivo);

    return 0;

error:
    printf("No se pudo abrri el archivos");
    return 1;

}



int main(int argc, char const *argv[])
{
    
    archivo();
    return 0;
}
