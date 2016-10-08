---
title: "IRowsetNotifyImpl::OnFieldChange"
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
ms.assetid: f26b492c-c86e-423b-9374-175e510a2860
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
# IRowsetNotifyImpl::OnFieldChange
Notifies the consumer of any change to the value of a column.  
  
## Syntax  
  
```  
  
STDMETHOD(OnFieldChange)(   
/* [in] */ IRowset* /* pRowset */,  
/* [in] */ HROW /* hRow */,  
/* [in] */ DBORDINAL /* cColumns */,  
/* [size_is][in] */ DBORDINAL /* rgColumns */ [] ,  
/* [in] */ DBREASON /* eReason */,  
/* [in] */ DBEVENTPHASE /* ePhase */,  
/* [in] */ BOOL /* fCantDeny */)  
```  
  
#### Parameters  
 See [IRowsetNotify::OnFieldChange](https://msdn.microsoft.com/en-us/library/ms715961.aspx) for parameter descriptions.  
  
## Return Value  
 See [IRowsetNotify::OnFieldChange](https://msdn.microsoft.com/en-us/library/ms715961.aspx) for return value descriptions.  
  
## Remarks  
 This method wraps the [IRowsetNotify::OnFieldChange](https://msdn.microsoft.com/en-us/library/ms715961.aspx) method. See that method's description in the OLE DB Programmer's Reference for details.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [IRowsetNotifyImpl Class](../VS_visualcpp/IRowsetNotifyImpl-Class.md)   
 [IRowsetNotify::OnFieldChange](https://msdn.microsoft.com/en-us/library/ms715961.aspx)