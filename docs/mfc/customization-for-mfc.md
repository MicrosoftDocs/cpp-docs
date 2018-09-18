---
title: "Customization for MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["customizations, MFC Extensions"]
ms.assetid: 3b1b7532-8cc9-48dc-9bbe-7fd4060530b5
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Customization for MFC

This topic provides tips for customizing an MFC application.

## General Customizations

You can save and load the state of your application to the registry. When you enable this option, your application will load its initial state from the registry. If you change the initial docking layout for your application, you will have to clear the registry data for your application. Otherwise, the data in the registry will override any changes that you made to the initial layout.

## Class-Specific Customizations

Additional customization tips can be found in the following topics:

- [CBasePane Class](../mfc/reference/cbasepane-class.md)

- [CDockablePane Class](../mfc/reference/cdockablepane-class.md)

- [CDockingManager Class](../mfc/reference/cdockingmanager-class.md)

- [CMFCBaseTabCtrl Class](../mfc/reference/cmfcbasetabctrl-class.md)

## Additional Customization Tips

[Keyboard and Mouse Customization](../mfc/keyboard-and-mouse-customization.md)

[User-defined Tools](../mfc/user-defined-tools.md)

## See Also

[MFC Desktop Applications](../mfc/mfc-desktop-applications.md)<br/>
[Security Implications of Customization](../mfc/security-implications-of-customization.md)

