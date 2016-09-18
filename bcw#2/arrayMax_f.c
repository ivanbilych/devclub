/*
Задача arrayMax()

Условие задачи
Написать функцию:
int arrayMax(int array[], int size)

Вернуть значение максимального элемента в массиве.

epic win
*/

int arrayMax(int array[], int size) {
    int max = array[0];
    
    for ( int i = 1; i < size; i++ ) {
        if ( array[i] > max ) {
            max = array[i];
        }
    }
    return max;
}
