---
title: "underflow_error Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "stdexcept/std::underflow_error"
  - "underflow_error"
  - "std.underflow_error"
  - "std::underflow_error"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "underflow_error class"
ms.assetid: d632f1f9-9c6c-4954-b96b-03041bfab22d
caps.latest.revision: 20
author: "corob-msft"
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
# underflow_error Class
The class serves as the base class for all exceptions thrown to report an arithmetic underflow.  
  
## Syntax  
  
```  
class underflow_error : public runtime_error {  
public:  
    explicit underflow_error(const string& message);

    explicit underflow_error(const char *message);

};  
```  
  
## Remarks  
 The value returned by [what](../standard-library/exception-class.md) is a copy of **message**`.`[data](../standard-library/basic-string-class.md#basic_string__data).  
  
## Example  
  
```cpp  
// underflow_error.cpp  
// compile with: /EHsc /GR  
#include <iostream>  
  
using namespace std;  
  
int main( )  
{  
   try   
   {  
      throw underflow_error( "The number's a bit small, captain!" );  
   }  
   catch ( exception &e ) {  
      cerr << "Caught: " << e.what( ) << endl;  
      cerr << "Type: " << typeid( e ).name( ) << endl;  
   };  
}  
\* Output:   
Caught: The number's a bit small, captain!  
Type: class std::underflow_error  
*\  
```  
  
## Requirements  
 **Header:** \<stdexcept>  
  
 **Namespace:** std  
  
## See Also  
 [\<stdexcept> Members](http://msdn.microsoft.com/en-us/7b6b0a73-916e-44aa-9a3f-f5b6b3ce98e6)   
 [runtime_error Class](../standard-library/runtime-error-class.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)

