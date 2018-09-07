---
title: "Asynchronous Monikers on the Internet | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["ActiveX controls [MFC], asynchronous", "MFC, asynchronous monikers", "asynchronous monikers [MFC]", "Web applications [MFC], asynchronous", "downloading Internet resources and asynchronous monikers", "optimization [MFC], asynchronous downloading across Internet", "Internet [MFC], asynchronous downloading"]
ms.assetid: 418b0c64-0046-4dae-8118-c9c762b5822e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Asynchronous Monikers on the Internet
The Internet requires new approaches to application design because of its slow network access. Applications should perform network access asynchronously to avoid stalling the user interface. The MFC class [CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md) provides asynchronous support for downloading files.  
  
 With asynchronous monikers, you can extend your COM application to download asynchronously across the Internet and to provide progressive rendering of large objects such as bitmaps and VRML objects. Asynchronous monikers enable an ActiveX control property or a file on the Internet to be downloaded without blocking the response of the user interface.  
  
## Advantages of Asynchronous Monikers  
 You can use asynchronous monikers to:  
  
-   Download code and files without blocking.  
  
-   Download properties in ActiveX controls without blocking.  
  
-   Receive notifications of downloading progress.  
  
-   Track progress and ready state information.  
  
-   Provide status information to the user about progress.  
  
-   Allow the user to cancel a download at any time.  
  
## MFC Classes for Asynchronous Monikers  
 [CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md) is derived from [CMonikerFile](../mfc/reference/cmonikerfile-class.md), which in turn is derived from [COleStreamFile](../mfc/reference/colestreamfile-class.md). A `COleStreamFile` object represents a stream of data; a `CMonikerFile` object uses an `IMoniker` to obtain the data, and a `CAsyncMonikerFile` object does so asynchronously.  
  
 Asynchronous monikers are used primarily in Internet-enabled applications and ActiveX controls to provide a responsive user interface during file transfers. A prime example of this is the use of [CDataPathProperty](../mfc/reference/cdatapathproperty-class.md) to provide asynchronous properties for ActiveX controls.  
  
## MFC Classes for Data Paths in ActiveX Controls  
 The MFC classes `CDataPathProperty` and [CCachedDataPathProperty](../mfc/reference/ccacheddatapathproperty-class.md) implement ActiveX control properties that can be loaded asynchronously. Asynchronous properties are loaded after synchronous initiation. Asynchronous ActiveX controls repeatedly invoke a callback to indicate availability of new data during a lengthy property exchange process.  
  
 `CDataPathProperty` is derived from `CAsyncMonikerFile`. `CCachedDataPathProperty` is derived from `CDataPathProperty`. To implement asynchronous properties in your ActiveX controls, derive a class from `CDataPathProperty` or `CCachedDataPathProperty`, and override [OnDataAvailable](../mfc/reference/casyncmonikerfile-class.md#ondataavailable) and other notifications you wish to receive.  
  
#### To download a file using asynchronous monikers  
  
1.  Declare a class derived from [CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md).  
  
2.  Override [OnDataAvailable](../mfc/reference/casyncmonikerfile-class.md#ondataavailable) to display the data.  
  
3.  Override other member functions, including [OnProgress](../mfc/reference/casyncmonikerfile-class.md#onprogress), [OnStartBinding](../mfc/reference/casyncmonikerfile-class.md#onstartbinding), and [OnStopBinding](../mfc/reference/casyncmonikerfile-class.md#onstopbinding).  
  
4.  Declare an instance of this class and use it to open URLs.  
  
 For information about downloading asynchronously in an ActiveX control, see [ActiveX Controls on the Internet](../mfc/activex-controls-on-the-internet.md).  
  
## See Also  
 [MFC Internet Programming Tasks](../mfc/mfc-internet-programming-tasks.md)   
 [MFC Internet Programming Basics](../mfc/mfc-internet-programming-basics.md)

