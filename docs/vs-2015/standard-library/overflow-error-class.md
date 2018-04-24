---
title: "overflow_error Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::overflow_error"
  - "std.overflow_error"
  - "overflow_error"
  - "stdexcept/std::overflow_error"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "overflow_error class"
ms.assetid: bae7128d-e36b-4a45-84f1-2f89da441d20
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# overflow_error Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [overflow_error Class](https://docs.microsoft.com/cpp/standard-library/overflow-error-class).  
  
The class serves as the base class for all exceptions thrown to report an arithmetic overflow.  
  
## Syntax  
  
```  
class overflow_error : public runtime_error {  
public:  
    explicit overflow_error(const string& message);

    explicit overflow_error(const char *message);

};  
```  
  
## Remarks  
 The value returned by [what](../standard-library/exception-class1.md) is a copy of **message**`.`[data](../standard-library/basic-string-class.md#basic_string__data).  
  
## Example  
  
```  
// overflow_error.cpp  
// compile with: /EHsc /GR  
#include <bitset>  
#include <iostream>  
  
using namespace std;  
  
int main( )  
{  
   try   
   {  
      bitset< 33 > bitset;  
      bitset[32] = 1;  
      bitset[0] = 1;  
      unsigned long x = bitset.to_ulong( );  
   }  
   catch ( exception &e )   
   {  
      cerr << "Caught " << e.what( ) << endl;  
      cerr << "Type " << typeid( e ).name( ) << endl;  
   };  
}  
\* Output:   
Caught bitset<N> overflow  
Type class std::overflow_error  
*\  
```  
  
## Requirements  
 **Header:** \<stdexcept>  
  
 **Namespace:** std  
  
## See Also  
 [runtime_error Class](../standard-library/runtime-error-class.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)





