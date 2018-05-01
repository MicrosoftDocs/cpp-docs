---
title: "domain_error Class | Microsoft Docs"
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
  - "domain_error"
  - "std::domain_error"
  - "std.domain_error"
  - "stdexcept/std::domain_error"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "domain_error class"
ms.assetid: a1d8245d-61c2-4d1e-973f-073bd5dd5fa3
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# domain_error Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [domain_error Class](https://docs.microsoft.com/cpp/standard-library/domain-error-class).  
  
The class serves as the base class for all exceptions thrown to report a domain error.  
  
## Syntax  
  
```  
class domain_error : public logic_error {  
public:  
    explicit domain_error(const string& message);

    explicit domain_error(const char *message);

};  
```  
  
## Remarks  
 The value returned by [what](../standard-library/exception-class1.md) is a copy of **message**`.`[data](../standard-library/basic-string-class.md#basic_string__data).  
  
## Example  
  
```  
// domain_error.cpp  
// compile with: /EHsc /GR  
#include <iostream>  
  
using namespace std;  
  
int main( )  
{  
   try   
   {  
      throw domain_error( "Your domain is in error!" );  
   }  
   catch (exception &e)   
   {  
      cerr << "Caught: " << e.what( ) << endl;  
      cerr << "Type: " << typeid(e).name( ) << endl;  
   };  
}  
\* Output:   
Caught: Your domain is in error!  
Type: class std::domain_error  
*\  
```  
  
## Requirements  
 **Header:** \<stdexcept>  
  
 **Namespace:** std  
  
## See Also  
 [logic_error Class](../standard-library/logic-error-class.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)





