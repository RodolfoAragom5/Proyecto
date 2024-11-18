#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PUEBLOS 100
#define TIPOS_BEBIDAS 8


/*	NOTA: LO DE ABAJO SON INDICACIONES DEL PROGRAMA, EL CÓDIGO EMPIEZA EN LA LINEA 127, FIN DEL ANUNCIO :V	*/

/*  HÁBITOS DE CONSUMO: BEBIDAS 

El Gobierno Vasco quiere hacer un estudio de hábitos de consumo de 
alcohol y bebida entre la juventud vasca. Para ello, ha escogido 100 pueblos 
donde llevará a cabo la consulta. El ayuntamiento de cada uno de estos 
pueblos recogerá el número de litros consumidos durante el pasado año de 
los 8 tipos de bebidas nombrados a continuación: 
Tipos De Bebidas 
0. Naturales: agua, leche, zumos, mostos, infusiones, ... 
1. Gaseosos: Refrescos 
2. Vinos 
3. Cervezas 
4. Whisky 
5. Licores 
6. Energéticos: Aquarius, Red Bull,... 
7. Combinados: Cubatas, GinTonics,.. 
Mediante un programa en C, se te pide que realices un estudio que estará 
compuesto por los siguientes pasos: 
1. Recoge y almacena la información, para cada pueblo, sobre los litros 
consumidos de los tipos de bebidas mencionados. Recuerda que 100 
pueblos aportarán información a tu estudio. No obstante, la 
información no te la tienen por qué dar ordenada por tipo de bebida o 
número de litros y puede que de algún tipo de bebida no se tenga 
información. 
Así, será preciso introducir pares (tipo de bebida, litros) y para indicar 
que no hay más datos de un pueblo, bastará con introducir como tipo 
de bebida el valor -1. Ver ejemplo para cada uno de los apartados al 
final del enunciado.  
2. Determina el “tipo de bebida” más consumida entre todos los pueblos; 
es decir, el tipo de bebida del que más litros se hayan bebido entre todos 
los pueblos. 
3. Recoge y almacena cuáles de las clases de bebidas tienen alcohol. Para 
ello, te dan únicamente la lista de los “tipos de bebidas” que contienen 
alcohol acabada con un -1 para indicar que no hay más tipos de bebida 
que tengan alcohol. Por ejemplo: 7  2  5  4  3  -1 

a) De los “tipos de bebidas” con alcohol, ¿cuál es el más consumido?

 HÁBITOS DE CONSUMO: BEBIDAS 
El Gobierno Vasco quiere hacer un estudio de hábitos de consumo de 
alcohol y bebida entre la juventud vasca. Para ello, ha escogido 100 pueblos 
donde llevará a cabo la consulta. El ayuntamiento de cada uno de estos 
pueblos recogerá el número de litros consumidos durante el pasado año de 
los 8 tipos de bebidas nombrados a continuación: 
Tipos De Bebidas 
0. Naturales: agua, leche, zumos, mostos, infusiones, ... 
1. Gaseosos: Refrescos 
2. Vinos 
3. Cervezas 
4. Whisky 
5. Licores 
6. Energéticos: Aquarius, Red Bull,... 
7. Combinados: Cubatas, GinTonics,.. 
Mediante un programa en C, se te pide que realices un estudio que estará 
compuesto por los siguientes pasos: 
1. Recoge y almacena la información, para cada pueblo, sobre los litros 
consumidos de los tipos de bebidas mencionados. Recuerda que 100 
pueblos aportarán información a tu estudio. No obstante, la 
información no te la tienen por qué dar ordenada por tipo de bebida o 
número de litros y puede que de algún tipo de bebida no se tenga 
información. 
Así, será preciso introducir pares (tipo de bebida, litros) y para indicar 
que no hay más datos de un pueblo, bastará con introducir como tipo 
de bebida el valor -1. Ver ejemplo para cada uno de los apartados al 
final del enunciado.  
2. Determina el “tipo de bebida” más consumida entre todos los pueblos; 
es decir, el tipo de bebida del que más litros se hayan bebido entre todos 
los pueblos. 
3. Recoge y almacena cuáles de las clases de bebidas tienen alcohol. Para 
ello, te dan únicamente la lista de los “tipos de bebidas” que contienen 
alcohol acabada con un -1 para indicar que no hay más tipos de bebida 
que tengan alcohol. Por ejemplo: 7  2  5  4  3  -1 
a. 
De los “tipos de bebidas” con alcohol, ¿cuál es el más consumido? 
 HÁBITOS DE CONSUMO: BEBIDAS 
El Gobierno Vasco quiere hacer un estudio de hábitos de consumo de 
alcohol y bebida entre la juventud vasca. Para ello, ha escogido 100 pueblos 
donde llevará a cabo la consulta. El ayuntamiento de cada uno de estos 
pueblos recogerá el número de litros consumidos durante el pasado año de 
los 8 tipos de bebidas nombrados a continuación: 
Tipos De Bebidas 
0. Naturales: agua, leche, zumos, mostos, infusiones, ... 
1. Gaseosos: Refrescos 
2. Vinos 
3. Cervezas 
4. Whisky 
5. Licores 
6. Energéticos: Aquarius, Red Bull,... 
7. Combinados: Cubatas, GinTonics,.. 
Mediante un programa en C, se te pide que realices un estudio que estará 
compuesto por los siguientes pasos: 
1. Recoge y almacena la información, para cada pueblo, sobre los litros 
consumidos de los tipos de bebidas mencionados. Recuerda que 100 
pueblos aportarán información a tu estudio. No obstante, la 
información no te la tienen por qué dar ordenada por tipo de bebida o 
número de litros y puede que de algún tipo de bebida no se tenga 
información.
 
Así, será preciso introducir pares (tipo de bebida, litros) y para indicar 
que no hay más datos de un pueblo, bastará con introducir como tipo 
de bebida el valor -1. Ver ejemplo para cada uno de los apartados al 
final del enunciado.
  
2. Determina el “tipo de bebida” más consumida entre todos los pueblos; 
es decir, el tipo de bebida del que más litros se hayan bebido entre todos 
los pueblos. 

3. Recoge y almacena cuáles de las clases de bebidas tienen alcohol. Para 
ello, te dan únicamente la lista de los “tipos de bebidas” que contienen 
alcohol acabada con un -1 para indicar que no hay más tipos de bebida 
que tengan alcohol. Por ejemplo: 7  2  5  4  3  -1 

a) De los “tipos de bebidas” con alcohol, ¿cuál es el más consumido? 

b) ¿En qué pueblo se bebe más alcohol en total?  

HECHO POR: ROMERO SANDOVAL RODOLFO ARAGOM 

*/

	/* INICIO DE LAS F U N C I O N E S */

void inicializarConsumos(int consumos[], int tam) 
{
	
	int i;
	
    for (i=0;i<tam;i++) 
	{
        consumos[i] = 0;
    }
}

void registrarConsumos(int totalConsumos[], int puebloConsumos[], int pueblo) 
{
    int tipo, litros;

    printf("Introduce la cantidad de consumos del pueblo %d (-1 para finalizar):\n", pueblo);
    while (1) 
	{
        printf("Tipo de bebida: ");
        scanf("%d", &tipo);
        if (tipo == -1) break;

        printf("Litros consumidos: ");
        scanf("%d", &litros);

        if (tipo>=0 && tipo<TIPOS_BEBIDAS) 
		{
            puebloConsumos[tipo] += litros;
            totalConsumos[tipo] += litros;
        }
    }
}

int bebidaMasConsumida(int consumos[], int tam) 
{
	int i;
    int maxLitros = 0, tipoMasConsumido = -1;
    for (i=0;i<tam;i++) 
	{
        if (consumos[i] > maxLitros) 
		{
            maxLitros = consumos[i];
            tipoMasConsumido = i;
        }
    }
    return tipoMasConsumido;
}

int puebloMasAlcohol(int consumos[PUEBLOS][TIPOS_BEBIDAS], int bebidasAlcohol[], int CanAlcohol) 
{
    int maxAlcohol = 0, puebloMayorConsumo = -1;

	int i, j;

    for (i=0; i<PUEBLOS; i++) 
	{
        int consumoPueblo = 0;
        for (j=0; j<CanAlcohol; j++) 
		{
            consumoPueblo += consumos[i][bebidasAlcohol[j]];
        }
        if (consumoPueblo > maxAlcohol) 
		{
            maxAlcohol = consumoPueblo;
            puebloMayorConsumo = i;
        }
    }
    return puebloMayorConsumo;
}

	/* FIN DE LAS F U N C I O N E S  */
	
	
	
	/* INICIO DEL MAIN*/

int main() 
{
	
	setlocale(LC_ALL,"");
	
	
    int totalConsumos[TIPOS_BEBIDAS];
    int consumosPorPueblo[PUEBLOS][TIPOS_BEBIDAS];
    int bebidasAlcoholicas[TIPOS_BEBIDAS];
    int numAlcoholicas = 0;
    int tipoMasConsumido;
    int puebloMayorAlcohol;
    int i;
    int tipo;

    inicializarConsumos(totalConsumos, TIPOS_BEBIDAS);
    for (i=0; i<PUEBLOS; i++) 
	{
        inicializarConsumos(consumosPorPueblo[i], TIPOS_BEBIDAS);
    }

    for (i=0; i<PUEBLOS; i++) 
	{
        registrarConsumos(totalConsumos, consumosPorPueblo[i], i + 1);
    }

    tipoMasConsumido = bebidaMasConsumida(totalConsumos, TIPOS_BEBIDAS);
    printf("\nEl tipo de bebida más consumido es: %d.\n", tipoMasConsumido);

    printf("\nIntroduce el tipo de bebidas con alcohol (-1 para finalizar el listado):\n");
    while (1) 
	{
         tipo;
        scanf("%d", &tipo);
        if (tipo == -1) break;

        bebidasAlcoholicas[numAlcoholicas++] = tipo;
    }

    int maxAlcohol = 0, tipoAlcoholMasConsumido = -1;
    for (i = 0; i<numAlcoholicas; i++) 
	{
        tipo = bebidasAlcoholicas[i];
        if (totalConsumos[tipo] > maxAlcohol) 
		{
            maxAlcohol = totalConsumos[tipo];
            tipoAlcoholMasConsumido = tipo;
        }
    }
    printf("\nEl tipo de bebida alcohólica más consumido es: %d.\n", tipoAlcoholMasConsumido);

    puebloMayorAlcohol = puebloMasAlcohol(consumosPorPueblo, bebidasAlcoholicas, numAlcoholicas);
    printf("\nEl pueblo con el mayor consumo de bebidas con alcohol es: %d.\n", puebloMayorAlcohol + 1);

    return 0;
}

	/* FIN DEL MAIN*/
