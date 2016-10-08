---
title: "CDataConnection::Open"
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
ms.assetid: 2c6f0c01-4954-43ba-973e-861ac8e82892
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
# CDataConnection::Open
Opens a connection to a data source using an initialization string.  
  
## Syntax  
  
```  
  
      HRESULT Open(   
   LPCOLESTR szInitString    
) throw( );  
```  
  
#### Parameters  
 *szInitString*  
 [in] The initialization string for the data source.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataConnection Class](../VS_visualcpp/CDataConnection-Class.md)