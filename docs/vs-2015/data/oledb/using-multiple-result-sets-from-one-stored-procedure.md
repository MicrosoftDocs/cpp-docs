---
title: "Using Multiple Result Sets from One Stored Procedure | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Using Multiple Result Sets from One Stored Procedure
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Using Multiple Result Sets from One Stored Procedure](https://docs.microsoft.com/cpp/data/oledb/using-multiple-result-sets-from-one-stored-procedure).  
  
  
Most stored procedures return multiple result sets. Such a stored procedure usually includes one or more select statements. The consumer needs to consider this to handle all the result sets.  
  
### To handle multiple result sets  
  
1.  Create a `CCommand` class with `CMultipleResults` as a template argument and with the accessor of your choice. Usually, this is a dynamic or manual accessor. If you use another type of accessor, you might not be able to determine the output columns for each rowset.  
  
2.  Execute the stored procedure as usual and bind the columns (see [How Do I Fetch Data?](../../data/oledb/fetching-data.md)).  
  
3.  Use the data.  
  
4.  Call `GetNextResult` on the `CCommand` class. If another result rowset is available, `GetNextResult` returns S_OK and you should rebind your columns if you are using a manual accessor. If `GetNextResult` returns an error, there are no further result sets available.  
  
## See Also  
 [Using Stored Procedures](../../data/oledb/using-stored-procedures.md)

