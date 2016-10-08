---
title: "Other One-Argument Output Stream Manipulators"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: e381dee8-6b16-4cef-805a-4a6a1d2b696b
caps.latest.revision: 10
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Other One-Argument Output Stream Manipulators
The following example uses a class `money`, which is a `long` type. The `setpic` manipulator attaches a formatting "picture" string to the class that can be used by the overloaded stream insertion operator of the class `money`. The picture string is stored as a static variable in the `money` class rather than as data member of a stream class, so you do not have to derive a new output stream class.  
  
## Example  
  
```  
// one_arg_output.cpp  
// compile with: /GR /EHsc  
#include <iostream>  
#include <iomanip>  
#include <string>  
using namespace std;  
  
typedef char* charp;  
  
class money   
{  
private:  
    long value;  
    static char *szCurrentPic;  
public:  
    money( long val ) { value = val; }  
    friend ostream& operator << ( ostream& os, money m ) {  
        // A more complete function would merge the picture  
        // with the value rather than simply appending it  
        os << m.value << '[' << money::szCurrentPic << ']';  
        return os;  
    }  
    static void setpic( char* szPic ) {  
        money::szCurrentPic = new char[strlen( szPic ) + 1];  
        strcpy_s( money::szCurrentPic, strlen( szPic ) + 1, szPic );  
    }  
};  
  
char *money::szCurrentPic;  // Static pointer to picture  
  
void fb( ios_base& os, char * somename )  
{  
   money::setpic(somename);  
/*  
   ostream *pos = dynamic_cast<ostream*>(&os);  
   if (pos)  
   {  
      for( int i=0; i < l; i++ )  
      (*pos) << ' ';  
   };  
*/  
}  
  
_Smanip<charp>  
   __cdecl setpic(char * somename)  
   {     
   return (_Smanip<charp>(&fb, somename));  
   }  
  
int main( )  
{  
    money amt = (long)35235.22;  
    cout << setiosflags( ios::fixed );  
    cout << setpic( "###,###,###.##" ) << "amount = " << amt << endl;  
}  
```  
  
## See Also  
 [Custom Manipulators with Arguments](../VS_visualcpp/Custom-Manipulators-with-Arguments.md)