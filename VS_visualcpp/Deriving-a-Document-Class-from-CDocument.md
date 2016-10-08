---
title: "Deriving a Document Class from CDocument"
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
ms.assetid: e6a198e0-9799-43c0-83c5-04174d8b532c
caps.latest.revision: 7
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
# Deriving a Document Class from CDocument
Documents contain and manage your application's data. To use the MFC Application Wizard-supplied document class, you must do the following:  
  
-   Derive a class from **CDocument** for each type of document.  
  
-   Add member variables to store each document's data.  
  
-   Override **CDocument**'s `Serialize` member function in your document class. `Serialize` writes and reads the document's data to and from disk.  
  
## Other Document Functions Often Overridden  
 You may also want to override other **CDocument** member functions. In particular, you will often need to override [OnNewDocument](../Topic/CDocument::OnNewDocument.md) and [OnOpenDocument](../Topic/CDocument::OnOpenDocument.md) to initialize the document's data members and [DeleteContents](../Topic/CDocument::DeleteContents.md) to destroy dynamically allocated data. For information about overridable members, see class [CDocument](../VS_visualcpp/CDocument-Class.md) in the *MFC Reference*.  
  
## See Also  
 [Using Documents](../VS_visualcpp/Using-Documents.md)