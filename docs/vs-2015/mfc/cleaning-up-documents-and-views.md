---
title: "Cleaning Up Documents and Views | Microsoft Docs"
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
  - "views, cleaning up"
  - "documents, cleaning up"
  - "documents, closing"
ms.assetid: 0c454db2-3644-434d-9e53-8108a7aedfe1
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Cleaning Up Documents and Views
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Cleaning Up Documents and Views](https://docs.microsoft.com/cpp/mfc/cleaning-up-documents-and-views).  
  
  
When a document is closing, the framework first calls its [DeleteContents](../mfc/reference/cdocument-class.md#deletecontents) member function. If you allocated any memory on the heap during the course of the document's operation, `DeleteContents` is the best place to deallocate it.  
  
> [!NOTE]
>  You should not deallocate document data in the document's destructor. In the case of an SDI application, the document object might be reused.  
  
 You can override a view's destructor to deallocate any memory you allocated on the heap.  
  
## See Also  
 [Initializing and Cleaning Up Documents and Views](../mfc/initializing-and-cleaning-up-documents-and-views.md)





