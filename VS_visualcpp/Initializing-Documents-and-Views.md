---
title: "Initializing Documents and Views"
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
ms.assetid: 33cb8643-8a16-478c-bc26-eccc734e3661
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
# Initializing Documents and Views
Documents are created in two different ways, so your document class must support both ways. First, the user can create a new, empty document with the File New command. In that case, initialize the document in your override of the [OnNewDocument](../Topic/CDocument::OnNewDocument.md) member function of class [CDocument](../VS_visualcpp/CDocument-Class.md). Second, the user can use the Open command on the File menu to create a new document whose contents are read from a file. In that case, initialize the document in your override of the [OnOpenDocument](../Topic/CDocument::OnOpenDocument.md) member function of class **CDocument**. If both initializations are the same, you can call a common member function from both overrides, or `OnOpenDocument` can call `OnNewDocument` to initialize a clean document and then finish the open operation.  
  
 Views are created after their documents are created. The best time to initialize a view is after the framework has finished creating the document, frame window, and view. You can initialize your view by overriding the [OnInitialUpdate](../Topic/CView::OnInitialUpdate.md) member function of [CView](../VS_visualcpp/CView-Class.md). If you need to reinitialize or adjust anything each time the document changes, you can override [OnUpdate](../Topic/CView::OnUpdate.md).  
  
## See Also  
 [Initializing and Cleaning Up Documents and Views](../VS_visualcpp/Initializing-and-Cleaning-Up-Documents-and-Views.md)