---
title: "future_error Class"
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
ms.assetid: 6071c545-ac2a-49ef-9967-07b0125da861
caps.latest.revision: 11
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# future_error Class
Describes an exception object that can be thrown by methods of types that manage [future](../VS_visualcpp/future-Class.md) objects.  
  
## Syntax  
  
```  
class future_error : public logic_error {  
public:  
   future_error(error_code code);  
   const error_code& code() const throw();  
   const char *what() const throw();  
};  
```  
  
## Requirements  
 **Header:** future  
  
 **Namespace:** std  
  
## See Also  
 [Header Files Reference](../VS_visualcpp/C---Standard-Library-Header-Files.md)   
 [logic_error Class](../VS_visualcpp/logic_error-Class.md)   
 [error_code Class](../VS_visualcpp/error_code-Class.md)