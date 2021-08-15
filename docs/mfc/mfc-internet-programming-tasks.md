---
description: "Learn more about: MFC Internet Programming Tasks"
title: "MFC Internet Programming Tasks"
ms.date: "09/12/2018"
helpviewer_keywords: ["Internet applications [MFC], getting started", "Internet applications [MFC], first steps"]
ms.assetid: 6377e9b8-07c4-4380-b63b-05f5a9061313
---
# MFC Internet Programming Tasks

This section contains detailed steps for adding Internet support to your applications. Topics include how to use the MFC classes to Internet-enable your existing applications, and how to add Active document support to your existing COM component. Do you want to create a document with up-to-the-minute stock quotes, Pittsburgh's football scores, and the latest temperature in Antarctica Microsoft provides a number of technologies to help you do that over the Internet.

Active technologies include ActiveX controls (formerly OLE controls) and Active documents; WinInet for easily retrieving and saving files across the Internet; and asynchronous monikers for efficient data downloading. Visual C++ provides wizards to help you get started quickly with a starter application. For an introduction to these technologies, see [MFC Internet Programming Basics](mfc-internet-programming-basics.md) and [MFC COM](mfc-com.md).

Have you always wanted to FTP a file but haven't learned WinSock and network programming protocols WinInet classes encapsulate these protocols, providing you with a simple set of functions you can use to write a client application on the Internet to download files using HTTP, FTP, and gopher. You can use WinInet to search directories on your hard drive or around the world. You can transparently collect data of several different types, and present it to the user in an integrated interface.

Do you have large amounts of data to download Asynchronous monikers provide a COM (Component Object Model) solution for progressive rendering of large objects. WinInet can also be used asynchronously.

The following table describes a few of the things you can do with these technologies.

|You have|You want to|You should|
|--------------|-----------------|----------------|
|A Web server.|Track logons and detailed information about URL requests.|Write a filter, request notifications for logon events and URL mapping.|
|A Web browser.|Provide dynamic content.|Create ActiveX controls and Active documents.|
|A document-based application.|Add support to FTP a file.|Use WinInet or asynchronous monikers.|

See the following topics for details to get you started:

- [Application Design Choices](application-design-choices.md)

- [Writing MFC Applications](writing-mfc-applications.md)

- [ActiveX Controls on the Internet](activex-controls-on-the-internet.md)

- [Upgrading an Existing ActiveX Control](upgrading-an-existing-activex-control.md)

- [Asynchronous Monikers on the Internet](asynchronous-monikers-on-the-internet.md)

- [Testing Internet Applications](testing-internet-applications.md)

- [Internet Security](internet-security-cpp.md)

## See also

[MFC Internet Programming Basics](mfc-internet-programming-basics.md)<br/>
[Internet Information by Task](internet-information-by-task.md)
