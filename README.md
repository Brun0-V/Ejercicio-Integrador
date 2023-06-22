# Enunciado
¡Felicidades! Has sido contratado (ad honorem) por una de las empresas tecnol ́ogicas m ́as grandes
del mundo para contribuir en el desarrollo de su popular editor de texto. Tu primera tarea es
implementar una parte de dicho editor: la capacidad de realizar operaciones de formato en cadenas
de texto.
Escribe un programa en lenguaje C que implemente las siguientes tres funciones para realizar
operaciones de formato en una cadena de caracteres:
1. ``void convertirTodoMayuscula (char *oracion)``: Recibe un puntero a una cadena de caracteres
y modifica la cadena para que todos sus caracteres est ́en en mayúscula.
2. ``void convertirTodoMinuscula (char *oracion)``: Recibe un puntero a una cadena de caracteres
y modifica la cadena para que todos sus caracteres estén en minúscula.
3. ``void convertirPrimerLetraMayuscula (char *oracion)``: Recibe un puntero a una cadena
de caracteres y modifica la cadena para que solo la primera letra de cada palabra esté en mayúscula, mientras que el resto de la cadena permanezca igual.
El programa debe solicitar al usuario que ingrese una oración de hasta 250 caracteres (codificados en ASCII) por consola y luego mostrar por pantalla de forma directa las tres variantes de la oración transformada.
Ejemplo
Entrada
Ingresa una oraci ́on de hasta 250 caracteres: HoLa, mUndo! eSToy eN el DesaF ́Io del EDITOR de TexTo.
Salida esperada
Oracion en MAYUSCULAS: HOLA, MUNDO! ESTOY EN EL DESAFIO DEL EDITOR DE TEXTO.
Oracion en minusculas: hola, mundo! estoy en el desafio del editor de texto.
Oracion con Inicial Mayuscula: Hola, Mundo! Estoy En El Desafio Del Editor De Texto.