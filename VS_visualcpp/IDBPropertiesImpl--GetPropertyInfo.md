---
title: "IDBPropertiesImpl::GetPropertyInfo"
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
ms.assetid: 170e9640-5010-4e0d-8a54-f50b23af08ad
caps.latest.revision: 9
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
# IDBPropertiesImpl::GetPropertyInfo
Returns property information supported by the data source.  
  
## Syntax  
  
```  
  
      STDMETHOD(GetPropertyInfo)(   
   ULONG cPropertySets,   
   const DBPROPIDSET rgPropertySets[],   
   ULONG * pcPropertyInfoSets,   
   DBPROPINFOSET ** prgPropertyInfoSets,   
   OLECHAR ** ppDescBuffer    
);  
```  
  
#### Parameters  
 See [IDBProperties::GetPropertyInfo](https://msdn.microsoft.com/en-us/library/ms718175.aspx) in the *OLE DB Programmer's Reference*.  
  
 Some parameters correspond to *OLE DB Programmer's Reference* parameters of different names, which are described in **IDBProperties::GetPropertyInfo**:  
  
|OLE DB Template parameters|*OLE DB Programmer's Reference* parameters|  
|--------------------------------|------------------------------------------------|  
|`cPropertySets`|`cPropertyIDSets`|  
|`rgPropertySets`|`rgPropertyIDSets`|  
  
## Remarks  
 Uses [IDBInitializeImpl::m_pCUtlPropInfo](../VS_visualcpp/IDBInitializeImpl--m_pCUtlPropInfo.md) to implement this functionality.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IDBPropertiesImpl Class](../VS_visualcpp/IDBPropertiesImpl-Class.md)   
 [IDBPropertiesImpl::GetProperties](../VS_visualcpp/IDBPropertiesImpl--GetProperties.md)   
 [IDBPropertiesImpl::SetProperties](../VS_visualcpp/IDBPropertiesImpl--SetProperties.md)