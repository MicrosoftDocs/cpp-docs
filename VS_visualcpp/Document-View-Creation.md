---
title: "Document-View Creation"
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
H1: Document/View Creation
ms.assetid: bda14f41-ed50-439d-af9e-591174e7dd64
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
# Document-View Creation
The framework supplies implementations of the `New` and **Open** commands (among others) on the **File** menu. Creation of a new document and its associated view and frame window is a cooperative effort among the application object, a document template, the newly created document, and the newly created frame window. The following table summarizes which objects create what.  
  
### Object Creators  
  
|Creator|Creates|  
|-------------|-------------|  
|Application object|Document template|  
|Document template|Document|  
|Document template|Frame window|  
|Frame window|View|  
  
## See Also  
 [Document Templates and the Document/View Creation Process](../VS_visualcpp/Document-Templates-and-the-Document-View-Creation-Process.md)   
 [Document Template Creation](../VS_visualcpp/Document-Template-Creation.md)   
 [Relationships Among MFC Objects](../VS_visualcpp/Relationships-Among-MFC-Objects.md)   
 [Creating New Documents, Windows, and Views](../VS_visualcpp/Creating-New-Documents--Windows--and-Views.md)