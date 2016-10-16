---
title: "Object Status Macros"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: 727dbef2-a342-4157-9d64-a421805d9747
caps.latest.revision: 12
ms.author: "mblome"
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
# Object Status Macros
This macro sets flags belonging to ActiveX controls.  
  
|||  
|-|-|  
|[DECLARE_OLEMISC_STATUS](../Topic/DECLARE_OLEMISC_STATUS.md)|Used in ATL ActiveX controls to set the **OLEMISC** flags.|  
  
##  <a name="declare_olemisc_status"></a>  DECLARE_OLEMISC_STATUS  
 Used in ATL ActiveX controls to set the OLEMISC flags.  
  
```
DECLARE_OLEMISC_STATUS(Â
    miscstatus  Â)
```  
  
### Parameters  
 *miscstatus*  
 All applicable OLEMISC flags.  
  
### Remarks  
 This macro is used to set the OLEMISC flags for an ActiveX control. Refer to [IOleObject::GetMiscStatus](http://msdn.microsoft.com/library/windows/desktop/ms678521) for more details.  
  
### Example  
 [!code[NVC_ATL_Windowing#124](../atl/codesnippet/CPP/object-status-macros_1.h)]  
  
## See Also  
 [Macros](../atl/atl-macros.md)

