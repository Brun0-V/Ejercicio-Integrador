#include <stdio.h>
#include <string.h>

#define MAX_ESTUDIANTES 50
#define CAMPOS 5 //DNI, NOMBRE, APELLIDO, AÑO, NOTA_FINAL
#define DNI 0
#define NOMBRE 1
#define APELLIDO 2
#define AÑO 3
#define NOTA_FINAL 4
#define SIZE_PALABRA 50
char ListaEstudiantes[MAX_ESTUDIANTES][CAMPOS][SIZE_PALABRA];
int numEstudiantes = 0;
void mostrarMenu();
void eliminarEstudiante(const char* dni, char *Lista[MAX_ESTUDIANTES][CAMPOS]);
void actualizarEstudiante(const char* dni);
void buscarEstudiante(const char* dni);
void agregarEstudiante();

int main() {
    char ListaEstudiantes2[MAX_ESTUDIANTES][CAMPOS][SIZE_PALABRA];
    int opcion;
    char dni[SIZE_PALABRA];
    do {
        mostrarMenu();
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                agregarEstudiante();
                break;
            case 2:
                printf("Ingrese el DNI del estudiante: ");
                scanf("%s", dni);
                buscarEstudiante(dni);
                break;
            case 3:
                printf("Ingrese el DNI del estudiante: ");
                scanf("%s", dni);
                actualizarEstudiante(dni);
                break;
            case 4:
                printf("Ingrese el DNI del estudiante: ");
                scanf("%s", dni);
                eliminarEstudiante(dni, ListaEstudiantes2);
                break;
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida. Por favor, ingrese una opción válida.\n");
                break;
        }
        printf("\n");
    } while (opcion != 5);
    return 0;
}


void agregarEstudiante() {
    if (numEstudiantes >= MAX_ESTUDIANTES) {
        printf("Error: No se pueden agregar más estudiantes. El límite ha sido alcanzado.\n");
        return;
    }
    printf("Ingrese el DNI del estudiante: ");
    scanf("%s", ListaEstudiantes[numEstudiantes][DNI]);
    printf("Ingrese el nombre del estudiante: ");
    scanf("%s", ListaEstudiantes[numEstudiantes][NOMBRE]);
    printf("Ingrese el apellido del estudiante: ");
    scanf("%s", ListaEstudiantes[numEstudiantes][APELLIDO]);
    printf("Ingrese el año del estudiante: ");
    scanf("%s", ListaEstudiantes[numEstudiantes][AÑO]);
    printf("Ingrese la nota final del estudiante: ");
    scanf("%s", ListaEstudiantes[numEstudiantes][NOTA_FINAL]);
    numEstudiantes++;
    printf("Estudiante agregado correctamente.\n");
}

void buscarEstudiante(const char* dni) {
    int encontrado = 0;
    for (int i = 0; i < numEstudiantes; i++) {
        if (strcmp(ListaEstudiantes[i][DNI], dni) == 0) {
            printf("Estudiante encontrado:\n");
            printf("DNI: %s\n", ListaEstudiantes[i][DNI]);
            printf("Nombre: %s\n", ListaEstudiantes[i][NOMBRE]);
            printf("Apellido: %s\n", ListaEstudiantes[i][APELLIDO]);
            printf("Año: %s\n", ListaEstudiantes[i][AÑO]);
            printf("Nota Final: %s\n", ListaEstudiantes[i][NOTA_FINAL]);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado)
        printf("Estudiante no encontrado.\n");
}

void actualizarEstudiante(const char* dni) {
    int encontrado = 0;
    for (int i = 0; i < numEstudiantes; i++) {
        if (strcmp(ListaEstudiantes[i][DNI], dni) == 0) {
            printf("Estudiante encontrado. Ingrese los nuevos datos:\n");
            printf("Nombre: ");
            scanf("%s", ListaEstudiantes[i][NOMBRE]);
            printf("Apellido: ");
            scanf("%s", ListaEstudiantes[i][APELLIDO]);
            printf("Nota Final: ");
            scanf("%s", ListaEstudiantes[i][NOTA_FINAL]);
            encontrado = 1;
            printf("Estudiante actualizado correctamente.\n");
            break;
        }
    }
    if (!encontrado)
        printf("Estudiante no encontrado.\n");
}

void eliminarEstudiante(const char* dni, char *Lista[MAX_ESTUDIANTES][CAMPOS]) {
    int encontrado = 0;
    for (int i = 0; i < numEstudiantes; i++) {
        if (strcmp(Lista[i][DNI], dni) == 0) {
            for (int j = 0; j < CAMPOS; j++){
                for (int k = 0; k < SIZE_PALABRA; k++)
                    Lista[i][j][k] = '\0';
            }
            encontrado = 1;
            printf("Estudiante eliminado.\n");
        }
    }
    if (!encontrado)
        printf("Estudiante no encontrado.\n");
}

void mostrarMenu() {
    printf("Menu:\n");
    printf("1. Agregar estudiante\n");
    printf("2. Buscar estudiante\n");
    printf("3. Actualizar estudiante\n");
    printf("4. Eliminar estudiante\n");
    printf("5. Salir\n");
}