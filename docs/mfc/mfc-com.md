---
description: "Learn more about: MFC COM"
title: "MFC COM"
ms.date: "09/12/2018"
f1_keywords: ["MFC COM (MFC)"]
helpviewer_keywords: ["MFC, COM support", "MFC ActiveX controls [MFC], COM support in MFC", "MFC COM [MFC]", "ActiveX controls [MFC], COM object model", "Active technology [MFC]", "COM [MFC], MFC support"]
ms.assetid: 7646bdcb-3a06-4ed5-9386-9b00f3979dcb
---
# MFC COM

A subset of MFC is designed to support COM, while most of the Active Template Library (ATL) is designed for COM programming. This section of topics describes MFC's support for COM.

Active technologies (such as ActiveX controls, Active document containment, OLE, and so on) use the Component Object Model (COM) to enable software components to interact with one another in a networked environment, regardless of the language with which they were created. Active technologies can be used to create applications that run on the desktop or the Internet. For more information see [Introduction to COM](../atl/introduction-to-com.md) or [The Component Object Model](/windows/win32/com/the-component-object-model).

Active technologies include both client and server technologies, including the following:

- ActiveX controls are interactive objects that can be used in containers such as a Web site. For more information on ActiveX controls, see:

  - [MFC ActiveX Controls](mfc-activex-controls.md)

  - [ActiveX Controls on the Internet](activex-controls-on-the-internet.md)

  - [Overview: Internet](mfc-internet-programming-basics.md)

  - [Upgrade an Existing ActiveX Control to be Used on the Internet](upgrading-an-existing-activex-control.md)

  - [Debugging an ActiveX Control](/visualstudio/debugger/how-to-debug-an-activex-control)

- Active scripting controls the integrated behavior of one or more ActiveX controls from a browser or server. For more information on active scripting, see [Active Technology on the Internet](active-technology-on-the-internet.md).

- [Automation](automation.md) (formerly known as OLE Automation) makes it possible for one application to manipulate objects implemented in another application, or to "expose" objects so they can be manipulated.

   The automated object might be local or remote (on another machine accessible across a network). Automation is available for both OLE and COM objects.

- This section also provides information on how to write COM components using MFC, for example, in [Connection Points](connection-points.md).

For a discussion of what is still called OLE versus what is now called active technology, see the topics on [OLE](ole-in-mfc.md).

## In This Section

[Active Document Containment](active-document-containment.md)

[Automation](automation.md)

[Connection Points](connection-points.md)

[MFC ActiveX Controls](mfc-activex-controls.md)

## See also

[Concepts](mfc-concepts.md)
