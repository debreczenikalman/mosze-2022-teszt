#include <iostream>

#define N_ELEMENTS 100

int main()
{
    int* b = new int[100]; 
    std::cout << "2-198 kozotti ertekek atlaganak szamitasa" << std::endl;
    for (int i = 0; i < N_ELEMENTS; i++) 
    {
        std::cout << "Ertek: " << i*2 << std::endl;
        b[i] = i * 2;
    }
    std::cout << "Atlag szamitasa: " << std::endl; 
    float atlag = 0.0; 
    for (int i = 0; i < N_ELEMENTS; i++) 
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS; 
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "Az elmúlt időszak legjobb zenéje: Slaughter To Prevail - VIKING" << std::endl;
    return 0;
}

