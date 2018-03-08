#include<iostream>
#include"header_file.h"
using namespace std;

int main()
{
	class IntType so;
	//////////////////////////////////////////////////////////////////////////////////////////////////// program 1 //////////
	/*int num;
	cout<<"Enter number : ";
	cin>>num;
	so.setNum(num); */
	cout<<"Print the number            : ";
	so.printNum();                                                                      ///////////////  program 2 //////////
	cout<<"length of the number        : "<<so.numLength()<<endl;                       ///////////////  program 3 //////////
	cout<<"converting int in to string : "<<so.int_to_string()<<endl;                   ///////////////  program 4 //////////
	cout<<"Reverse of the number       : "<<so.reverseNum()<<endl;                      ///////////////  program 5 //////////
	cout<<"Sum of all digits           : "<<so.sum_all_digits()<<endl;                  ///////////////  program 6 //////////
	cout<<"Average of the number       : "<<so.avg_of_digits()<<endl;                   ///////////////  program 7 //////////
	cout<<"Mid digit of the number     : "<<so.mid_digit()<<endl;                       ///////////////  program 8 //////////
	cout<<"Remainder                   : "<<so.remainder()<<endl;                       ///////////////  program 9 //////////
	cout<<"Pallindrom is               : "<<so.pallindrom()<<endl;                      ///////////////  program 10 /////////
	cout<<"Count of Even digits        : "<<so.count_evens()<<endl;                     ///////////////  program 11 /////////
	cout<<"Count of Odd digits         : "<<so.count_odds()<<endl;                      ///////////////  program 12 /////////
	cout<<"Max digit in a number       : "<<so.max_digit()<<endl;                       ///////////////  program 13 /////////
	cout<<"Min digit in a number       : "<<so.min_digit()<<endl;                       ///////////////  program 14 /////////
	cout<<"Sum of Even digits          : "<<so.sum_even_digits()<<endl;                 ///////////////  program 15 /////////
	cout<<"Sum of Odd digits           : "<<so.sum_odd_digits()<<endl;                  ///////////////  program 16 /////////
	cout<<"Appending a digit in number : "<<so.append_digit(8)<<endl;                   ///////////////  program 17 /////////
	cout<<"Delete a digit form  number : "<<so.delete_digit(7)<<endl;                   ///////////////  program 18 /////////
	cout<<"int to Binary number        : "<<so.toBinary()<<endl;                        ///////////////  program 19 /////////
	cout<<"int to Hexa number          : "<<so.toHexa()<<endl;                          ///////////////  program 20 /////////
	cout<<"int to Ascii code           : "<<so.toAscii()<<endl;                         ///////////////  program 21 /////////
	cout<<"Adding two classes number   : "<<so.add(so,so);                              ///////////////  program 22 /////////
	cout<<"subtract two classes number : "<<so.sub(so,so);                              ///////////////  program 23 /////////
	cout<<"multiply two classes number : "<<so.maltiply(so,so);                         ///////////////  program 24 /////////
	cout<<"divide two classes number   : "<<so.divide(so,so);                           ///////////////  program 25 /////////
}
