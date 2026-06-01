---
description: "Learn more about: Customization for MFC"
title: "Customization for MFC"
ms.date: "11/04/2016"
helpviewer_keywords: ["customizations, MFC Extensions"]
---
# Customization for MFC

>[!NOTE]
> The Microsoft Foundation Classes (MFC) library continues to be supported. However, we're no longer adding features or updating the documentation.

This topic provides tips for customizing an MFC application.

## General Customizations

You can save and load the state of your application to the registry. When you enable this option, your application will load its initial state from the registry. If you change the initial docking layout for your application, you will have to clear the registry data for your application. Otherwise, the data in the registry will override any changes that you made to the initial layout.

## Class-Specific Customizations

Additional customization tips can be found in the following topics:

- [CBasePane Class](reference/cbasepane-class.md)

- [CDockablePane Class](reference/cdockablepane-class.md)

- [CDockingManager Class](reference/cdockingmanager-class.md)

- [CMFCBaseTabCtrl Class](reference/cmfcbasetabctrl-class.md)

## Additional Customization Tips

[Keyboard and Mouse Customization](keyboard-and-mouse-customization.md)

[User-defined Tools](user-defined-tools.md)

## See also

[MFC Desktop Applications](mfc-desktop-applications.md)<br/>
[Security Implications of Customization](security-implications-of-customization.md)
