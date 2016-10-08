---
title: "Relationship to the C-Language API"
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
ms.assetid: 334e8efc-f3cc-4018-bc2e-02908b2a39fe
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
# Relationship to the C-Language API
The single characteristic that sets the Microsoft Foundation Class (MFC) Library apart from other class libraries for Windows is the very close mapping to the Windows API written in the C language. Further, you can generally mix calls to the class library freely with direct calls to the Windows API. This direct access does not, however, imply that the classes are a complete replacement for that API. Developers must still occasionally make direct calls to some Windows functions, such as [SetCursor](http://msdn.microsoft.com/library/windows/desktop/ms648393) and [GetSystemMetrics](http://msdn.microsoft.com/library/windows/desktop/ms724385), for example. A Windows function is wrapped by a class member function only when there is a clear advantage to doing so.  
  
 Because you sometimes need to make native Windows function calls, you should have access to the C-language Windows API documentation. This documentation is included with Microsoft Visual C++.  
  
> [!NOTE]
>  For an overview of how the MFC Library framework operates, see [Using the Classes to Write Applications for Windows](../VS_visualcpp/Using-the-Classes-to-Write-Applications-for-Windows.md).  
  
## See Also  
 [General Class Design Philosophy](../VS_visualcpp/General-Class-Design-Philosophy.md)