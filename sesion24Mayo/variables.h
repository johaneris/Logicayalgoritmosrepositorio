//organizan informacion que se relacioanan entre si, en este ejmplo se usa a un estudiante, se escribe entre llaves y contiene las variables que se concoen como elemntos 
//conjunto de elementos que se relacionan entre si
// si no se pone no va a ser un tipo de dato, solo una variable



#define MAXREGISTERS 100
#define MAXCHAR 60


typedef struct PERSON{
    char cif[MAXCHAR];
    char name[MAXCHAR];
    char lastname[MAXCHAR];
    int grade;
};


