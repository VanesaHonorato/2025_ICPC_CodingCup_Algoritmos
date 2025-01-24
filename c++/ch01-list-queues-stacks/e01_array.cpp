/*
ITESS 2025
ICPC- CODING CUP 
VANESA HONORATO
ARRAY EXAMPLE 
PROGRAMMER:VH
22/ENERO/25

c++ e01_array.cpp -o e01_array.exe
e01_array.exe
*/

//LIBRERIAS
#include <iostream>
#include <array>
using namespace std;

int main() 
{
  std::array<int, 10> arr;
  std::cout <<"First element:" <<arr[0] <<std::endl;

  array<int, 4> arr2 = {1,2,3,4};
  cout <<"Element in second array:";
  for (int i = 0; i < arr.size(); i++)
 cout <<arr2[i] <<" ";
 cout << endl;
 
 //exception
 try
 {
   cout << arr2.at(4);
   cout << arr2.at(5); 
 } catch(const out_of_range& ex)
{
    cerr << "EXCEPTION: "<< ex.what();
}
  
  return 0; 
}