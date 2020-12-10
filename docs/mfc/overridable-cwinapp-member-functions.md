---
description: "Learn more about: Overridable CWinApp Member Functions"
title: "Overridable CWinApp Member Functions"
ms.date: "11/04/2016"
helpviewer_keywords: ["overriding [MFC], overridable functions in CWinApp", "application class [MFC]", "CWinApp class [MFC], overridables"]
ms.assetid: 07183d5e-734b-45d9-a8b6-9dde4adac0b4
---
# Overridable CWinApp Member Functions

[CWinApp](reference/cwinapp-class.md) provides several key overridable member functions (`CWinApp` overrides these members from class [CWinThread](reference/cwinthread-class.md), from which `CWinApp` derives):

- [InitInstance](initinstance-member-function.md)

- [Run](run-member-function.md)

- [ExitInstance](exitinstance-member-function.md)

- [OnIdle](onidle-member-function.md)

The only `CWinApp` member function that you must override is `InitInstance`.

## See also

[CWinApp: The Application Class](cwinapp-the-application-class.md)
