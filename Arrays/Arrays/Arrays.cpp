#include <iostream>
#include <time.h>

#define ARRAY_LEN 5

int main()
{
    int arr[ARRAY_LEN][ARRAY_LEN];

    std::cout << "Array:" << std::endl;

    for (int i = 0; i < ARRAY_LEN; i++)
    {
        for (int j = 0; j < ARRAY_LEN; j++)
        {
            arr[i][j] = i + j;
            std::cout << arr[i][j] << "\t";
        }

        std::cout << std::endl;
    }

    struct tm timeBuffer;
    time_t currentTime = time(NULL);
    localtime_s(&timeBuffer, &currentTime);

    int currentDay = timeBuffer.tm_mday;
    std::cout << "Day: " << currentDay << std::endl;
    
    int searchedArrayStringNum = currentDay % ARRAY_LEN;
    std::cout << "String num: " << searchedArrayStringNum << std::endl;
    
    int sum = 0;
    
    for (int i = 0; i < ARRAY_LEN; i++)
    {
        sum += arr[i][searchedArrayStringNum];
    }

    std::cout << "Sum: " << sum << std::endl;
}
