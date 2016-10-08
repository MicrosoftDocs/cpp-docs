---
title: "Clipboard Operations in Rich Edit Controls"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 15ce66bc-2636-4a35-a2ae-d52285dc1af6
caps.latest.revision: 9
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
# Clipboard Operations in Rich Edit Controls
Your application can paste the contents of the Clipboard into a rich edit control ([CRichEditCtrl](../VS_visualcpp/CRichEditCtrl-Class.md)) using either the best available Clipboard format or a specific Clipboard format. You can also determine whether a rich edit control is capable of pasting a Clipboard format.  
  
 You can copy or cut the contents of the current selection by using the [Copy](../Topic/CRichEditCtrl::Copy.md) or [Cut](../Topic/CRichEditCtrl::Cut.md) member function. Similarly, you can paste the contents of the Clipboard into a rich edit control by using the [Paste](../Topic/CRichEditCtrl::Paste.md) member function. The control pastes the first available format that it recognizes, which presumably is the most descriptive format.  
  
 To paste a specific Clipboard format, you can use the [PasteSpecial](../Topic/CRichEditCtrl::PasteSpecial.md) member function. This function is useful for applications with a Paste Special command that enables the user to select the Clipboard format. You can use the [CanPaste](../Topic/CRichEditCtrl::CanPaste.md) member function to determine whether a given format is recognized by the control.  
  
 You can also use `CanPaste` to determine whether any available Clipboard format is recognized by a rich edit control. This function is useful in the `OnInitMenuPopup` handler. An application might enable or gray its Paste command depending on whether the control can paste any available format.  
  
 Rich edit controls register two Clipboard formats: rich-text format and a format called RichEdit Text and Objects. An application can register these formats by using the [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) function, specifying the **CF_RTF** and **CF_RETEXTOBJ** values.  
  
## See Also  
 [Using CRichEditCtrl](../VS_visualcpp/Using-CRichEditCtrl.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)