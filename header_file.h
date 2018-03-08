#include<iostream>
#include <sstream>
using namespace std;

class IntType
{
	int value,num;
	
	public :
		IntType()             /////////////   Constructor  ///////
		{
			value=121;
			cout<<"Constructor called ...! "<<endl<<endl;
		}
		
		~IntType()           //////////////   Destructor   //////
		{
			cout<<endl<<"Destructor called ...! "<<endl;
		}
		
		void setNum(int num)       /////////  setNum    //////
		{
			value=num;
		}
		
		void printNum()           //////////  printNum   /////
		{
			cout<<value<<endl;
		}
		
		int numLength()           /////////   numLength /////
		{
			int val=value;
			int lengthCount = 0 ;
			for(; val != 0; val/= 10, lengthCount++);
			return lengthCount;
		}
		
		string int_to_string()    //////////   int to string  ///////
		{
			string result;
			stringstream convert;
			convert << value;
			result = convert.str();
			return result;
		}
		
		int reverseNum()         //////////   reverse of Number ///////
		{
			int val=value;
			int rev=0,rem;
			while(val!= 0)
    		{
        		rem=val%10;
				rev=rev*10+rem;
				val/=10;
    		}
    		return rev;
		}
		
		int sum_all_digits()    //////////   sum total digits  ///////
		{
			int val=value;
			int sum=0,rem;
			while(val!= 0)
    		{
        		rem=val%10;
				sum=sum+rem;
				val/=10;
    		}
    		return sum;
		}
		
		int avg_of_digits()     //////////   average of digits  /////
		{
			return sum_all_digits()/numLength();
		}
		
		int mid_digit()        ///////////   mid digit of the number //////
		{
			int val=value;
			if (numLength()%2!=0)
			{
				int befor_mid=(numLength()-1)/2 ;
				int rem;
				for(int i=0; i<befor_mid+1; i++)
    			{
        			rem=val%10;
					val/=10;
				}
       			return rem;
			}
		}
		
		int remainder()        ///////////   remainder //////////
		{
			return value%2;	
		}
		
		bool pallindrom()      /////////////  Palindrome  ///////
		{
			if(value==reverseNum())
				return true;
			else
				return false;
		}
		
		int count_evens()     /////////////  count only even digits //////
		{
			int val=value;
			int count=0,rem;
			while(val!= 0)
    		{
        		rem=val%10;
				if (rem%2==0)
					count++;
				val/=10;
    		}
    		return count;
		}
		
		int count_odds()      //////////////  count only odd digits //////
		{
			int val=value;
			int count=0,rem;
			while(val!= 0)
    		{
        		rem=val%10;
				if (rem%2!=0)
					count++;
				val/=10;
    		}
    		return count;
		}
		
		int max_digit()       /////////////   Max digit in a number  ///////
		{
			int val=value;
			int max=0,rem;
			while(val!= 0)
    		{
        		rem=val%10;
				if (max<rem)
					max=rem;
				val/=10;
    		}
    		return max;
		}
		
		int min_digit()       ////////////   Min digit in a number  ///////
		{
			int  val=value;
			int min=val%10,rem;
			while(val!= 0)
    		{
        		rem=val%10;
				if (min>rem)
					min=rem;
				val/=10;
    		}
    		return min;
		}
		
		int sum_even_digits()   //////////  Sum of Even digits  /////////
		{
			int val=value;
			int sum=0,rem;
			while(val!= 0)
    		{
        		rem=val%10;
				if (rem%2==0)
					sum=sum+rem;
				val/=10;
    		}
    		return sum;
		}
		
		int sum_odd_digits()    ////////  sum of Even digits  ///////////
		{
			int val=value;
			int sum=0,rem;
			while(val!= 0)
    		{
        		rem=val%10;
				if (rem%2!=0)
					sum=sum+rem;
				val/=10;
    		}
    		return sum;
		}
		
		int append_digit(int num)  //////// Appending digit at last //////
		{
			int val=value;
			int rem;
			while(val!= 0)
    		{
    			rem=val%10;
				num=num*10+rem;
				val/=10;
    		}
			int rev=0;
			rem=0;
			while(num!= 0)
    		{
    			rem=num%10;
				rev=rev*10+rem;
				num/=10;
    		}
    		return rev;
		}	
		
		int delete_digit(int num)   ///////////////  Delete a digit from a number //////////
		{
			int val=value;
			int re,rem=0;
			while(val!= 0)
    		{
    			re=val%10;
    			if(num!=re)
    				rem=rem*10+re;
				val/=10;	
    		}
			int rev=0;
			while(rem!= 0)
    		{
    			re=rem%10;
				rev=rev*10+re;
				rem/=10;
    		}
		    return rev;	
		}
		
		int toBinary()          ////////////////  int to Binary a number  //////////
		{
			int val=value;
			int binaryNumber = 0;
    		int remainder, i = 1, step = 1;
			while (val!=0)
    		{
        		remainder = val%2;
        		val /= 2;
        		binaryNumber += remainder*i;
        		i *= 10;
    		}
   			return binaryNumber;
		}		
		
		string toHexa()      ////////////  converting to hexa /////// 
		{
			int remainder,quotient;
    		int i=1,j,temp;
    		char hexadecimalNumber[100];
    		quotient = value;
    		while(quotient!=0)
    		{
        		temp = quotient % 16;
      			if( temp < 10)
         			temp =temp + 48;
        		else
        			temp = temp + 55;
 
        		hexadecimalNumber[i++]= temp;
        		quotient = quotient / 16;
    		}
    		return hexadecimalNumber;	
		}
		
		char toAscii()       //////////// converting to Ascii code /////
		{
    		return char(value);
		}
		
		int add(IntType num1,IntType num2)       /////// adding to classes and return /////////
		{
			int num=num1.value+num2.value;
			return num;
		}
	
	
		int sub(IntType num1,IntType num2)       /////// subtract to classes and return /////////
		{
			int num=num1.value-num2.value;
			return num;
		}
		
		int maltiply(IntType num1,IntType num2)    /////// multiply to classes and return /////////
		{
			int num=num1.value*num2.value;
			return num;
		}
		
		int divide(IntType num1,IntType num2)     /////// dividing to classes and return /////////
		{
			int num=num1.value/num2.value;
			return num;
		}
		
};






