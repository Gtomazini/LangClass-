#include <iostream>

int main()
{
  //a. score é maior ou igual a 80, mas menor que 90;
  int score;
  std::cout << "Digite a nota" << std::endl;
  std::cin >> score;

  if (score >= 80 && score <= 90)
  {
    // b. resposta é 'N' ou 'n';
    char resposta;
    std::cout << "Para continuar digite a inicial da função: ";
    std::cin >> resposta;
    if (resposta == 'N' || resposta == 'n')
    {
      
      if (score%2)
      {
        std::cout << "Sua nota precisa ser Par" << std::endl;
      }
      else {
        // c. n é par, mas não é 8;
        int n = score/10;
        if (n == 8 || n%2 != 0)
        {
          std::cout << "Nota inválida, ou é 8 ou não é par, tente novamente !" << std::endl;
        }
        else {
        char ch;
          switch (score/10) {
            case 10:
            case 9: ch = 'A'; std::cout << "Sua nota é: " << ch << std::endl; break;
            case 8: ch = 'B'; std::cout << "Sua nota é: " << ch << std::endl; break;
            case 7: ch = 'C'; std::cout << "Sua nota é: " << ch << std::endl; break;
            case 6:
            case 5: ch = 'D'; std::cout << "Sua nota é: " << ch << std::endl; break;
            case 4:
            case 3:
            case 2:
            case 1:
            case 0: ch = 'F'; std::cout << "Sua nota é: " << ch << std::endl; break;
            default: std::cout << "Nota em formato irregular, tente novamente"; break;
          }
        }
      }

    }
  }
  else{
    std::cout << "Nota invalida" << std::endl;
  }

  std::cout << "Fim do programa" << std::endl;
}
