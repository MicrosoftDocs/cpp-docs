---
title: "ICommandTextImpl::SetCommandText"
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
ms.assetid: 7271bfb0-7a8b-4281-b3e8-7c80b9fe79d4
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
# ICommandTextImpl::SetCommandText
Sets the command text, replacing the existing command text.  
  
## Syntax  
  
```  
  
      STDMETHOD(SetCommandText)(   
   REFGUID rguidDialect,   
   LPCOLESTR pwszCommand    
);  
```  
  
#### Parameters  
 See [ICommandText::SetCommandText](https://msdn.microsoft.com/en-us/library/ms709757.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [ICommandTextImpl Class](../VS_visualcpp/ICommandTextImpl-Class.md)   
 [ICommandTextImpl::GetCommandText](../VS_visualcpp/ICommandTextImpl--GetCommandText.md)