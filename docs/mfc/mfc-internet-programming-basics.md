---
description: "Learn more about: MFC Internet Programming Basics"
title: "MFC Internet Programming Basics"
ms.date: "11/19/2018"
helpviewer_keywords: ["ISAPI extensions, programming with ISAPI", "Internet applications [MFC]", "ISAPI", "ActiveX controls [MFC], Internet", "programming [MFC], Internet", "Web applications [MFC], MFC classes", "ISAPI filters [MFC], programming with ISAPI", "Internet applications [MFC], ActiveX controls", "Internet applications [MFC], writing", "Internet applications [MFC], Active technology", "Active technology [MFC]", "Internet content [MFC]", "WinInet classes [MFC]"]
ms.assetid: 6df2dfd0-6e3f-4587-9d01-2a32f00f8a6f
---
# MFC Internet Programming Basics

Microsoft provides many APIs for programming both client and server applications. Many new applications are being written for the Internet, and as technologies, browser capabilities, and security options change, new types of applications will be written. Browsers run on client computers, providing access to the World Wide Web and displaying HTML pages that contain text, graphics, ActiveX controls, and documents. Servers provide FTP, HTTP, and gopher services, and run server extension applications using CGI. Your custom application can retrieve information and provide data on the Internet.

>[!IMPORTANT]
> ActiveX is a legacy technology that should not be used for new development. For more information, see [ActiveX Controls](activex-controls.md).

![Client and server applications](../mfc/media/vc38bq1.gif "Client and server applications")

MFC provides classes that support Internet programming. You can use [COleControl](reference/colecontrol-class.md) and [CDocObjectServer](reference/cdocobjectserver-class.md) and related MFC classes to write ActiveX controls and Active documents. You can use MFC classes such as [CInternetSession](reference/cinternetsession-class.md), [CFtpConnection](reference/cftpconnection-class.md), and [CAsyncMonikerFile](reference/casyncmonikerfile-class.md) to retrieve files and information using Internet protocols such as FTP, HTTP, and gopher.

## In This Section

- [Internet-Related MFC Classes](internet-related-mfc-classes.md)

- [Internet Information by Topic](internet-information-by-topic.md)

- [Internet Information by Task](internet-information-by-task.md)

- [Active Technology on the Internet](active-technology-on-the-internet.md)

- [WinInet Basics](wininet-basics.md)

- [HTML Basics](html-basics.md)

## Related Sections

- [ActiveX Controls on the Internet](activex-controls-on-the-internet.md)

- [Asynchronous Monikers on the Internet](asynchronous-monikers-on-the-internet.md)

- [Win32 Internet Extensions (WinInet)](win32-internet-extensions-wininet.md)

- [MFC Internet Programming Tasks](mfc-internet-programming-tasks.md)

- [Application Design Choices](application-design-choices.md)

- [Writing MFC Applications](writing-mfc-applications.md)

- [Testing Internet Applications](testing-internet-applications.md)

- [Internet Security](internet-security-cpp.md)

- [ATL Support for DHTML Controls](../atl/atl-support-for-dhtml-controls.md)

## <a name="_core_web_sites_for_more_information"></a> Websites for more information

For more information about Microsoft Internet technology, see [Networking and Internet](/windows/win32/networking).

The [World Wide Web Consortium (W3C)](https://go.microsoft.com/fwlink/p/?linkid=37125) publishes specifications for HTML, HTTP, CGI, and other World Wide Web technologies.

## <a name="_core_more_internet_help"></a> More internet help

The OLE section of the Windows SDK contains additional information about OLE programming. This information provides details about using the Win32 WinInet functions directly, rather than through the MFC classes. It also contains overview information about Internet technologies.
