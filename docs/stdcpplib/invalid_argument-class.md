---
title: "invalid_argument Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "std.invalid_argument"
  - "stdexcept/std::invalid_argument"
  - "invalid_argument"
  - "std::invalid_argument"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "invalid_argument class"
ms.assetid: af6c227d-ad7c-4e63-9dee-67af81d83506
caps.latest.revision: 18
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# invalid_argument Class
The class serves as the base class for all exceptions thrown to report an invalid argument.  
  
## Syntax  
  
```  
class invalid_argument : public logic_error {  
public:  
    explicit invalid_argument(const string& message);  
    explicit invalid_argument(const char *message);  
};  
```  
  
## Remarks  
 The value returned by what is a copy of **message**`.`[data](../stdcpplib/basic_string-class.md#basic_string__data).  
  
## Example  
  
```  
// invalid_arg.cpp  
// compile with: /EHsc /GR  
#include <bitset>  
#include <iostream>  
  
using namespace std;  
  
int main( )  
{  
   try   
   {  
      bitset< 32 > bitset( string( "11001010101100001b100101010110000") );  
   }  
   catch ( exception &e )   
   {  
      cerr << "Caught " << e.what( ) << endl;  
      cerr << "Type " << typeid( e ).name( ) << endl;  
   };  
}  
\* Output:   
Caught invalid bitset<N> char  
Type class std::invalid_argument  
*\  
```  
  
## Requirements  
 **Header:** \<stdexcept>  
  
 **Namespace:** std  
  
## See Also  
 [logic_error Class](../stdcpplib/logic_error-class.md)   
 [Thread Safety in the C++ Standard Library](../stdcpplib/thread-safety-in-the-c---standard-library.md)