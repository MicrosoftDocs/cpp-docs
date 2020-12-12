---
description: "Learn more about: Automation Servers"
title: "Automation Servers"
ms.date: "11/04/2016"
helpviewer_keywords: ["Automation servers", "COM components, Automation servers", "dispatch maps [MFC], Automation servers", "servers, Automation"]
ms.assetid: 523fd155-51ce-4f91-b986-b74bdbdd7d92
---
# Automation Servers

Automation makes it possible for your application to manipulate objects implemented in another application, or to expose objects so they can be manipulated. An Automation server is an application that exposes programmable objects (called Automation objects) to other applications (called [Automation clients](automation-clients.md)). Automation servers are sometimes called Automation components.

Exposing Automation objects enables clients to automate certain procedures by directly accessing the objects and functionality the server makes available. Exposing objects this way is beneficial when applications provide functionality that is useful for other applications. For example, a word processor might expose its spell-checking functionality so that other programs can use it. Exposure of objects thus enables vendors to improve their applications' functionality by using the ready-made functionality of other applications.

These Automation objects have properties and methods as their external interface. Properties are named attributes of the Automation object. Properties are like the data members of a C++ class. Methods are functions that work on Automation objects. Methods are like the public member functions of a C++ class.

> [!NOTE]
> Although properties are like C++ data members, they are not directly accessible. To provide transparent access, set up an internal variable in the Automation object with a pair of get/set member functions to access them.

By exposing application functionality through a common, well-defined interface, Automation makes it possible to build applications in a single general programming language like Microsoft Visual Basic instead of in diverse, application-specific macro languages.

## <a name="_core_support_for_automation_servers"></a> Support for Automation Servers

Visual C++ and the MFC framework provide extensive support for Automation servers. They handle much of the overhead involved in making an Automation server, so you can focus your efforts on the functionality of your application.

The framework's principal mechanism for supporting Automation is the dispatch map, a set of macros that expands into the declarations and calls needed to expose methods and properties for OLE. A typical dispatch map looks like this:

[!code-cpp[NVC_MFCAutomation#1](codesnippet/cpp/automation-servers_1.cpp)]

The [Class Wizard](reference/mfc-class-wizard.md) and Class View assist in maintaining dispatch maps. When you add a new method or property to a class, Visual Studio adds a corresponding `DISP_FUNCTION` or `DISP_PROPERTY` macro with parameters indicating the class name, external and internal names of the method or property, and data types.

The **Add Class** dialog box also simplifies the declaration of Automation classes and the management of their properties and operations. When you use the Add Class dialog box to add a class to your project, you specify its base class. If the base class allows Automation, the Add Class dialog box displays controls you use to specify whether the new class should support Automation, whether it is "OLE creatable" (that is, whether objects of the class can be created on a request from a COM client), and the external name for the COM client to use.

The **Add Class** dialog box then creates a class declaration, including the appropriate macros for the OLE features you have specified. It also adds the skeleton code for implementation of your class's member functions.

The MFC Application Wizard simplifies the steps involved in getting your automation server application off the ground. If you select the **Automation** check box from the **Advanced Features** page, the MFC Application Wizard adds to your application's `InitInstance` function the calls required to register your Automation objects and run your application as an Automation server.

### What do you want to do

- [Learn about Automation clients](automation-clients.md)

- [Learn more about class CCmdTarget](reference/ccmdtarget-class.md)

- [Learn more about class COleDispatchDriver](reference/coledispatchdriver-class.md)

## See also

[Automation](automation.md)<br/>
[MFC Application Wizard](reference/mfc-application-wizard.md)
