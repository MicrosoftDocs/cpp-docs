---
title: "MFC Internet Programming Basics | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["ISAPI extensions, programming with ISAPI", "Internet applications [MFC]", "ISAPI", "ActiveX controls [MFC], Internet", "programming [MFC], Internet", "Web applications [MFC], MFC classes", "ISAPI filters [MFC], programming with ISAPI", "Internet applications [MFC], ActiveX controls", "Internet applications [MFC], writing", "Internet applications [MFC], Active technology", "Active technology [MFC]", "Internet content [MFC]", "WinInet classes [MFC]"]
ms.assetid: 6df2dfd0-6e3f-4587-9d01-2a32f00f8a6f
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# MFC Internet Programming Basics
Microsoft provides many APIs for programming both client and server applications. Many new applications are being written for the Internet, and as technologies, browser capabilities, and security options change, new types of applications will be written. Browsers run on client computers, providing access to the World Wide Web and displaying HTML pages that contain text, graphics, ActiveX controls, and documents. Servers provide FTP, HTTP, and gopher services, and run server extension applications using CGI. Your custom application can retrieve information and provide data on the Internet.  
  
 ![Client and server applications](../mfc/media/vc38bq1.gif "vc38bq1")  
  
 MFC provides classes that support Internet programming. You can use [COleControl](../mfc/reference/colecontrol-class.md) and [CDocObjectServer](../mfc/reference/cdocobjectserver-class.md) and related MFC classes to write ActiveX controls and Active documents. You can use MFC classes such as [CInternetSession](../mfc/reference/cinternetsession-class.md), [CFtpConnection](../mfc/reference/cftpconnection-class.md), and [CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md) to retrieve files and information using Internet protocols such as FTP, HTTP, and gopher.  
  
## In This Section  
  
-   [Internet-Related MFC Classes](../mfc/internet-related-mfc-classes.md)  
  
-   [Internet Information by Topic](../mfc/internet-information-by-topic.md)  
  
-   [Internet Information by Task](../mfc/internet-information-by-task.md)  
  
-   [Active Technology on the Internet](../mfc/active-technology-on-the-internet.md)  
  
-   [WinInet Basics](../mfc/wininet-basics.md)  
  
-   [HTML Basics](../mfc/html-basics.md)  
  
-   [HTTP Basics](../mfc/http-basics.md)  
  
## Related Sections  
  
-   [ActiveX Controls on the Internet](../mfc/activex-controls-on-the-internet.md)  
  
-   [Active Documents on the Internet](../mfc/active-documents-on-the-internet.md)  
  
-   [Asynchronous Monikers on the Internet](../mfc/asynchronous-monikers-on-the-internet.md)  
  
-   [Win32 Internet Extensions (WinInet)](../mfc/win32-internet-extensions-wininet.md)  
  
-   [MFC Internet Programming Tasks](../mfc/mfc-internet-programming-tasks.md)  
  
-   [Application Design Choices](../mfc/application-design-choices.md)  
  
-   [Writing MFC Applications](../mfc/writing-mfc-applications.md)  
  
-   [Testing Internet Applications](../mfc/testing-internet-applications.md)  
  
-   [Internet Security](../mfc/internet-security-cpp.md)  
  
-   [ATL Support for DHTML Controls](../atl/atl-support-for-dhtml-controls.md)  
  
##  <a name="_core_web_sites_for_more_information"></a> Web Sites for More Information  
 For additional information about Microsoft Internet technology, see the [Microsoft Developer Network (MSDN)](http://go.microsoft.com/fwlink/p/?linkid=56322) Web site. (Links may change without notice.)  
  
 This Web site for developers contains information on using Microsoft development tools and technologies, and top stories about recent and upcoming conferences. From this page, you can jump to many related developer sites, including the .NET, and XML Developer Centers. You can also download beta SDKs and samples.  
  
 The [World Wide Web Consortium (W3C)](http://go.microsoft.com/fwlink/p/?linkid=37125) publishes specifications for HTML, HTTP, CGI, and other World Wide Web technologies.  
  
##  <a name="_core_more_internet_help"></a> More Internet Help  
 The OLE section of the Windows SDK contains additional information about OLE programming. This information provides details about using the Win32 WinInet functions directly, rather than through the MFC classes. It also contains overview information about Internet technologies.  
  
## See Also  



