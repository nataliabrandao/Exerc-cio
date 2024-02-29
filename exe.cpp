#include <iostream> 

int main()
{

    int numero;

    std::cout << "Digite um ano pra saber se é bissexto: ";
    std::cin >> numero;

    if ((numero % 4 == 0 && numero % 100 != 0 ) || (numero % 400 == 0))
    {
        std::cout<<"É bissexto" << std::endl;
    }
    else 
    {
        std::cout<<"Não é bissexto" << std::endl;
    }

    return 0;
}

