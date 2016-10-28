---
title: "CDataConnection Class"
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
  - "ATL::CDataConnection"
  - "ATL.CDataConnection"
  - "CDataConnection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDataConnection class"
ms.assetid: 77432d85-4e20-49ec-a0b0-142137828471
caps.latest.revision: 13
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
|[CDataConnection](../data/cdataconnection--cdataconnection.md)|Constructor. Instantiates and initializes a `CDataConnection` object.|  
|[Copy](../data/cdataconnection--copy.md)|Creates a copy of an existing data connection.|  
|[Open](../data/cdataconnection--open.md)|Opens a connection to a data source using an initialization string.|  
|[OpenNewSession](../data/cdataconnection--opennewsession.md)|Opens a new session on the current connection.|  
  
### Operators  
  
|||  
|-|-|  
|[operator BOOL](../data/cdataconnection--operator-bool.md)|Determines whether the current session is open or not.|  
|[operator bool](../data/cdataconnection--operator-bool--ole-db-.md)|Determines whether the current session is open or not.|  
|[operator CDataSource&](../data/cdataconnection--operator-cdatasource-.md)|Returns a reference to the contained `CDataSource` object.|  
|[operator CDataSource*](../data/cdataconnection--operator-cdatasource-.md)|Returns a pointer to the contained `CDataSource` object.|  
|[operator CSession&](../data/cdataconnection--operator-csession-.md)|Returns a reference to the contained `CSession` object.|  
|[operator CSession*](../data/cdataconnection--operator-csession-.md)|Returns a pointer to the contained `CSession` object.|  
  
## Remarks  
 `CDataConnection` is a useful class for creating clients because it encapsulates necessary objects (data source and session) and some of the work you need to do when connecting to a data source  
  
 Without `CDataConnection`, you have to create a `CDataSource` object, call its [OpenFromInitializationString](../data/cdatasource--openfrominitializationstring.md) method, then create an instance of a [CSession](../data/csession-class.md) object, call its [Open](../data/csession--open.md) method, then create a [CCommand](../data/ccommand-class.md) object and call its **Open*** methods.  
  
 With `CDataConnection`, you only need to create a connection object, pass it an initialization string, then use that connection to open commands. If you plan on using your connection to the database repeatedly, it is a good idea to keep the connection open, and `CDataConnection` provides a convenient way to do that.  
  
> [!NOTE]
>  If you are creating a database application that needs to handle multiple sessions, you will need to use [OpenNewSession](../data/cdataconnection--opennewsession.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../data/ole-db-consumer-templates--c---.md)   
 [OLE DB Consumer Templates Reference](../data/ole-db-consumer-templates-reference.md)