---
title: "MFC ActiveX Controls: Returning Error Codes From a Method"
ms.date: "11/04/2016"
helpviewer_keywords: ["MFC ActiveX controls [MFC], error codes", "SetNotSupported method, using", "errors [MFC], ActiveX control error codes", "GetNotSupported method [MFC]", "FireError method [MFC]", "SCODE, MFC ActiveX controls", "ThrowError method [MFC]"]
ms.assetid: 771fb9c9-2413-4dcc-b386-7bc4c4adeafd
---
# MFC ActiveX Controls: Returning Error Codes From a Method

This article describes how to return error codes from an ActiveX control method.

To indicate that an error has occurred within a method, you should use the [COleControl::ThrowError](../mfc/reference/colecontrol-class.md#throwerror) member function, which takes an SCODE (status code) as a parameter. You can use a predefined SCODE or define one of your own.

> [!NOTE]
>  `ThrowError` is meant to be used only as a means of returning an error from within a property's Get or Set function or an automation Method. These are the only times that the appropriate exception handler will be present on the stack.

Helper functions exist for the most common predefined SCODEs, such as [COleControl::SetNotSupported](../mfc/reference/colecontrol-class.md#setnotsupported), [COleControl::GetNotSupported](../mfc/reference/colecontrol-class.md#getnotsupported), and [COleControl::SetNotPermitted](../mfc/reference/colecontrol-class.md#setnotpermitted).

For a list of predefined SCODEs and instructions on defining custom SCODEs, see the section [Handling Errors in Your ActiveX Control](../mfc/mfc-activex-controls-advanced-topics.md) in ActiveX Controls: Advanced Topics.

For more information on reporting exceptions in other areas of your code, see [COleControl::FireError](../mfc/reference/colecontrol-class.md#fireerror) and the section [Handling Errors in Your ActiveX Control](../mfc/mfc-activex-controls-advanced-topics.md) in ActiveX Controls: Advanced Topics.

## See also

[MFC ActiveX Controls](../mfc/mfc-activex-controls.md)
