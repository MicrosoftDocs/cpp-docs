---
title: "Overridable CWinApp Member Functions"
ms.date: "11/04/2016"
f1_keywords: ["CWinApp"]
helpviewer_keywords: ["overriding [MFC], overridable functions in CWinApp", "application class [MFC]", "CWinApp class [MFC], overridables"]
ms.assetid: 07183d5e-734b-45d9-a8b6-9dde4adac0b4
---
# Overridable CWinApp Member Functions

[CWinApp](../mfc/reference/cwinapp-class.md) provides several key overridable member functions (`CWinApp` overrides these members from class [CWinThread](../mfc/reference/cwinthread-class.md), from which `CWinApp` derives):

- [InitInstance](../mfc/initinstance-member-function.md)

- [Run](../mfc/run-member-function.md)

- [ExitInstance](../mfc/exitinstance-member-function.md)

- [OnIdle](../mfc/onidle-member-function.md)

The only `CWinApp` member function that you must override is `InitInstance`.

## See also

- [CWinApp: The Application Class](../mfc/cwinapp-the-application-class.md)
