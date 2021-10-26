#ifndef ARRAY_H
#define ARRAY_H

int *CreateArray(int size);

void FreeArray(int *ptr);

void Init();

// Before calling FillArray you must call Init at least once
void FillArray(int *array1, int *array2, int size1, int size2);

void PrintArray(int *array1, int *array2, int size1, int size2);

void DetermineTheLocation(int *array1, int *array2, int size1, int size2);


#endif // ARRAY_H
