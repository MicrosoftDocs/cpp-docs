---
title: "Creating New Documents, Windows, and Views"
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
ms.assetid: 88aa1f5f-2078-4603-b16b-a2b4c7b4a2a3
caps.latest.revision: 8
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
# Creating New Documents, Windows, and Views
The following figures give an overview of the creation process for documents, views, and frame windows. Other articles that focus on the participating objects provide further details.  
  
 Upon completion of this process, the cooperating objects exist and store pointers to each other. The following figures show the sequence in which objects are created. You can follow the sequence from figure to figure.  
  
 ![Sequence for creating a document](../VS_visualcpp/media/vc387L1.gif "vc387L1")  
Sequence in Creating a Document  
  
 ![Frame Window Creation Sequence](../VS_visualcpp/media/vc387L2.png "vc387L2")  
Sequence in Creating a Frame Window  
  
 ![Sequence for creating a view](../VS_visualcpp/media/vc387L3.gif "vc387L3")  
Sequence in Creating a View  
  
 For information about how the framework initializes the new document, view, and frame-window objects, see classes [CDocument](../VS_visualcpp/CDocument-Class.md), [CView](../VS_visualcpp/CView-Class.md), [CFrameWnd](../VS_visualcpp/CFrameWnd-Class.md), [CMDIFrameWnd](../VS_visualcpp/CMDIFrameWnd-Class.md), and [CMDIChildWnd](../VS_visualcpp/CMDIChildWnd-Class.md) in the MFC Library Reference. Also see [Technical Note 22](../VS_visualcpp/TN022--Standard-Commands-Implementation.md), which explains the creation and initialization processes further under its discussion of the framework's standard commands for the `New` and **Open** items on the **File** menu.  
  
##  <a name="_core_initializing_your_own_additions_to_these_classes"></a> Initializing Your Own Additions to These Classes  
 The preceding figures also suggest the points at which you can override member functions to initialize your application's objects. An override of `OnInitialUpdate` in your view class is the best place to initialize the view. The `OnInitialUpdate` call occurs immediately after the frame window is created and the view within the frame window is attached to its document. For example, if your view is a scroll view (derived from `CScrollView` rather than `CView`), you should set the view size based on the document size in your `OnInitialUpdate` override. (This process is described in the description of class [CScrollView](../VS_visualcpp/CScrollView-Class.md).) You can override the **CDocument** member functions `OnNewDocument` and `OnOpenDocument` to provide application-specific initialization of the document. Typically, you must override both since a document can be created in two ways.  
  
 In most cases, your override should call the base class version. For more information, see the named member functions of classes [CDocument](../VS_visualcpp/CDocument-Class.md), [CView](../VS_visualcpp/CView-Class.md), [CFrameWnd](../VS_visualcpp/CFrameWnd-Class.md), and [CWinApp](../VS_visualcpp/CWinApp-Class.md) in the MFC Library Reference.  
  
## See Also  
 [Document Templates and the Document/View Creation Process](../VS_visualcpp/Document-Templates-and-the-Document-View-Creation-Process.md)   
 [Document Template Creation](../VS_visualcpp/Document-Template-Creation.md)   
 [Document/View Creation](../VS_visualcpp/Document-View-Creation.md)   
 [Relationships Among MFC Objects](../VS_visualcpp/Relationships-Among-MFC-Objects.md)