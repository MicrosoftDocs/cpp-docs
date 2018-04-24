---
title: "MFC ActiveX Controls: Returning Error Codes From a Method | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# MFC ActiveX Controls: Returning Error Codes From a Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [MFC ActiveX Controls: Returning Error Codes From a Method](https://docs.microsoft.com/cpp/mfc/mfc-activex-controls-returning-error-codes-from-a-method).  
  
  
This article describes how to return error codes from an ActiveX control method.  
  
 To indicate that an error has occurred within a method, you should use the [COleControl::ThrowError](../mfc/reference/colecontrol-class.md#colecontrol__throwerror) member function, which takes an `SCODE` (status code) as a parameter. You can use a predefined `SCODE` or define one of your own.  
  
> [!NOTE]
>  `ThrowError` is meant to be used only as a means of returning an error from within a property's Get or Set function or an automation Method. These are the only times that the appropriate exception handler will be present on the stack.  
  
 Helper functions exist for the most common predefined `SCODE`s, such as [COleControl::SetNotSupported](../mfc/reference/colecontrol-class.md#colecontrol__setnotsupported), [COleControl::GetNotSupported](../mfc/reference/colecontrol-class.md#colecontrol__getnotsupported), and [COleControl::SetNotPermitted](../mfc/reference/colecontrol-class.md#colecontrol__setnotpermitted).  
  
 For a list of predefined `SCODE`s and instructions on defining custom `SCODE`s, see the section [Handling Errors in Your ActiveX Control](../mfc/mfc-activex-controls-advanced-topics.md) in ActiveX Controls: Advanced Topics.  
  
 For more information on reporting exceptions in other areas of your code, see [COleControl::FireError](../mfc/reference/colecontrol-class.md#colecontrol__fireerror) and the section [Handling Errors in Your ActiveX Control](../mfc/mfc-activex-controls-advanced-topics.md) in ActiveX Controls: Advanced Topics.  
  
## See Also  
 [MFC ActiveX Controls](../mfc/mfc-activex-controls.md)





