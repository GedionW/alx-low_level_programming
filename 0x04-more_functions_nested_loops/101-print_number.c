#include "main.h"







void print_unsigned_int(unsigned int n);







/**
 *
 *  * print_number - print number n with putcher
 *
 *   * @n: number to print
 *
 *    * Return: always void
 *
 *     */







void print_number(int n)

	  



	  

{

	  



	  

	  if (n < 0)

		      



		      

		      {

			            



			            

			            _putchar('-');

				          



				          

				          print_unsigned_int(-(unsigned int)n);

					        



					        

					      }

	    



	    

	    else

		        



		        

		        print_unsigned_int(n);

	      



	      

}
