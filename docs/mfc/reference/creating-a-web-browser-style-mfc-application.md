---
title: "Creating a Web Browser-Style MFC Application | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.mfcweb.project"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC, Web applications"
  - "Web browsers, creating from MFC architecture"
  - "Web browsers"
  - "Web applications, creating"
ms.assetid: 257f8c03-33c3-428c-832e-0b70aff6168d
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Creating a Web Browser-Style MFC Application
A Web browser–style application can access information from the Internet (such as HTML or active documents) or an intranet, as well as folders in the local file system and on a network. By deriving the application's view class from [CHtmlView](../../mfc/reference/chtmlview-class.md), effectively you make the application a Web browser by providing the view with the WebBrowser control.  
  
### To create a Web browser application based on the MFC document/view architecture  
  
1.  Follow the directions in [Creating an MFC Application](../../mfc/reference/creating-an-mfc-application.md).  
  
2.  In the MFC Application Wizard [Application Type](../../mfc/reference/application-type-mfc-application-wizard.md) page, make certain that the **Document/view architecture** box is selected. (You can choose either **Single document** or **Multiple documents**, but not **Dialog based**.)  
  
3.  On the [Review Generated Classes](../../mfc/reference/generated-classes-mfc-application-wizard.md) page, use the **Base class** drop-down menu to select `CHtmlView`.  
  
4.  Select any other options you want built into the skeleton application.  
  
5.  Click **Finish**.  
  
 The WebBrowser control supports Web browsing through hyperlinks and Uniform Resource Locator (URL) navigation. The control maintains a history list that allows the user to browse forward and backward through previously browsed sites, folders, and documents. The control directly handles the navigation, hyperlinks, history lists, favorites, and security. Applications can use the WebBrowser control as an active document container to host active documents as well. Thus, richly formatted documents such as Microsoft Excel spreadsheets or Word documents can be opened and edited in place from within the WebBrowser control. The WebBrowser control is also an ActiveX control container that can host any ActiveX control.  
  
> [!NOTE]
>  The WebBrowser ActiveX control (and therefore `CHtmlView`) is available only to applications running under Windows versions in which Internet Explorer 4.0 or later has been installed.  
  
 Because `CHtmlView` simply implements the Microsoft Web browser control, its support for printing is not like other [CView](../../mfc/reference/cview-class.md)-derived classes. Rather, the WebBrowser control implements the printer user interface and printing. As a result, `CHtmlView` does not support print preview, and the framework does not provide for other printing support functions: for example, [CView::OnPreparePrinting](../../mfc/reference/cview-class.md#cview__onprepareprinting), [CView::OnBeginPrinting](../../mfc/reference/cview-class.md#cview__onbeginprinting), and [CView::OnEndPrinting](../../mfc/reference/cview-class.md#cview__onendprinting), which are available in other MFC applications.  
  
 `CHtmlView` acts as a wrapper for the Web browser control, which gives your application a view onto a Web or an HTML page. The wizard creates an override to the [OnInitialUpdate](../../mfc/reference/cview-class.md#cview__oninitialupdate) function in the view class, providing a navigational link to the Microsoft Visual C++ Web site:  
  
```  
void CWebView::OnInitialUpdate()  
{  
    CHtmlView::OnInitialUpdate();

 *// TODO: This code navigates to a popular spot on the web. *//  change the code to go where you'd like.  
    Navigate2(_T("http://www.msdn.microsoft.com/vstudio/"),
    NULL,
    NULL);

} 
```  
  
 You can replace this site with one of your own, or you can use the [LoadFromResource](../../mfc/reference/chtmlview-class.md#chtmlview__loadfromresource) member function to open an HTML page that resides in the project's resource script as the default content for the view. For example:  
  
```  
void CWebView::OnInitialUpdate()  
{  
    CHtmlView::OnInitialUpdate();

 *// TODO: This code navigates to a popular spot on the web. *//  change the code to go where you'd like.  
    LoadFromResource(IDR_HTML1);

} 
```  
  
## See Also  
 [MFC Sample MFCIE](http://msdn.microsoft.com/en-us/7391aa0c-fca8-4994-a6c9-6c5c7470fba0)   
 [MFC Application Wizard](../../mfc/reference/mfc-application-wizard.md)   
 [Working with Project Properties](../../ide/working-with-project-properties.md)   
 [Property Pages](../../ide/property-pages-visual-cpp.md)   
 [Working with Project Properties](../../ide/working-with-project-properties.md)   
 [Deploying Applications](http://msdn.microsoft.com/en-us/4ff8881d-0daf-47e7-bfe7-774c625031b4)

