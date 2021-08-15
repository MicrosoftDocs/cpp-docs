---
description: "Learn more about: Type-Safe Access to Controls Without Code Wizards"
title: "Type-Safe Access to Controls Without Code Wizards"
ms.date: "11/04/2016"
helpviewer_keywords: ["dialog boxes [MFC], accessing controls", "dialog box controls [MFC], accessing"]
ms.assetid: 325b4927-d49b-42b4-8e0b-fc84f31fb059
---
# Type-Safe Access to Controls Without Code Wizards

The first approach to creating type-safe access to controls uses an inline member function to cast the return type of class `CWnd`'s `GetDlgItem` member function to the appropriate C++ control type, as in this example:

[!code-cpp[NVC_MFCControlLadenDialog#50](../mfc/codesnippet/cpp/type-safe-access-to-controls-without-code-wizards_1.cpp)]

You can then use this member function to access the control in a type-safe manner with code similar to the following:

[!code-cpp[NVC_MFCControlLadenDialog#51](../mfc/codesnippet/cpp/type-safe-access-to-controls-without-code-wizards_2.cpp)]

## See also

[Type-Safe Access to Controls in a Dialog Box](../mfc/type-safe-access-to-controls-in-a-dialog-box.md)<br/>
[Type-Safe Access to Controls With Code Wizards](../mfc/type-safe-access-to-controls-with-code-wizards.md)
