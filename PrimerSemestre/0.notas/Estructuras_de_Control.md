# Estructuras de control

Las estructuras de control son bloques de código que permiten controlar el flujo de ejecución de un programa. En C, las estructuras de control básicas son:

- **if**: permite ejecutar un bloque de código si se cumple una condición.
- **else**: permite ejecutar un bloque de código si no se cumple la condición del **if**.
- **else if**: permite evaluar una condición si no se cumple la condición del **if**.
- **switch**: permite evaluar una variable y ejecutar un bloque de código dependiendo del valor de la variable.
- **for**: permite ejecutar un bloque de código un número determinado de veces.
- **while**: permite ejecutar un bloque de código mientras se cumpla una condición.
- **do while**: permite ejecutar un bloque de código al menos una vez y mientras se cumpla una condición.

## if

La estructura **if** permite ejecutar un bloque de código si se cumple una condición. La sintaxis es la siguiente:

```c
if (condición) {
    // Bloque de código
}
```

Donde **condición** es una expresión que se evalúa a verdadero o falso. Si la condición es verdadera, se ejecuta el bloque de código. Si la condición es falsa, no se ejecuta el bloque de código.

## else

La estructura **else** permite ejecutar un bloque de código si no se cumple la condición del **if**. La sintaxis es la siguiente:

```c
if (condición) {
    // Bloque de código si la condición es verdadera
} else {
    // Bloque de código si la condición es falsa
}
```

## else if

La estructura **else if** permite evaluar una condición si no se cumple la condición del **if**. La sintaxis es la siguiente:

```c
if (condición1) {
    // Bloque de código si la condición1 es verdadera
} else if (condición2) {
    // Bloque de código si la condición2 es verdadera
} else {
    // Bloque de código si ninguna de las condiciones anteriores es verdadera
}
```

## switch

La estructura **switch** permite evaluar una variable y ejecutar un bloque de código dependiendo del valor de la variable. La sintaxis es la siguiente:

```c
switch (variable) {
    case valor1:
        // Bloque de código si la variable es igual a valor1
        break;
    case valor2:
        // Bloque de código si la variable es igual a valor2
        break;
    default:
        // Bloque de código si la variable no es igual a ninguno de los valores anteriores
        break;
}
```

## for

La estructura **for** permite ejecutar un bloque de código un número determinado de veces. La sintaxis es la siguiente:

```c
for (inicialización; condición; actualización) {
    // Bloque de código
}
```

Donde:

- **inicialización**: se ejecuta una vez al principio del bucle.
- **condición**: se evalúa antes de cada iteración del bucle. Si es verdadera, se ejecuta el bloque de código. Si es falsa, se sale del bucle.
- **actualización**: se ejecuta al final de cada iteración del bucle.

## while

La estructura **while** permite ejecutar un bloque de código mientras se cumpla una condición. La sintaxis es la siguiente:

```c
while (condición) {
    // Bloque de código
}
```

La condición se evalúa antes de cada iteración del bucle. Si es verdadera, se ejecuta el bloque de código. Si es falsa, se sale del bucle.

## do while

La estructura **do while** permite ejecutar un bloque de código al menos una vez y mientras se cumpla una condición. La sintaxis es la siguiente:

```c
do {
    // Bloque de código
} while (condición);
```

El bloque de código se ejecuta al menos una vez, y luego la condición se evalúa. Si es verdadera, se vuelve a ejecutar el bloque de código. Si es falsa, se sale del bucle.