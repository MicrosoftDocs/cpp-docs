---
title: "Using Multiple Result Sets from One Stored Procedure | Microsoft Docs"
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
  - "stored procedures, returning result sets"
  - "multiple result sets"
ms.assetid: c450c12c-a76c-4ae4-9675-071a41eeac05
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
# Using Multiple Result Sets from One Stored Procedure
Most stored procedures return multiple result sets. Such a stored procedure usually includes one or more select statements. The consumer needs to consider this to handle all the result sets.  
  
### To handle multiple result sets  
  
1.  Create a `CCommand` class with `CMultipleResults` as a template argument and with the accessor of your choice. Usually, this is a dynamic or manual accessor. If you use another type of accessor, you might not be able to determine the output columns for each rowset.  
  
2.  Execute the stored procedure as usual and bind the columns (see [How Do I Fetch Data?](../../data/oledb/fetching-data.md)).  
  
3.  Use the data.  
  
4.  Call `GetNextResult` on the `CCommand` class. If another result rowset is available, `GetNextResult` returns S_OK and you should rebind your columns if you are using a manual accessor. If `GetNextResult` returns an error, there are no further result sets available.  
  
## See Also  
 [Using Stored Procedures](../../data/oledb/using-stored-procedures.md)