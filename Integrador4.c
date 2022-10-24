#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define true 0
#define false 1
/*LC1 - Ejercicio Integrador 4
Se desea realizar un programa que gestione el stock de un negocio de venta de
electrodomésticos. Como máximo se permitirán cargar 100 electrodomésticos. De cada
electrodoméstico se conoce su código de barras, su descripción y una cantidad en stock.
Se deberá presentar un menú con las siguientes opciones:
1. Cargar productos.
2. Modificar stock.
3. Mostrar productos sin stock.
4. Listar productos.
5. Salir.
Donde, la opción 1 permite cargar los 100 electrodomésticos ingresando para cada uno: código
de barras, descripción y cantidad.
La opción 2 debe pedir el código de barras del electrodoméstico al cual se desea cambiar el
stock y la nueva cantidad. Si el código de barras ingresado no existe, informar la situación con
un mensaje “Electrodoméstico inexistente”, si el código de barras si se encuentra modificar su
stock con la cantidad ingresada.
La opción 3 debe mostrar en la consola los datos de aquellos electrodomésticos con cantidad
igual a cero.
La opción 4 debe mostrar en la consola el listado de electrodomésticos.
SOLO se saldrá de la aplicación si se selecciona la opción 5.*/
int opcion;
struct product // arrays y otras variables//
    {
        char id[10];
        char nombre[20];
        int cantidadStock;
    };

    struct product prod[100]; // cantidad de arreglos máxima a ingresar
    int contador = 0, i = 0, opcion;
    int contadorID;
void AgregarProd(){
    for(i=0; i<5; i++){
        printf("Agregar producto\n");
		fflush(stdin); 
        printf("ID del producto");scanf("%s",&prod[contador].id);
        printf("Nombre del producto: ");scanf("%s",&prod[contador].nombre);
        printf("Stock: ");scanf("%d",&prod[contador].cantidadStock);
        ++contador;
    }
}
void sinStock(){
    //Aca muestra productos sin stock//
        printf("\nProductos sin stock: ");
        for (i=0; i<contador; i++){
		if(prod[i].cantidadStock==0)
    printf("\nNombre del producto: %s \n Id: %s \nStock actual: %d \n",prod[i].nombre,prod[i].id,prod[i].cantidadStock);
		}
    }

void editarStock(){
    //Aca se puede editar el stock//
    char id[10];
    int i;
    int ContadorID;
    printf("\nIngresar el ID del producto que quieres editar stock: ");
        fflush(stdin);
     
     gets(id);
       {if (ContadorID == 0){
            ContadorID = ContadorID + 1;
            fflush(stdin);
            printf("Ingresar cantidad: ");
            scanf("%d",&prod[i].id);
            }
        else {
                printf("El ID es inexistente");
            }
        }
}
void mostrarProductos(){
    //Aca muestra el listado de productos y stock//
        printf("\nListado de productos y stock: ");
        for (i=0; i<contador; i++){
		if(prod[i].cantidadStock!=0)
    printf("\nNombre del producto: %s \n Id: %s \nStock actual: %d \n",prod[i].nombre,prod[i].id,prod[i].cantidadStock);
		}
    }

int main (){
	int opcion;
do {
	printf("\n");
	printf("\t\t\t  ================================\n");
	printf("\t\t\t     Inventario de productos\n");
	printf("\t\t\t  ================================");

	printf("\n\nOpciones:");
	printf("\n 1.) Cargar productos.");
	printf("\n 2.) Modificar stock.");
	printf("\n 3.) Mostrar productos sin stock .");
	printf("\n 4.) Listar productos");
	printf("\n 5.) Salir del programa.");
	printf("\nElija una opcion--> ");
	scanf("%d", &opcion);
	     switch(opcion){
        case 1:
            AgregarProd();
            break;
        case 2:
            editarStock();
            break;
        case 3: 
            sinStock();
            break;
		case 4:
            mostrarProductos();
            break;
		case 5:
		 	  exit(1);
			   break;
		 default :
            printf("Ha elegido una opción incorrecta, inténtelo nuevamente");
            break;
      }
  }while(opcion!=5);
  printf("\nGracias por usar este programa \n");
  printf("\nTecnicatura en Programación - UTN 2022 \n");
}