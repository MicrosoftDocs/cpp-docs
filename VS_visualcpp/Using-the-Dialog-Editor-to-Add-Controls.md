---
title: "Using the Dialog Editor to Add Controls"
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
ms.assetid: d3f9f994-7e54-4656-a545-42c204557c36
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
# Using the Dialog Editor to Add Controls
When you create your dialog-template resource with the [dialog editor](../VS_visualcpp/Dialog-Editor.md), you drag controls from a controls palette and drop them into the dialog box. This adds the specifications for that control type to the dialog-template resource. When you construct a dialog object and call its **Create** or `DoModal` member function, the framework creates a Windows control and places it in the dialog window on screen.  
  
 You can instead [create controls by hand](../VS_visualcpp/Adding-Controls-By-Hand.md) if you want. This is more work.  
  
## See Also  
 [Making and Using Controls](../VS_visualcpp/Making-and-Using-Controls.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)