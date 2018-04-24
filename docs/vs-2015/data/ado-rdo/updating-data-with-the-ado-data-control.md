---
title: "Updating Data with the ADO Data Control | Microsoft Docs"
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
  - "ADO [C++], data binding"
  - "ADO [C++], data controls"
ms.assetid: 8bec34b9-93dd-4872-b023-55ac011ccff5
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Updating Data with the ADO Data Control
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Visual Studio 2017 Documentation](https://docs.microsoft.com/en-us/visualstudio/).  
  
ADO data control data can be either read-only or modifiable.  
  
### To create an application that modifies data using ADO data control  
  
1.  Set ADO data control **CursorLocation** property. Options are:  
  
    -   Server Side  
  
    -   Client Side  
  
2.  Set ADO data control **LockType** property. The optimistic concurrency is recommended.  
  
3.  Set ADO data control **CursorType** property. Options are:  
  
    -   Keyset Cursor  
  
    -   Dynamic Cursor  
  
    -   Static Cursor  
  
     Make sure the OLE DB provider supports the chosen option.  
  
4.  Set the data-bound control's properties, as needed, to allow updateability. Note that some controls do not allow updating.  
  
 For more information about these properties, see the ADO documentation.  
  
## See Also  
 [ADO Databinding](../../data/ado-rdo/ado-databinding.md)   
 [Using ADO Databinding in Visual C++](../../data/ado-rdo/using-ado-databinding-in-visual-cpp.md)

