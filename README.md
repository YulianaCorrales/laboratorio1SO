Práctica – Utilidades de Archivos en C
Integrantes

Nombre: Yuliana Corrales Castaño

Correo: yuliana.corralesc@udea.edu.co

Documento: 

Otros integrantes:

Descripción del Proyecto

En esta práctica se implementaron versiones simplificadas de algunas utilidades del sistema UNIX utilizando el lenguaje C.
Los programas desarrollados permiten manipular archivos de texto y realizar operaciones básicas como visualizar contenido, buscar patrones y comprimir o descomprimir información.

Los programas desarrollados fueron:

wcat

wgrep

wzip

wunzip

Todos los programas se implementaron utilizando funciones de la biblioteca estándar de C para manejo de archivos como:

fopen()

fgets()

fclose()

printf()

Documentación de las Funciones
wcat.c

El programa wcat permite mostrar el contenido de uno o varios archivos en la salida estándar.

Funcionamiento:

Recibe uno o más archivos como argumentos desde la línea de comandos.

Abre cada archivo usando fopen().

Lee el contenido línea por línea utilizando fgets().

Imprime cada línea utilizando printf().

Si ocurre un error al abrir un archivo, muestra el mensaje:

wcat: cannot open file

y termina la ejecución.

wgrep.c

El programa wgrep busca un patrón específico dentro de un archivo de texto.

Funcionamiento:

Recibe un patrón y un archivo como argumentos.

Abre el archivo con fopen().

Lee cada línea del archivo.

Verifica si la línea contiene el patrón solicitado.

Si lo contiene, imprime la línea en pantalla.

Este comportamiento es similar al comando grep de UNIX.

wzip.c

El programa wzip realiza una compresión simple utilizando Run-Length Encoding (RLE).

Funcionamiento:

Lee caracteres consecutivos iguales.

Cuenta cuántas veces se repiten.

Escribe el número de repeticiones seguido del carácter.

Ejemplo:

aaaaabbbcc

se comprime como:

5a3b2c
wunzip.c

El programa wunzip realiza el proceso inverso al de wzip.

Funcionamiento:

Lee el número de repeticiones.

Lee el carácter asociado.

Imprime el carácter la cantidad de veces indicada.

De esta manera se reconstruye el archivo original.

Problemas Presentados Durante el Desarrollo

Durante el desarrollo de la práctica se presentaron algunos inconvenientes, entre ellos:

Manejo correcto de errores al abrir archivos.

Lectura adecuada de líneas utilizando fgets().

Organización de los archivos dentro del proyecto.

Comprensión del funcionamiento del algoritmo de compresión utilizado en wzip.

Estos problemas se resolvieron mediante pruebas en el sistema Ubuntu y revisando la documentación de las funciones utilizadas.

Pruebas Realizadas

Para verificar el correcto funcionamiento de los programas se realizaron diferentes pruebas:

Prueba wcat
./wcat archivo.txt

Resultado: se imprime el contenido completo del archivo.

Prueba wgrep
./wgrep palabra archivo.txt

Resultado: se muestran únicamente las líneas que contienen la palabra buscada.

Prueba wzip
./wzip archivo.txt > archivo.z

Resultado: se genera un archivo comprimido.

Prueba wunzip
./wunzip archivo.z

Resultado: se obtiene nuevamente el contenido original del archivo.

Enlace al Video de Sustentación

Agregar aquí el enlace al video de explicación del proyect0:

https://youtube.com/...

Manifiesto de Transparencia – Uso de IA

Durante el desarrollo de esta práctica se utilizó inteligencia artificial generativa como apoyo para:

Comprender el funcionamiento de algunas funciones del lenguaje C.

Aclarar dudas sobre manejo de archivos.

Orientación para la organización del repositorio y documentación.

El diseño, comprensión y ejecución del código fue realizado por los integrantes del grupo, utilizando la IA únicamente como herramienta de apoyo académico.
