---
title: "IRowsetNotifyImpl::OnRowChange"
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
ms.assetid: 148bee03-3707-4bbf-8c51-657efc63645f
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
# IRowsetNotifyImpl::OnRowChange
Notifies the consumer of the first change to a row or of any change that affects the entire row.  
  
## Syntax  
  
```  
  
STDMETHOD(OnRowChange)(   
/* [in] */ IRowset* /* pRowset */,  
/* [in] */ DBCOUNTITEM /* cRows */,  
/* [size_is][in] */ const HROW /* rghRows*/ [] ,  
/* [in] */ DBREASON /* eReason */,  
/* [in] */ DBEVENTPHASE /* ePhase */,  
/* [in] */ BOOL /* fCantDeny */)  
```  
  
#### Parameters  
 See [IRowsetNotify::OnRowChange](https://msdn.microsoft.com/en-us/library/ms722694.aspx) for parameter descriptions.  
  
## Return Value  
 See [IRowsetNotify::OnRowChange](https://msdn.microsoft.com/en-us/library/ms722694.aspx) for return value descriptions.  
  
## Remarks  
 This method wraps the [IRowsetNotify::OnRowChange](https://msdn.microsoft.com/en-us/library/ms722694.aspx) method. See that method's description in the OLE DB Programmer's Reference for details.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [IRowsetNotifyImpl Class](../VS_visualcpp/IRowsetNotifyImpl-Class.md)   
 [IRowsetNotify::OnRowChange](https://msdn.microsoft.com/en-us/library/ms722694.aspx)