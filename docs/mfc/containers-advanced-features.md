---
description: "Learn more about: Containers: Advanced Features"
title: "Containers: Advanced Features"
ms.date: "11/04/2016"
helpviewer_keywords: ["links [MFC], to embedded OLE objects", "containers [MFC], links to embedded OLE objects", "containers [MFC], advanced features", "container/server applications [MFC]", "embedded objects [MFC]", "OLE controls [MFC], containers", "OLE containers [MFC], advanced features", "server/container applications [MFC]", "containers [MFC], container applications"]
ms.assetid: 221fd99c-b138-40fa-ad6a-974e3b3ad1f8
---
# Containers: Advanced Features

This article describes the steps necessary to incorporate optional advanced features into existing container applications. These features are:

- [An application that is both a container and a server](#_core_creating_a_container_server_application)

- [An OLE link to an embedded object](#_core_links_to_embedded_objects)

## <a name="_core_creating_a_container_server_application"></a> Creating a Container/Server Application

A container/server application is an application that acts as both a container and a server. Microsoft Word for Windows is an example of this. You can embed Word for Windows documents in other applications, and you can also embed items in Word for Windows documents. The process for modifying your container application to be both a container and a full server (you cannot create a combination container/miniserver application) is similar to the process for creating a full server.

The article [Servers: Implementing a Server](servers-implementing-a-server.md) lists a number of tasks required to implement a server application. If you convert a container application to a container/server application, then you need to perform some of those same tasks, adding code to the container. The following lists the important things to consider:

- The container code created by the application wizard already initializes the OLE subsystem. You will not need to change or add anything for that support.

- Wherever the base class of a document class is `COleDocument`, change the base class to `COleServerDoc`.

- Override `COleClientItem::CanActivate` to avoid editing items in place while the server itself is being used to edit in place.

   For example, the MFC OLE sample [OCLIENT](../overview/visual-cpp-samples.md) has embedded an item created by your container/server application. You open the OCLIENT application and in-place edit the item created by your container/server application. While editing your application's item, you decide you want to embed an item created by the MFC OLE sample [HIERSVR](../overview/visual-cpp-samples.md). To do this, you cannot use in-place activation. You must fully open HIERSVR to activate this item. Because the Microsoft Foundation Class Library does not support this OLE feature, overriding `COleClientItem::CanActivate` allows you to check for this situation and prevent a possible run-time error in your application.

If you are creating a new application and want it to function as a container/server application, choose that option in the OLE Options dialog box in the application wizard and this support will be created automatically. For more information, see the article [Overview: Creating an ActiveX Control Container](reference/creating-an-mfc-activex-control-container.md). For information about MFC samples, see [MFC Samples](../overview/visual-cpp-samples.md#mfc-samples).

Note that you cannot insert an MDI application into itself. An application that is a container/server cannot be inserted into itself unless it is an SDI application.

## <a name="_core_links_to_embedded_objects"></a> Links to Embedded Objects

The Links to Embedded Objects feature enables a user to create a document with an OLE link to an embedded object inside your container application. For example, create a document in a word processor containing an embedded spreadsheet. If your application supports links to embedded objects, it could paste a link to the spreadsheet contained in the word processor's document. This feature allows your application to use the information contained in the spreadsheet without knowing where the word processor originally got it.

#### To link to embedded objects in your application

1. Derive your document class from `COleLinkingDoc` instead of `COleDocument`.

1. Create an OLE class ID (**CLSID**) for your application by using the Class ID Generator included with the OLE Development Tools.

1. Register the application with OLE.

1. Create a `COleTemplateServer` object as a member of your application class.

1. In your application class's `InitInstance` member function, do the following:

   - Connect your `COleTemplateServer` object to your document templates by calling the object's `ConnectTemplate` member function.

   - Call the `COleTemplateServer::RegisterAll` member function to register all class objects with the OLE system.

   - Call `COleTemplateServer::UpdateRegistry`. The only parameter to `UpdateRegistry` should be *OAT_CONTAINER* if the application is not launched with the "/Embedded" switch. This registers the application as a container that can support links to embedded objects.

      If the application is launched with the "/Embedded" switch, it should not show its main window, similar to a server application.

The MFC OLE sample [OCLIENT](../overview/visual-cpp-samples.md) implements this feature. For an example of how this is done, see the `InitInstance` function in the *OCLIENT.CPP* file of this sample application.

## See also

[Containers](containers.md)<br/>
[Servers](servers.md)
