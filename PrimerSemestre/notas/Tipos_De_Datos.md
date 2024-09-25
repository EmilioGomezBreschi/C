# Tipos de Datos

| **Especificador** | **Descripción**                                                                 | **Tipo de dato**             | **Ejemplo**                          |
|-------------------|---------------------------------------------------------------------------------|------------------------------|--------------------------------------|
| `%d`              | Imprime un número entero con signo en base 10.                                  | `int`                        | `printf("%d", 42);`                 |
| `%i`              | Igual que `%d`, pero en `scanf` detecta automáticamente la base del número.     | `int`                        | `printf("%i", 42);`                 |
| `%u`              | Imprime un número entero sin signo en base 10.                                  | `unsigned int`               | `printf("%u", 42);`                 |
| `%o`              | Imprime un número en formato octal (base 8).                                    | `unsigned int`               | `printf("%o", 42);`                 |
| `%x`              | Imprime un número en formato hexadecimal (con letras minúsculas).               | `unsigned int`               | `printf("%x", 42);`                 |
| `%X`              | Imprime un número en formato hexadecimal (con letras mayúsculas).               | `unsigned int`               | `printf("%X", 42);`                 |
| `%f`              | Imprime un número de punto flotante en formato decimal (precisión fija).        | `float`, `double`            | `printf("%f", 3.14);`               |
| `%e`              | Imprime un número de punto flotante en notación científica (con `e` minúscula). | `float`, `double`            | `printf("%e", 3.14);`               |
| `%E`              | Imprime un número de punto flotante en notación científica (con `E` mayúscula). | `float`, `double`            | `printf("%E", 3.14);`               |
| `%g`              | Usa `%f` o `%e`, dependiendo de cuál sea más corto, sin ceros no significativos.| `float`, `double`            | `printf("%g", 3.14);`               |
| `%G`              | Usa `%f` o `%E`, dependiendo de cuál sea más corto, sin ceros no significativos.| `float`, `double`            | `printf("%G", 3.14);`               |
| `%a`              | Imprime un número de punto flotante en hexadecimal (con `p` para el exponente). | `float`, `double`            | `printf("%a", 3.14);`               |
| `%A`              | Igual que `%a`, pero usa letras mayúsculas en el exponente.                     | `float`, `double`            | `printf("%A", 3.14);`               |
| `%c`              | Imprime un solo carácter.                                                       | `char`                       | `printf("%c", 'A');`                |
| `%s`              | Imprime una cadena de caracteres (string).                                      | `char*`                      | `printf("%s", "Hello");`            |
| `%p`              | Imprime un puntero en formato hexadecimal.                                      | `void*`                      | `printf("%p", ptr);`                |
| `%n`              | Almacena el número de caracteres impresos hasta ese punto en la variable.       | `int*`                       | `printf("Hello%n", &count);`        |
| `%%`              | Imprime el símbolo `%`.                                                         | N/A                          | `printf("%%");`                     |

### Especificadores de Ancho y Precisión

Además, puedes modificar el comportamiento de estos especificadores con los siguientes modificadores de ancho y precisión:

| **Modificador**  | **Descripción**                                                    |
|------------------|--------------------------------------------------------------------|
| `number`         | Define un ancho mínimo para la salida.                             |
| `.number`        | Define la cantidad máxima de dígitos a mostrar o precisión.        |
| `-`              | Justifica el valor a la izquierda.                                |
| `+`              | Siempre muestra el signo de un número.                            |
| `0`              | Añade ceros a la izquierda en lugar de espacios en blanco.        |
| `#`              | Usa una representación alternativa: `0x` para hex, `0` para octal. |

### Modificadores de Tamaño (para números más grandes o más pequeños)

| **Modificador** | **Descripción**                                       |
|-----------------|-------------------------------------------------------|
| `h`             | Para números más pequeños: `short int` o `unsigned short`.|
| `l`             | Para números más grandes: `long int` o `unsigned long`.|
| `ll`            | Para números más grandes: `long long int` o `unsigned long long`.|
| `L`             | Para números de precisión extendida: `long double`.   |

### Ejemplos

1. **Impresión de un entero sin signo en hexadecimal:**

   ```c
   unsigned int num = 255;
   printf("Hexadecimal: %x\n", num);  // Salida: ff
   ```

2. **Impresión de un flotante con 2 dígitos de precisión:**

   ```c
   double pi = 3.141592;
   printf("Pi con dos decimales: %.2f\n", pi);  // Salida: 3.14
   ```

3. **Impresión de un entero largo:**

   ```c
   long num = 123456789L;
   printf("Número largo: %ld\n", num);  // Salida: 123456789
   ```

Esta tabla cubre todos los especificadores estándar en C.