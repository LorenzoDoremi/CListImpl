#include <iostream>
#include <fstream>

std::string pHasher(std::string a)
{

    double key = 66;
    std::string hash = a;
    for (short i = 0; i < hash.length() - 1; i++)
    

    {
        int mod = (i+1)%hash.length();
        hash[i] = a[i] + a[mod];
    }
    
    return hash;
}
std::string username;
std::string password;
void logscreen()
{

    int action;
    std::cout << "1. to login" << std::endl
              << "2. to register" << std::endl;
    std::cin >> action;

    // faccio il login
    if (action == 1)
    {

        std::cout << "Welcome. Please insert your username" << std::endl;
        std::cin >> username;

        std::cout << "Please insert your password" << std::endl;
        std::cin >> password;
      
        // open file database
        std::ifstream myfile;

        myfile.open("test.txt"); 
      
        std::string check;

          // cerco username e password. getline va a capo nelle righe
          // assegno a check la riga corrente.
        while (std::getline(myfile, check))
        {    // se il check è divero da npos, ovvero una forma di errore, mi fermo: ho trovato!
            if (check.find(username) != std::string::npos)
            {

                break;
            }
        }
        // nella stessa riga dell'username controllo se trovo anche la stringa password 
        if (check.find(pHasher(password)) != std::string::npos)
        {

            myfile.close();
            

            // finisce il ciclo. esco dalla funziona logscreen
           
        }
        else
        {
            myfile.close();
            std::cout << "Password or Username are incorrect" << std::endl;
            logscreen();
        }

       
    }

    // mi registro
    else if (action == 2)
    {
        std::cout << "Welcome to registration" << std::endl
                  << "Please insert your new username" << std::endl;
        std::string username;
        std::string password;
        std::cin >> username;
        std::cout << "Please insert your new password" << std::endl;
        std::cin >> password;

        // open file database
        std::ofstream myfile;
        myfile.open("test.txt", std::ios_base::app); // cerca la fine

        // hash password
        password = pHasher(password);
        std::cout << "Your username is " + username + " and your password is " + password << std::endl;

        // write file
        myfile << username + " " + password << std::endl;
        myfile.close();

        // goback
        logscreen();
    }
    else
    {
        logscreen();
    }
}

int main()

{

  logscreen();
  std::cout << "WELCOME " + username + "!" << std::endl;

    return 0;
}