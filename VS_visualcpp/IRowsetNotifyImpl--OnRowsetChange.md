---
title: "IRowsetNotifyImpl::OnRowsetChange"
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
ms.assetid: 5125b0c8-f175-4ee6-befa-8df2c904d5e0
caps.latest.revision: 7
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
# IRowsetNotifyImpl::OnRowsetChange
Notifies the consumer of any change affecting the entire rowset.  
  
## Syntax  
  
```  
  
   STDMETHOD(OnRowsetChange)(   
/* [in] */ IRowset* /* pRowset */,  
/* [in] */ DBREASON /* eReason */,  
/* [in] */ DBEVENTPHASE /* ePhase */,  
/* [in] */ BOOL /* fCantDeny */)  
```  
  
#### Parameters  
 See [IRowsetNotify::OnRowsetChange](https://msdn.microsoft.com/en-us/library/ms722669.aspx) for parameter descriptions.  
  
## Return Value  
 See [IRowsetNotify::OnRowsetChange](https://msdn.microsoft.com/en-us/library/ms722669.aspx) for return value descriptions.  
  
## Remarks  
 This method wraps the [IRowsetNotify::OnRowsetChange](https://msdn.microsoft.com/en-us/library/ms722669.aspx) method. See that method's description in the OLE DB Programmer's Reference for details.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [IRowsetNotifyImpl Class](../VS_visualcpp/IRowsetNotifyImpl-Class.md)   
 [IRowsetNotify::OnRowsetChange](https://msdn.microsoft.com/en-us/library/ms722669.aspx)