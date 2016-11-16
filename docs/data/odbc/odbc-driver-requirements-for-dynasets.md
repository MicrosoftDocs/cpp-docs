---
title: "ODBC Driver Requirements for Dynasets | Microsoft Docs"
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
  - "ODBC recordsets, dynasets"
  - "drivers, for dynasets"
  - "drivers, ODBC"
  - "recordsets, dynasets"
  - "dynasets"
  - "ODBC drivers, dynasets"
ms.assetid: 585cc67b-4d92-404b-9903-d769cd17badc
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
# ODBC Driver Requirements for Dynasets
In the MFC ODBC database classes, dynasets are recordsets with dynamic properties; they remain synchronized with the data source in certain ways. MFC dynasets (but not forward-only recordsets) require an ODBC driver with Level 2 API conformance. If the driver for your [data source](../../data/odbc/data-source-odbc.md) conforms to the Level 1 API set, you can still use both updateable and read-only snapshots and forward-only recordsets, but not dynasets. However, a Level 1 driver can support dynasets if it supports extended fetch and keyset-driven cursors.  
  
 In ODBC terminology, dynasets and snapshots are referred to as cursors. A cursor is a mechanism used for keeping track of its position in a recordset. For more information about driver requirements for dynasets, see [Dynaset](../../data/odbc/dynaset.md). For more information about cursors, see the [Open Database Connectivity (ODBC)](https://msdn.microsoft.com/en-us/library/ms710252.aspx) SDK in the MSDN documentation.  
  
> [!NOTE]
>  For updateable recordsets, your ODBC driver must support either positioned update statements or the **::SQLSetPos** ODBC API function. If both are supported, MFC uses **::SQLSetPos** for efficiency. Alternatively, for snapshots, you can use the cursor library, which provides the required support for updateable snapshots (static cursors and positioned update statements).  
  
## See Also  
 [ODBC Basics](../../data/odbc/odbc-basics.md)