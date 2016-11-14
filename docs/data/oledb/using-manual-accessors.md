---
title: "Using Manual Accessors | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "command handling, OLE DB Templates"
  - "manual accessors"
  - "accessors [C++], manual"
ms.assetid: 29f00a89-0240-482b-8413-4120b9644672
caps.latest.revision: 7
author: "mikeblome"
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
# Using Manual Accessors
There are four things to do when handling an unknown command:  
  
-   Determine the parameters  
  
-   Execute the command  
  
-   Determine the output columns  
  
-   See if there are multiple return rowsets  
  
 To do this with the OLE DB Consumer Templates, use the `CManualAccessor` class and follow these steps:  
  
1.  Open a `CCommand` object with `CManualAccessor` as a template parameter.  
  
    ```  
    CCommand<CManualAccessor, CRowset, CMultipleResults> rs;  
    ```  
  
2.  Query the session for the **IDBSchemaRowset** interface and use the procedure parameters rowset. If the **IDBSchemaRowset** interface is not available, query for the `ICommandWithParameters` interface. Call `GetParameterInfo` for information. If neither interface is available, you can assume there are no parameters.  
  
3.  For each parameter, call `AddParameterEntry` to add the parameters and set them.  
  
4.  Open the rowset but set the bind parameter to **false**.  
  
5.  Call `GetColumnInfo` to retrieve the output columns. Use `AddBindEntry` to add the output column to the binding.  
  
6.  Call `GetNextResult` to determine if more rowsets are available. Repeat steps 2 through 5.  
  
 For an example of a manual accessor, see **CDBListView::CallProcedure** in the [DBVIEWER](http://msdn.microsoft.com/en-us/07620f99-c347-4d09-9ebc-2459e8049832) sample.  
  
## See Also  
 [Using Accessors](../../data/oledb/using-accessors.md)