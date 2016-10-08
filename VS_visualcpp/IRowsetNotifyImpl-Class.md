---
title: "IRowsetNotifyImpl Class"
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
ms.assetid: fbfd0cb2-38ff-4b42-899a-8de902f834b8
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
# IRowsetNotifyImpl Class
Implements and registers [IRowsetNotify](https://msdn.microsoft.com/en-us/library/ms712959.aspx) on the consumer (also known as the "sink") so that it can handle notifications.  
  
## Syntax  
  
```  
class ATL_NO_VTABLE IRowsetNotifyImpl : public IRowsetNotify  
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[OnFieldChange](../VS_visualcpp/IRowsetNotifyImpl--OnFieldChange.md)|Notifies the consumer of any change to the value of a column.|  
|[OnRowChange](../VS_visualcpp/IRowsetNotifyImpl--OnRowChange.md)|Notifies the consumer of the first change to a row or of any change that affects the entire row.|  
|[OnRowsetChange](../VS_visualcpp/IRowsetNotifyImpl--OnRowsetChange.md)|Notifies the consumer of any change affecting the entire rowset.|  
  
## Remarks  
 See [Receiving Notifications](../VS_visualcpp/Receiving-Notifications.md) about implementing the connection point interface on the consumer.  
  
 `IRowsetNotifyImpl` provides a dummy implementation for `IRowsetNotify`, with empty functions for the `IRowsetNotify` methods [OnFieldChange](https://msdn.microsoft.com/en-us/library/ms715961.aspx), [OnRowChange](https://msdn.microsoft.com/en-us/library/ms722694.aspx), and [OnRowsetChange](https://msdn.microsoft.com/en-us/library/ms722669.aspx). If you inherit from this class when you implement an `IRowsetNotify` interface, you can implement only the methods you need. You also need to provide empty implementations for the other methods yourself.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [IRowsetNotify](https://msdn.microsoft.com/en-us/library/ms712959.aspx)   
 [IRowsetNotifyCP Class](../VS_visualcpp/IRowsetNotifyCP-Class.md)