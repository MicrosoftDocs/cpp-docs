---
title: "CDataConnection Class"
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
ms.assetid: 77432d85-4e20-49ec-a0b0-142137828471
caps.latest.revision: 13
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
# CDataConnection Class
Manages the connection with the data source.  
  
## Syntax  
  
```  
class CDataConnection  
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[CDataConnection](../VS_visualcpp/CDataConnection--CDataConnection.md)|Constructor. Instantiates and initializes a `CDataConnection` object.|  
|[Copy](../VS_visualcpp/CDataConnection--Copy.md)|Creates a copy of an existing data connection.|  
|[Open](../VS_visualcpp/CDataConnection--Open.md)|Opens a connection to a data source using an initialization string.|  
|[OpenNewSession](../VS_visualcpp/CDataConnection--OpenNewSession.md)|Opens a new session on the current connection.|  
  
### Operators  
  
|||  
|-|-|  
|[operator BOOL](../VS_visualcpp/CDataConnection--operator-BOOL.md)|Determines whether the current session is open or not.|  
|[operator bool](../VS_visualcpp/CDataConnection--operator-bool--OLE-DB-.md)|Determines whether the current session is open or not.|  
|[operator CDataSource&](../VS_visualcpp/CDataConnection--operator-CDataSource-.md)|Returns a reference to the contained `CDataSource` object.|  
|[operator CDataSource*](../VS_visualcpp/CDataConnection--operator-CDataSource-.md)|Returns a pointer to the contained `CDataSource` object.|  
|[operator CSession&](../VS_visualcpp/CDataConnection--operator-CSession-.md)|Returns a reference to the contained `CSession` object.|  
|[operator CSession*](../VS_visualcpp/CDataConnection--operator-CSession-.md)|Returns a pointer to the contained `CSession` object.|  
  
## Remarks  
 `CDataConnection` is a useful class for creating clients because it encapsulates necessary objects (data source and session) and some of the work you need to do when connecting to a data source  
  
 Without `CDataConnection`, you have to create a `CDataSource` object, call its [OpenFromInitializationString](../VS_visualcpp/CDataSource--OpenFromInitializationString.md) method, then create an instance of a [CSession](../VS_visualcpp/CSession-Class.md) object, call its [Open](../VS_visualcpp/CSession--Open.md) method, then create a [CCommand](../VS_visualcpp/CCommand-Class.md) object and call its **Open*** methods.  
  
 With `CDataConnection`, you only need to create a connection object, pass it an initialization string, then use that connection to open commands. If you plan on using your connection to the database repeatedly, it is a good idea to keep the connection open, and `CDataConnection` provides a convenient way to do that.  
  
> [!NOTE]
>  If you are creating a database application that needs to handle multiple sessions, you will need to use [OpenNewSession](../VS_visualcpp/CDataConnection--OpenNewSession.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates Reference](../VS_visualcpp/OLE-DB-Consumer-Templates-Reference.md)