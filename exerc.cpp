#include <iostream> 

int main()
{ 
    double massa = 70;
    double altura = 1.65;
    
    double I = massa / (altura * altura);
    
    std::cout << "O resultado de I é: " << I << std::endl;
 
    if ( I < 17 )
    {
        std::cout<<"Muito abaixo do peso" << std::endl; 
    }
    else if (I >= 17 && I < 18.5)
    {
        std::cout<<"Abaixo do peso" << std::endl; 
    }
    else if (I >= 18.5 && I < 25)
    {
        std::cout<<"Peso normal" << std::endl; 
    }
    else if (I >= 25 && I < 30)
    {
        std::cout<<"Acima do peso" << std::endl; 
    }
    else if (I >= 30 && I < 35)
    {
        std::cout<<"Obesidade" << std::endl; 
    }
    else if (I >= 35 && I < 40)
    {
        std::cout<<"Obesidade severa" << std::endl; 
    }
    else if (I >= 40)
    {
        std::cout<<"Obesidade severa" << std::endl; 
    }
    else 
    {
        std::cout<<"Tal índice não está incluso na tabela"<< std::endl; 
    }
    
    return 0;

}
