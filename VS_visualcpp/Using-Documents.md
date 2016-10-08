---
title: "Using Documents"
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
ms.assetid: f390d6d8-d0e1-4497-9b6a-435f7ce0776c
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
# Using Documents
Working together, documents and views:  
  
-   Contain, manage, and display your application-specific [data](../VS_visualcpp/Managing-Data-with-Document-Data-Variables.md).  
  
-   Provide an interface consisting of [document data variables](../VS_visualcpp/Managing-Data-with-Document-Data-Variables.md) for manipulating the data.  
  
-   Participate in [writing and reading files](../VS_visualcpp/Serializing-Data-to-and-from-Files.md).  
  
-   Participate in [printing](../VS_visualcpp/Role-of-the-View-in-Printing.md).  
  
-   [Handle](../VS_visualcpp/Handling-Commands-in-the-Document.md) most of your application's commands and messages.  
  
 The document is particularly involved in managing data. Store your data, normally, in document class member variables. The view uses these variables to access the data for display and update. The document's default serialization mechanism manages reading and writing the data to and from files. Documents can also handle commands (but not Windows messages other than **WM_COMMAND**).  
  
## What do you want to know more about?  
  
-   [Deriving a document class from CDocument](../VS_visualcpp/Deriving-a-Document-Class-from-CDocument.md)  
  
-   [Managing data with document data variables](../VS_visualcpp/Managing-Data-with-Document-Data-Variables.md)  
  
-   [Serializing data to and from files](../VS_visualcpp/Serializing-Data-to-and-from-Files.md)  
  
-   [Bypassing the serialization mechanism](../VS_visualcpp/Bypassing-the-Serialization-Mechanism.md)  
  
-   [Handling commands in the document](../VS_visualcpp/Handling-Commands-in-the-Document.md)  
  
-   [The OnNewDocument member function](../Topic/CDocument::OnNewDocument.md)  
  
-   [The DeleteContents member function](../Topic/CDocument::DeleteContents.md)  
  
## See Also  
 [Document/View Architecture](../VS_visualcpp/Document-View-Architecture.md)