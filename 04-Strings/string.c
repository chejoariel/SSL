#include "String.h"

//implementación

size_t GetLength(const char * stringValue)
{
    size_t cont = 0;
    while(stringValue[cont] != '\0')
    {
        cont++;
    }
    return cont;
}

bool IsEmpty(const char * stringValue)
{
    return GetLength(stringValue) == 0;
}

void Concat(const char * stringA, const char * stringB, char * result)
{
    size_t lengthA = GetLength(stringA);
    size_t lengthB = GetLength(stringB);
    size_t lengthAB = lengthA + lengthB;
            
    for(size_t i = 0; i < lengthAB; i++)
    {
        if(i < lengthA)
            result[i] = stringA[i];
        else
            result[i] = stringB[i - lengthA];
    }

    result[lengthAB] = '\0';
}

void Power(const char * string, unsigned int power, char * result)
{   
    size_t length = GetLength(string);
    size_t newLength = length * power;

    for(size_t i = 0; i < newLength; i++)
    {
        result[i] = string[i % length];
    }

    result[newLength] = '\0';
}


int Compare(const char * stringA, const char * stringB, size_t index)
{
    char a = stringA[index];
    char b = stringB[index];
    int subtraction = a - b;

    if(subtraction == 0)
    {
        if(a != '\0')
        {
            return compare(stringA, stringB, index + 1);
        }
    }

    return subtraction;
}
