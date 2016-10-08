---
title: "Using Views"
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
ms.assetid: dc3de6ad-5c64-4317-8f10-8bdcc38cdbd5
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
# Using Views
The view's responsibilities are to display the document's data graphically to the user and to accept and interpret user input as operations on the document. Your tasks in writing your view class are to:  
  
-   Write your view class's [OnDraw](../Topic/CView::OnDraw.md) member function, which renders the document's data.  
  
-   Connect appropriate Windows messages and user-interface objects such as menu items to message-handler member functions in the view class.  
  
-   Implement those handlers to interpret user input.  
  
 In addition, you may need to override other `CView` member functions in your derived view class. In particular, you may want to override [OnInitialUpdate](../Topic/CView::OnInitialUpdate.md) to perform special initialization for the view and [OnUpdate](../Topic/CView::OnUpdate.md) to do any special processing needed just before the view redraws itself. For multipage documents, you also must override [OnPreparePrinting](../Topic/CView::OnPreparePrinting.md) to initialize the Print dialog box with the number of pages to print and other information. For more information on overriding `CView` member functions, see class [CView](../VS_visualcpp/CView-Class.md) in the *MFC Reference*.  
  
## What do you want to know more about?  
  
-   [Derived view classes available in MFC](../VS_visualcpp/Derived-View-Classes-Available-in-MFC.md)  
  
-   [Drawing in a view](../VS_visualcpp/Drawing-in-a-View.md)  
  
-   [Interpreting user input through a view](../VS_visualcpp/Interpreting-User-Input-Through-a-View.md)  
  
-   [The role of the view in printing](../VS_visualcpp/Role-of-the-View-in-Printing.md)  
  
-   [Scrolling and scaling views](../VS_visualcpp/Scrolling-and-Scaling-Views.md)  
  
-   [Initializing and cleaning up documents and views](../VS_visualcpp/Initializing-and-Cleaning-Up-Documents-and-Views.md)  
  
## See Also  
 [Document/View Architecture](../VS_visualcpp/Document-View-Architecture.md)   
 [CFormView Class](../VS_visualcpp/CFormView-Class.md)   
 [Record Views  (MFC Data Access)](../VS_visualcpp/Record-Views---MFC-Data-Access-.md)   
 [Bypassing the Serialization Mechanism](../VS_visualcpp/Bypassing-the-Serialization-Mechanism.md)