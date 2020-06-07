#include <iostream>

using namespace std;

void selectionSort(char *fio, int size)
{
    int min, temp;

    int C = 0, M = 0;

    for (int i = 0; i < size - 1; i++)
    {
        min = i;

        for (int j = i + 1; j < size; j++)
        {
            if (fio[j] < fio[min]){
                C++;
                min = j;
            }
        }

        temp = fio[i];
        M++;

        fio[i] = fio[min];
        fio[min] = temp;
    }

    printf("C = %d\tM = %d\n", C, M);

}


int main() {


    char studentFullName[12] = { 's', 'd', 'a', 'v', 'c', 'j', 'k', 'b', 'i', 'o', 'y','\0'};

    int lengthArray = (sizeof(studentFullName)/sizeof(*studentFullName));

    selectionSort(studentFullName, lengthArray);

    for(int i = 0; i < lengthArray - 1; i++){
        printf("%c\n", studentFullName[i]);
    }

    return 0;
}