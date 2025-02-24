#include <iostream>
#include <iomanip>

using std::cout; 
using std::cin;

int main()
{
    double watt; 
    cout << "consommation en kw/h :" << std::endl;
    cin >> watt; 
    
    double prix;
    cout << "prix du kw/h en euros :" << std::endl;
    cin >> prix;

    cout << "1h : " << watt*prix <<"euros" << std::endl; 
    cout << "24h : " << watt*prix*24 <<"euros" << std::endl; 
    cout << "30 jours : " << watt*prix*24*30 <<"euros" << std::endl; 
    cout << "par ans : " << watt*prix*24*365 <<"euros" << std::endl; 

    std::cout << "\nAppuyez sur Entrée pour quitter...";
    std::cin.ignore();
    std::cin.get();
}