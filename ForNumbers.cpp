#include <bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
#include<boost/multiprecision/cpp_dec_float.hpp>
using namespace boost::multiprecision;
using namespace std;
template <class T>
void fastscan(T &number) 
{
    //variable to indicate sign of input number 
    bool negative = false; 
    register int c; 
    
    number = 0; 
 
    // extract current character from buffer 
    c = getchar(); 
    if (c=='-') 
    { 
        // number is negative 
        negative = true; 
  
        // extract the next character from the buffer 
        c = getchar(); 
    } 
  
    // Keep on extracting characters if they are integers 
    // i.e ASCII Value lies from '0'(48) to '9' (57) 
    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 
  
    // if scanned input has a negative sign, negate the 
    // value of the input number 
    if (negative) 
        number *= -1; 
}
int main() {
    // toggles on or off the synchronization of all the C++ standard streams with their corresponding standard C
    ios_base::sync_with_stdio(false);
    // tie():-method which simply guarantees the flushing of std::cout before std::cin accepts an input.
    cin.tie(NULL);
    // precision till 100 place
    cpp_dec_float_100 a,b;
    // precision till 50 place
    cpp_dec_float_50 c,d;
    // Take very large i/p number
    cpp_int e,f;
    // FastScanFor Input
    fastscan(a);
    fastscan(b);
    fastscan(c);
    fastscan(d);
    fastscan(e);
    fastscan(f);
    cout<<a*b<<"\n"<<c*d<<"\n"<<e*f;
	return 0;
}
