---
title: "valarray&lt;bool&gt; Class"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: fc0e7121-4758-4ea5-86c3-f04448f04acf
caps.latest.revision: 13
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
# valarray&lt;bool&gt; Class
A specialized version of the template class **valarray<Type\>** to elements of type `bool`.  
  
## Syntax  
  
```  
class valarray<bool>  
  
```  
  
## Example  
  
```  
// valarray_bool.cpp  
// compile with: /EHsc  
#include <valarray>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   valarray<int> vaL ( 10 ), vaR ( 10 );  
   valarray<bool> vaBool ( 10 );  
   for ( i = 0 ; i < 10 ; i += 2 )   
      vaL [ i ] =  -i;  
   for ( i = 1 ; i < 10 ; i += 2 )   
      vaL [ i ] =  i;  
   for ( i = 0 ; i < 10 ; i++ )   
      vaR [ i ] =  i;  
  
   cout << "The initial Left valarray is: ( ";  
   for ( i = 0 ; i < 10 ; i++ )  
      cout << vaL [ i ] << " ";  
   cout << ")." << endl;  
  
   cout << "The initial Right valarray is: ( ";  
   for ( i = 0 ; i < 10 ; i++ )  
      cout << vaR [ i ] << " ";  
   cout << ")." << endl;  
  
   vaBool = ( vaL < vaR );  
   cout << "The result of the less-than comparison "  
   << "test is the\n valarray<bool>: ( ";  
   for ( i = 0 ; i < 10 ; i++ )  
      cout << vaBool [ i ] << " ";  
   cout << ")." << endl;  
}  
\* Output:   
The initial Left valarray is: ( 0 1 -2 3 -4 5 -6 7 -8 9 ).  
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 8 9 ).  
The result of the less-than comparison test is the  
 valarray<bool>: ( 0 0 1 0 1 0 1 0 1 0 ).  
*\  
```  
  
## Requirements  
 **Header:** <valarray\>  
  
 **Namespace:** std  
  
## See Also  
 [valarray Class](../VS_visualcpp/valarray-Class.md)   
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)