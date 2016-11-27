---
title: "Deriving a Document Class from CDocument | Microsoft Docs"
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
  - "CDocument class, deriving from"
  - "classes [C++], deriving from CDocument"
  - "document objects, derived"
  - "derived classes, functions often overridden"
  - "document classes, functions often overridden"
ms.assetid: e6a198e0-9799-43c0-83c5-04174d8b532c
caps.latest.revision: 9
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
# Deriving a Document Class from CDocument
Documents contain and manage your application's data. To use the MFC Application Wizard-supplied document class, you must do the following:  
  
-   Derive a class from **CDocument** for each type of document.  
  
-   Add member variables to store each document's data.  
  
-   Override **CDocument**'s `Serialize` member function in your document class. `Serialize` writes and reads the document's data to and from disk.  
  
## Other Document Functions Often Overridden  
 You may also want to override other **CDocument** member functions. In particular, you will often need to override [OnNewDocument](../mfc/reference/cdocument-class.md#cdocument__onnewdocument) and [OnOpenDocument](../mfc/reference/cdocument-class.md#cdocument__onopendocument) to initialize the document's data members and [DeleteContents](../mfc/reference/cdocument-class.md#cdocument__deletecontents) to destroy dynamically allocated data. For information about overridable members, see class [CDocument](../mfc/reference/cdocument-class.md) in the *MFC Reference*.  
  
## See Also  
 [Using Documents](../mfc/using-documents.md)

