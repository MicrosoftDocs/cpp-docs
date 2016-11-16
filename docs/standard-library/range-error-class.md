---
title: "range_error Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "stdexcept/std::range_error"
  - "std.range_error"
  - "range_error"
  - "std::range_error"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "range_error class"
ms.assetid: 8afb3e88-fc49-4213-b096-ed63d7aea37c
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
# range_error Class
The class serves as the base class for all exceptions thrown to report a range error.  
  
## Syntax  
  
```  
class range_error : public runtime_error {  
public:  
    explicit range_error(const string& message);

    explicit range_error(const char *message);

};  
```  
  
## Remarks  
 The value returned by [what](../standard-library/exception-class.md) is a copy of **message**`.`[data](../standard-library/basic-string-class.md#basic_string__data).  
  
## Example  
  
```cpp  
// range_error.cpp  
// compile with: /EHsc /GR  
#include <iostream>  
using namespace std;  
int main()  
{  
   try   
   {  
      throw range_error( "The range is in error!" );  
   }  
   catch (exception &e)   
   {  
      cerr << "Caught: " << e.what( ) << endl;  
      cerr << "Type: " << typeid( e ).name( ) << endl;  
   };  
}  
\* Output:   
Caught: The range is in error!  
Type: class std::range_error  
*\  
```  
  
## Requirements  
 **Header:** \<stdexcept>  
  
 **Namespace:** std  
  
## See Also  
 [runtime_error Class](../standard-library/runtime-error-class.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)

