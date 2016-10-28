---
title: "MFC ActiveX Controls: Returning Error Codes From a Method"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC ActiveX controls, error codes"
  - "SetNotSupported method, using"
  - "errors [C++], ActiveX control error codes"
  - "GetNotSupported method"
  - "FireError method"
  - "SCODE, MFC ActiveX controls"
  - "ThrowError method"
ms.assetid: 771fb9c9-2413-4dcc-b386-7bc4c4adeafd
caps.latest.revision: 8
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# MFC ActiveX Controls: Returning Error Codes From a Method
This article describes how to return error codes from an ActiveX control method.  
  
 To indicate that an error has occurred within a method, you should use the [COleControl::ThrowError](../Topic/COleControl::ThrowError.md) member function, which takes an `SCODE` (status code) as a parameter. You can use a predefined `SCODE` or define one of your own.  
  
> [!NOTE]
>  `ThrowError` is meant to be used only as a means of returning an error from within a property's Get or Set function or an automation Method. These are the only times that the appropriate exception handler will be present on the stack.  
  
 Helper functions exist for the most common predefined `SCODE`s, such as [COleControl::SetNotSupported](../Topic/COleControl::SetNotSupported.md), [COleControl::GetNotSupported](../Topic/COleControl::GetNotSupported.md), and [COleControl::SetNotPermitted](../Topic/COleControl::SetNotPermitted.md).  
  
 For a list of predefined `SCODE`s and instructions on defining custom `SCODE`s, see the section [Handling Errors in Your ActiveX Control](../mfc/mfc-activex-controls--advanced-topics.md) in ActiveX Controls: Advanced Topics.  
  
 For more information on reporting exceptions in other areas of your code, see [COleControl::FireError](../Topic/COleControl::FireError.md) and the section [Handling Errors in Your ActiveX Control](../mfc/mfc-activex-controls--advanced-topics.md) in ActiveX Controls: Advanced Topics.  
  
## See Also  
 [MFC ActiveX Controls](../mfc/mfc-activex-controls.md)