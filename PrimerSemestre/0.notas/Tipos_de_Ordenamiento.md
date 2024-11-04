# Ordenamientos
## Ordenamiento Burbuja
El ordenamiento burbuja es un algoritmo sencillo de ordenamiento. Funciona revisando cada elemento de la lista que va a ser ordenada con el siguiente, intercambiándolos de posición si están en el orden equivocado. Es necesario revisar varias veces toda la lista hasta que no se necesiten más intercambios, lo cual significa que la lista está ordenada. Este algoritmo obtiene su nombre de la forma con la que suben por la lista los elementos durante los intercambios, como si fueran pequeñas "burbujas".

``` c
void burbuja(int arreglo[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}
```

## Ordenamiento por Inserción
El ordenamiento por inserción es un algoritmo sencillo de ordenamiento que funciona de la siguiente manera: se recorre la lista de elementos desde el segundo elemento hasta el último, moviendo cada elemento a su posición correcta. El algoritmo de inserción es eficiente para listas pequeñas, o para listas que ya están casi ordenadas.

``` c
void insercion(int arreglo[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = arreglo[i];
        int j = i - 1;
        while (j >= 0 && arreglo[j] > temp) {
            arreglo[j + 1] = arreglo[j];
            j--;
        }
        arreglo[j + 1] = temp;
    }
}
```

## Ordenamiento por Selección
El ordenamiento por selección es un algoritmo sencillo de ordenamiento que funciona de la siguiente manera: se busca el elemento más pequeño de la lista y se intercambia con el primer elemento. Luego se busca el segundo elemento más pequeño y se intercambia con el segundo elemento, y así sucesivamente hasta que toda la lista esté ordenada.

``` c
void seleccion(int arreglo[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arreglo[j] < arreglo[min]) {
                min = j;
            }
        }
        int temp = arreglo[i];
        arreglo[i] = arreglo[min];
        arreglo[min] = temp;
    }
}
```

## Ordenamiento por Mezcla
El ordenamiento por mezcla es un algoritmo de ordenamiento que divide la lista en mitades, ordena cada mitad de forma recursiva y luego combina las dos mitades ordenadas. El algoritmo de mezcla es eficiente para listas grandes, pero requiere memoria adicional para almacenar las sublistas temporales.

``` c
void mezcla(int arreglo[], int inicio, int fin) {
    if (inicio < fin) {
        int medio = (inicio + fin) / 2;
        mezcla(arreglo, inicio, medio);
        mezcla(arreglo, medio + 1, fin);
        fusion(arreglo, inicio, medio, fin);
    }
}

```

## Ordenamiento Rápido
El ordenamiento rápido es un algoritmo de ordenamiento que elige un elemento como pivote y divide la lista en dos partes, una con elementos menores que el pivote y otra con elementos mayores. Luego ordena las dos partes de forma recursiva. El algoritmo de ordenamiento rápido es eficiente para listas grandes y tiene un rendimiento promedio de O(n log n).

``` c
void rapido(int arreglo[], int inicio, int fin) {
    if (inicio < fin) {
        int pivote = particion(arreglo, inicio, fin);
        rapido(arreglo, inicio, pivote - 1);
        rapido(arreglo, pivote + 1, fin);
    }
}
```