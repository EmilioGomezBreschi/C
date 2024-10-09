# Tipos de paso de parametros

En C, los parámetros de una función pueden ser pasados de diferentes maneras. Estas formas de pasar parámetros se conocen como **tipos de paso de parámetros**. Los tipos de paso de parámetros más comunes son:

1. **Paso por valor**: Se pasa una copia del valor de la variable al parámetro de la función. Los cambios realizados en el parámetro no afectan a la variable original.

2. **Paso por referencia**: Se pasa la dirección de memoria de la variable al parámetro de la función. Los cambios realizados en el parámetro afectan a la variable original.

3. **Paso por dirección**: Se pasa un puntero al parámetro de la función. Los cambios realizados en el parámetro afectan a la variable original.

## Paso por valor

En el paso por valor, se pasa una copia del valor de la variable al parámetro de la función. Esto significa que cualquier cambio realizado en el parámetro dentro de la función no afecta a la variable original. La sintaxis para pasar un parámetro por valor es la siguiente:

```c
void funcion(int parametro) {
    // Código de la función
}

int main() {
    int variable = 42;
    funcion(variable);
    // La variable original no se modifica
    return 0;
}
```

## Paso por referencia

En el paso por referencia, se pasa la dirección de memoria de la variable al parámetro de la función. Esto permite modificar la variable original desde la función. La sintaxis para pasar un parámetro por referencia es la siguiente:

```c
void funcion(int* parametro) {
    // Código de la función
}

int main() {
    int variable = 42;
    funcion(&variable);
    // La variable original se modifica
    return 0;
}
```

## Paso por dirección

En el paso por dirección, se pasa un puntero al parámetro de la función. Esto permite modificar la variable original desde la función. La sintaxis para pasar un parámetro por dirección es la siguiente:

```c
void funcion(int* parametro) {
    // Código de la función
}

int main() {
    int variable = 42;
    int* puntero = &variable;
    funcion(puntero);
    // La variable original se modifica
    return 0;
}
```