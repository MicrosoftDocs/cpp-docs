---
title: "Object Status Macros | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["atlcom/ATL::DECLARE_OLEMISC_STATUS"]
dev_langs: ["C++"]
ms.assetid: 727dbef2-a342-4157-9d64-a421805d9747
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Object Status Macros
This macro sets flags belonging to ActiveX controls.  
  
|||  
|-|-|  
|[DECLARE_OLEMISC_STATUS](#declare_olemisc_status)|Used in ATL ActiveX controls to set the **OLEMISC** flags.|  

## Requirements  
 **Header:** atlcom.h  

##  <a name="declare_olemisc_status"></a>  DECLARE_OLEMISC_STATUS  
 Used in ATL ActiveX controls to set the OLEMISC flags.  
  
```
DECLARE_OLEMISC_STATUS( miscstatus )
```  
  
### Parameters  
 *miscstatus*  
 All applicable OLEMISC flags.  
  
### Remarks  
 This macro is used to set the OLEMISC flags for an ActiveX control. Refer to [IOleObject::GetMiscStatus](http://msdn.microsoft.com/library/windows/desktop/ms678521) for more details.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#124](../../atl/codesnippet/cpp/object-status-macros_1.h)]  
  
## See Also  
 [Macros](../../atl/reference/atl-macros.md)
