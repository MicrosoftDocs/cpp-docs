---
title: "Using the RichEdit 1.0 Control with MFC"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 5a9060dd-44d8-4ef3-956e-16152f7e23d2
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
# Using the RichEdit 1.0 Control with MFC
To use a RichEdit control, you must first call [AfxInitRichEdit2](../Topic/AfxInitRichEdit2.md) to load the RichEdit 2.0 Control (RICHED20.DLL), or call [AfxInitRichEdit](../Topic/AfxInitRichEdit.md) to load the older RichEdit 1.0 Control (RICHED32.DLL).  
  
 You may use the current [CRichEditCtrl](../VS_visualcpp/CRichEditCtrl-Class.md) class with the older RichEdit 1.0 control, but **CRichEditCtrl** is only designed to support the RichEdit 2.0 control. Because RichEdit 1.0 and RichEdit 2.0 are very similar, most methods will work; however, note there are some differences between the 1.0 and 2.0 controls, so some methods might work incorrectly or not work at all.  
  
## Requirements  
 MFC  
  
## See Also  
 [Troubleshooting the Dialog Editor](../VS_visualcpp/Troubleshooting-the-Dialog-Editor.md)   
 [Dialog Editor](../VS_visualcpp/Dialog-Editor.md)