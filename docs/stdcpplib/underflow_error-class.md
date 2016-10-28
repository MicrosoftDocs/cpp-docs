---
title: "underflow_error Class"
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
  - "stdexcept/std::underflow_error"
  - "underflow_error"
  - "std.underflow_error"
  - "std::underflow_error"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "underflow_error class"
ms.assetid: d632f1f9-9c6c-4954-b96b-03041bfab22d
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
 The value returned by what is a copy of **message**`.`[data](../stdcpplib/basic_string-class.md#basic_string__data).  
  
## Example  
  
```  
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
 [\<stdexcept> Members](assetId:///7b6b0a73-916e-44aa-9a3f-f5b6b3ce98e6)   
 [runtime_error Class](../stdcpplib/runtime_error-class.md)   
 [Thread Safety in the C++ Standard Library](../stdcpplib/thread-safety-in-the-c---standard-library.md)