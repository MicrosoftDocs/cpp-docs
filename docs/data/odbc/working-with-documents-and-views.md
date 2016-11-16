---
title: "Working with Documents and Views | Microsoft Docs"
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
  - "MFC [C++], documents"
  - "MFC [C++], views"
  - "views [C++], MFC"
  - "documents [C++], MFC"
ms.assetid: 349b142d-1c5a-4b99-9de4-241e41d3d2f1
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
# Working with Documents and Views
The Microsoft Foundation Classes (MFC) library relies on a document/view architecture for many of its features. Typically, a document stores your data and a view displays it within the client area of a frame window and manages user interaction with the data. The view communicates with the document to obtain and update the data. You can use the database classes with the framework or without it.  
  
 For more information about using database classes in the framework, see [MFC: Using Database Classes with Documents and Views](../../data/mfc-using-database-classes-with-documents-and-views.md).  
  
 By default, the MFC Application Wizard creates a skeleton application with no database support. However, you can select options to include minimal database support or more complete form-based support. For more information about application wizard options, see [Database Support, MFC Application Wizard](../../mfc/reference/database-support-mfc-application-wizard.md).  
  
 You can also use the database classes without using the full document/view architecture. For more information, see [MFC: Using Database Classes Without Documents and Views](../../data/mfc-using-database-classes-without-documents-and-views.md).  
  
## See Also  
 [ODBC and MFC](../../data/odbc/odbc-and-mfc.md)