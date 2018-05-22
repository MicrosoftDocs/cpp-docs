---
title: "Object Status Macros | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: 727dbef2-a342-4157-9d64-a421805d9747
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Object Status Macros
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Object Status Macros](https://docs.microsoft.com/cpp/atl/reference/object-status-macros).  
  
  
This macro sets flags belonging to ActiveX controls.  
  
|||  
|-|-|  
|[DECLARE_OLEMISC_STATUS](#declare_olemisc_status)|Used in ATL ActiveX controls to set the **OLEMISC** flags.|  
  
##  <a name="declare_olemisc_status"></a>  DECLARE_OLEMISC_STATUS  
 Used in ATL ActiveX controls to set the OLEMISC flags.  
  
```
DECLARE_OLEMISC_STATUS(Â
    miscstatus Â)
```  
  
### Parameters  
 *miscstatus*  
 All applicable OLEMISC flags.  
  
### Remarks  
 This macro is used to set the OLEMISC flags for an ActiveX control. Refer to [IOleObject::GetMiscStatus](http://msdn.microsoft.com/library/windows/desktop/ms678521) for more details.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#124](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Windowing/Cpp/Buddy.h#124)]  
  
## See Also  
 [Macros](../../atl/reference/atl-macros.md)






