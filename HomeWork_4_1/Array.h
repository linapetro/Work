#ifndef ARRAY_H
#define ARRAY_H

int *CreateMass(int size);

void FreeMass(int *ptr);

void Init();

// Before calling FillArray you must call Init at least once
void FillArray(int *array, int size);

void PrintArray(int *array, int size);

void SwapElements(int *array, int index1, int index2);

#endif // ARRAY_H
