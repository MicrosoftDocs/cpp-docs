---
description: "Learn more about: Application Design Choices"
title: "Application Design Choices"
ms.date: "09/12/2019"
helpviewer_keywords: ["design", "application design [MFC], design goals", "application design [MFC], Internet applications", "Internet applications [MFC], designing applications", "Internet [MFC], vs. intranets", "applications [MFC], Internet", "server applications [MFC], vs. client applications on Internet", "client applications [MFC], vs. server applications on Internet"]
ms.assetid: 9b96172c-b4d4-4c69-bfb2-226ce0de6d08
---
# Application Design Choices

This article discusses some of the design issues to consider when programming for the Internet.

Topics covered in this article include:

- [Intranet Versus Internet](#_core_intranet_versus_internet)

- [Client or Server Application](#_core_client_or_server_application)

- [The Web Page](#_core_the_web_page)

- [Browser or Stand-Alone Application](#_core_browser_or_standalone)

- [COM on the Internet](#_core_com_on_the_internet)

- [Client Data Download Services](#_core_client_data_download_services)

If you are ready to start writing your program now, see [Writing MFC Applications](writing-mfc-applications.md).

## <a name="_core_intranet_versus_internet"></a> Intranet Versus Internet

Many applications run on the Internet and are accessible to anyone with a browser and Internet access. Businesses are also implementing intranets, which are company-wide networks using TCP/IP protocols and Web browsers. Intranets offer an easily upgradeable, central source for company-wide information. They can be used for upgrading software, for delivering and tabulating surveys, for customer support, and for information delivery. The following table compares features of the Internet and intranets.

|Internet|Intranet|
|--------------|--------------|
|Low bandwidth|High bandwidth|
|Reduced security of data and systems|Controlled access to data and systems|
|Minimal control of content|High control of content|

## <a name="_core_client_or_server_application"></a> Client or Server Application

Your application may run on a client computer or on a server computer. Your application may also be stored on a server, and then downloaded across the Internet and run on a client computer. MFC WinInet classes are used for client applications to download files. MFC and asynchronous moniker classes are used to download files and control properties. Classes for ActiveX controls and Active documents are used for client applications and for applications that are downloaded from the server to run on a client.

## <a name="_core_the_web_page"></a> The Web Page: HTML, Active Documents, ActiveX Controls

Microsoft offers several ways of providing content on a Web page. Web pages can use standard HTML or HTML extensions, such as the object tag, to provide dynamic content such as ActiveX controls.

Web browsers typically display HTML pages. Active documents can also display your application's data in the simple point-and-click interface of a COM-enabled browser. Your Active document server can display your document, full frame in the entire client area, with its own menus and toolbars.

ActiveX controls you write can be downloaded asynchronously from the server and displayed on a Web page. You can use a scripting language such as VBScript to perform client-side validation before sending information to the server.

## <a name="_core_browser_or_standalone"></a> Browser or Stand-Alone Application

You can write ActiveX controls that are embedded in an HTML page and Active document servers that are viewed in a browser. You can write HTML pages that contain a button to submit a request to run your ISAPI application on a Web server. You can write a stand-alone application that uses Internet protocols to download files and display the information to your user, without ever using a browser application.

## <a name="_core_com_on_the_internet"></a> COM on the Internet

ActiveX controls, Active documents, and asynchronous monikers all use COM (Component Object Model) technologies.

ActiveX controls provide dynamic content to documents and pages on Internet sites. With COM, you can build ActiveX controls and full-frame documents using Active documents.

Asynchronous monikers provide features to enable a control to perform well in an Internet environment, including an incremental or progressive means to download data. Controls must also work well with other controls that may also be retrieving their data asynchronously at the same time.

## <a name="_core_client_data_download_services"></a> Client Data Download Services

Two sets of APIs that will help transfer data to your client are WinInet and asynchronous monikers. If you have large .gif and .avi files and ActiveX controls on your HTML page, you can increase the responsiveness to the user by downloading asynchronously, either by using asynchronous monikers or using WinInet asynchronously.

A common task on the Internet is transferring data. If you are already using Active technology (for example, if you have an ActiveX control), you can use asynchronous monikers to progressively render data as it downloads. You can use WinInet to transfer data using common Internet protocols like HTTP, FTP, and gopher. Both methods provide protocol independence, and provide an abstract layer to using WinSock and TCP/IP. You can still use [WinSock](windows-sockets-in-mfc.md) directly.

The following table summarizes several ways of using MFC to transfer data across the Internet.

|Use this protocol|Under these conditions|Using these classes|
|-----------------------|----------------------------|-------------------------|
|[Internet Downloading Using Asynchronous Monikers](asynchronous-monikers-on-the-internet.md)|For asynchronous transfer using COM, ActiveX controls, and any Internet protocol.|[CAsyncMonikerFile](reference/casyncmonikerfile-class.md), [CDataPathProperty](reference/cdatapathproperty-class.md)|
|[WinInet](win32-internet-extensions-wininet.md)|For Internet protocols for HTTP, FTP, and gopher. Data can be transferred synchronously or asynchronously and is stored in a system-wide cache.|[CInternetSession](reference/cinternetsession-class.md), [CFtpFileFind](reference/cftpfilefind-class.md), [CGopherFileFind](reference/cgopherfilefind-class.md), and many more.|
|[WinSock](windows-sockets-in-mfc.md)|For maximum efficiency and control. Requires understanding of sockets and TCP/IP protocols.|[CSocket](reference/csocket-class.md), [CAsyncSocket](reference/casyncsocket-class.md)|

## See also

[MFC Internet Programming Tasks](mfc-internet-programming-tasks.md)<br/>
[MFC Internet Programming Basics](mfc-internet-programming-basics.md)<br/>
[Win32 Internet Extensions (WinInet)](win32-internet-extensions-wininet.md)<br/>
[Asynchronous Monikers on the Internet](asynchronous-monikers-on-the-internet.md)
