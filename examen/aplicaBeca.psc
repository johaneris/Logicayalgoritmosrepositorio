Proceso aplicaBeca
	Definir nota Como Entero;
	Definir necesita Como Entero;
	Definir tieneBeca Como Logico;
	Escribir 'Ingrese la nota del estudiante:';
	Leer nota;
	necesita <- 95;
	Si nota>=necesita Entonces
		tieneBeca <- Verdadero;
	SiNo
		tieneBeca <- Falso;
	FinSi
	Si tieneBeca Entonces
		Escribir 'El estudiante tiene beca.';
	SiNo
		Escribir 'El estudiante no tiene beca.';
	FinSi
FinProceso
