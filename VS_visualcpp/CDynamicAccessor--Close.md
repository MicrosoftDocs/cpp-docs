---
title: "CDynamicAccessor::Close"
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
ms.assetid: 2a28ded2-d7ed-4e80-90bf-143133c93feb
caps.latest.revision: 8
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
# CDynamicAccessor::Close
Unbinds all the columns, releases the allocated memory, and releases the [IAccessor](https://msdn.microsoft.com/en-us/library/ms719672.aspx) interface pointer in the class.  
  
## Syntax  
  
```  
  
void Close( ) throw( );  
  
```  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicAccessor Class](../VS_visualcpp/CDynamicAccessor-Class.md)