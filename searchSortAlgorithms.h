//
// Created by Jacob Yeung on 11/12/23.
//

template <class elemType>
void insertionSort(elemType list[], int length)
{
    for (int firstOutOfOrder = 1; firstOutOfOrder < length;
         firstOutOfOrder++)
        if (list[firstOutOfOrder] < list[firstOutOfOrder - 1])
        {
            elemType temp = list[firstOutOfOrder];
            int location = firstOutOfOrder;

            do
            {
                list[location] = list[location - 1];
                location--;
            } while(location > 0 && list[location - 1] > temp);

            list[location] = temp;
        }
} //end insertionSort


//#ifndef CS216PROGRAMMINGEXERCISE1808_SEARCHSORTALGORITHMS_H
//#define CS216PROGRAMMINGEXERCISE1808_SEARCHSORTALGORITHMS_H
//
//#endif //CS216PROGRAMMINGEXERCISE1808_SEARCHSORTALGORITHMS_H
