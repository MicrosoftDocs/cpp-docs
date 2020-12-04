---
description: "Learn more about: OLE Background: Implementation Strategies"
title: "OLE Background: Implementation Strategies"
ms.date: "11/04/2016"
helpviewer_keywords: ["OLE [MFC], development strategy", "OLE applications [MFC], implementing OLE", "applications [OLE], implementing OLE"]
ms.assetid: 0875ddae-99df-488c-82c6-164074a81058
---
# OLE Background: Implementation Strategies

Depending on your application, there are four possible implementation strategies for adding OLE support:

- You are writing a new application.

   This situation usually requires the least work. You run the MFC Application Wizard and select either Advanced Features or Compound Document Support to create a skeleton application. For information on these options and what they do, see the article [Creating an MFC EXE Program](reference/mfc-application-wizard.md).

- You have a program written with the Microsoft Foundation Class Library version 2.0 or higher that does not support OLE.

   Create a new application with the MFC Application Wizard as previously mentioned, and then copy and paste the code from the new application into your existing application. This will work for servers, containers, or automated applications. See the MFC [SCRIBBLE](../overview/visual-cpp-samples.md) sample for an example of this strategy.

- You have a Microsoft Foundation Class Library program that implements OLE version 1.0 support.

   See [MFC Technical Note 41](tn041-mfc-ole1-migration-to-mfc-ole-2.md) for this conversion strategy.

- You have an application that was not written using the Microsoft Foundation Classes and that may or may not have implemented OLE support.

   This situation requires the most work. One approach is to create a new application, as in the first strategy, and then copy and paste your existing code into it. If your existing code is written in C, then you may need to modify it so it can compile as C++ code. If your C code calls the Windows API, then you do not have to change it to use the Microsoft Foundation classes. This approach likely will require some restructuring of your program to support the document/view architecture used by versions 2.0 and higher of the Microsoft Foundation Classes. For more information on this architecture, see [Technical Note 25](tn025-document-view-and-frame-creation.md).

Once you have decided on a strategy, you should either read the [Containers](containers.md) or [Servers](servers.md) articles (depending on the type of application you are writing) or examine the sample programs, or both. The MFC OLE samples [OCLIENT](../overview/visual-cpp-samples.md) and [HIERSVR](../overview/visual-cpp-samples.md) show how to implement the various aspects of containers and servers, respectively. At various points throughout these articles, you will be referred to certain functions in these samples as examples of the techniques being discussed.

## See also

[OLE Background](ole-background.md)<br/>
[Containers: Implementing a Container](containers-implementing-a-container.md)<br/>
[Servers: Implementing a Server](servers-implementing-a-server.md)<br/>
[MFC Application Wizard](reference/mfc-application-wizard.md)
