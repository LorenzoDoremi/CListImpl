#include <iostream>
#include <fstream>
int main()
{

   std::ifstream myfile;
   myfile.open("database.txt");

   int counter_row = 0;
   int counter_col = 0;

   int counter = 0;
   std::string check;
   // becco le prime linee
   while (std::getline(myfile, check) && counter < 2)
   {
      if (counter == 0)
      {
         counter_row = stoi(check);
      }
      else if (counter == 1)
      {
         counter_col = stoi(check);
      }
      else
      {
      }

      counter++;
   }

   // data
   std::string data[counter_row][counter_col];

   int row = 0;


   // ora che so quanti dati dovrò inserire, continuo
   while (std::getline(myfile, check))
   {

        int col = 0;
      /*  std::cout << check << std::endl; */
      std::string curr_string = "";
      for (char c : check)
      {
         
         /*  std::cout << check[i] << std::endl; */

         if (c == ' ')
         {

            data[row][col] = curr_string;
            col++;
            
            curr_string = "";
         }
         else
         {
           
            curr_string.push_back(c);
         }
       
        
      }
      data[row][col] = curr_string;
      curr_string = "";
     
      row++;
   }
   
   for (int i = 0; i < counter_row; i++)
   {
      for (int j = 0; j < counter_col; j++)
      {
         std::cout << data[i][j] << " ";
      }
      std::cout << std::endl;
   }
   return 0;
}