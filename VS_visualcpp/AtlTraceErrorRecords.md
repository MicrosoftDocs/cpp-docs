---
title: "AtlTraceErrorRecords"
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
ms.assetid: b83970b3-dc2a-445c-9142-f52218719905
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
# AtlTraceErrorRecords
Dumps OLE DB Error Record information to the dump device if an error is returned.  
  
## Syntax  
  
```  
  
      inline void AtlTraceErrorRecords(   
   HRESULT hrErr = S_OK    
);  
```  
  
#### Parameters  
 `hErr`  
 [in] An `HRESULT` returned by an OLE DB Consumer Template member function.  
  
## Remarks  
 If `hErr` is not `S_OK`, `AtlTraceErrorRecords` dumps OLE DB Error Record information to the dump device (the **Debug** tab of the Output window or a file). The Error Record information, which is obtained from the provider, includes row number, source, description, help file, context, and GUID for each error record entry. `AtlTraceErrorRecords` dumps this information only in debug builds. In release builds, it is an empty stub that is optimized out.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [Macros and Global Functions for OLE DB Consumer Templates](../VS_visualcpp/Macros-and-Global-Functions-for-OLE-DB-Consumer-Templates.md)   
 [CDBErrorInfo Class](../VS_visualcpp/CDBErrorInfo-Class.md)