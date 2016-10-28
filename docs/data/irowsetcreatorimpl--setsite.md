---
title: "IRowsetCreatorImpl::SetSite"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "IRowsetCreatorImpl.SetSite"
  - "IRowsetCreatorImpl<T>::SetSite"
  - "IRowsetCreatorImpl::SetSite"
  - "SetSite"
  - "ATL.IRowsetCreatorImpl.SetSite"
  - "ATL::IRowsetCreatorImpl<T>::SetSite"
  - "ATL::IRowsetCreatorImpl::SetSite"
  - "ATL.IRowsetCreatorImpl<T>.SetSite"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetSite method"
ms.assetid: e92e63d5-93e4-4ee0-9ef7-bb6583cc8091
caps.latest.revision: 8
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
# IRowsetCreatorImpl::SetSite
Sets the site that contains the rowset object. For more information, see [IObjectWithSite::SetSite](http://msdn.microsoft.com/library/windows/desktop/ms683869).  
  
## Syntax  
  
```  
  
      STDMETHOD( SetSite )(  
   IUnknown* pCreator   
);  
```  
  
#### Parameters  
 `pCreator`  
 [in] Pointer to the **IUnknown** interface pointer of the site managing the rowset object.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 In addition, `IRowsetCreatorImpl::SetSite` enables the OLE DB **DBPROPCANSCROLLBACKWARDS DBPROPCANFETCHBACKWARDS** properties.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetCreatorImpl Class](../data/irowsetcreatorimpl-class.md)