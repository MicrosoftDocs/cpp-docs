---
description: "Learn more about: Creating a Web Browser-Style MFC Application"
title: "Creating a Web Browser-Style MFC Application"
ms.date: "06/25/2018"
f1_keywords: ["vc.appwiz.mfcweb.project"]
helpviewer_keywords: ["MFC, Web applications", "Web browsers, creating from MFC architecture", "Web browsers", "Web applications [MFC], creating"]
ms.assetid: 257f8c03-33c3-428c-832e-0b70aff6168d
---
# Creating a Web Browser-Style MFC Application

A Web browser-style application can access information from the Internet (such as HTML or active documents) or an intranet, as well as folders in the local file system and on a network. By deriving the application's view class from [CHtmlView](../../mfc/reference/chtmlview-class.md), effectively you make the application a Web browser by providing the view with the WebBrowser control.

## To create a Web browser application based on the MFC document/view architecture

1. Follow the directions in [Creating an MFC Application](../../mfc/reference/creating-an-mfc-application.md).

1. In the MFC Application Wizard [Application Type](../../mfc/reference/application-type-mfc-application-wizard.md) page, make certain that the **Document/view architecture** box is selected. (You can choose either **Single document** or **Multiple documents**, but not **Dialog based**.)

1. On the [Review Generated Classes](../../mfc/reference/generated-classes-mfc-application-wizard.md) page, use the **Base class** drop-down menu to select `CHtmlView`.

1. Select any other options you want built into the skeleton application.

1. Click **Finish**.

The WebBrowser control supports Web browsing through hyperlinks and Uniform Resource Locator (URL) navigation. The control maintains a history list that allows the user to browse forward and backward through previously browsed sites, folders, and documents. The control directly handles the navigation, hyperlinks, history lists, favorites, and security. Applications can use the WebBrowser control as an active document container to host active documents as well. Thus, richly formatted documents such as Microsoft Excel spreadsheets or Word documents can be opened and edited in place from within the WebBrowser control. The WebBrowser control is also an ActiveX control container that can host any ActiveX control.

> [!NOTE]
> The WebBrowser ActiveX control (and therefore `CHtmlView`) is available only to applications running under Windows versions in which Internet Explorer 4.0 or later has been installed.

Because `CHtmlView` simply implements the Microsoft Web browser control, its support for printing is not like other [CView](../../mfc/reference/cview-class.md)-derived classes. Rather, the WebBrowser control implements the printer user interface and printing. As a result, `CHtmlView` does not support print preview, and the framework does not provide for other printing support functions: for example, [CView::OnPreparePrinting](../../mfc/reference/cview-class.md#onprepareprinting), [CView::OnBeginPrinting](../../mfc/reference/cview-class.md#onbeginprinting), and [CView::OnEndPrinting](../../mfc/reference/cview-class.md#onendprinting), which are available in other MFC applications.

`CHtmlView` acts as a wrapper for the Web browser control, which gives your application a view onto a Web or an HTML page. The wizard creates an override to the [OnInitialUpdate](../../mfc/reference/cview-class.md#oninitialupdate) function in the view class, providing a navigational link to the Microsoft Visual C++ Web site:

```cpp
void CWebView::OnInitialUpdate()
{
    CHtmlView::OnInitialUpdate();

    // TODO: This code navigates to a popular spot on the web.
    // Change the code to go where you'd like.
    Navigate2(_T("http://www.docs.microsoft.com/"),
        NULL,
        NULL);
}
```

You can replace this site with one of your own, or you can use the [LoadFromResource](../../mfc/reference/chtmlview-class.md#loadfromresource) member function to open an HTML page that resides in the project's resource script as the default content for the view. For example:

```cpp
void CWebView::OnInitialUpdate()
{
    CHtmlView::OnInitialUpdate();

    // TODO: This code navigates to a popular spot on the web.
    // Change the code to go where you'd like.
    LoadFromResource(IDR_HTML1);
}
```

## See also

[MFC Sample MFCIE](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/internet)<br/>
[MFC Application Wizard](../../mfc/reference/mfc-application-wizard.md)<br/>
[Set compiler and build properties](../../build/working-with-project-properties.md)<br/>
[Property Pages](../../build/reference/property-pages-visual-cpp.md)<br/>
[Set compiler and build properties](../../build/working-with-project-properties.md)
