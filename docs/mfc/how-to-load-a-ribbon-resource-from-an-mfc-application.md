---
description: "Learn more about: How to: Load a Ribbon Resource from an MFC Application"
title: "How to: Load a Ribbon Resource from an MFC Application"
ms.date: "11/04/2016"
helpviewer_keywords: ["ribbon resource [MFC], loading"]
---
# How to: Load a Ribbon Resource from an MFC Application

>[!NOTE]
> The Microsoft Foundation Classes (MFC) library continues to be supported. However, we're no longer adding features or updating the documentation.

To use the ribbon resource in your application, modify the application to load the ribbon resource.

### To load a ribbon resource

1. Declare the `Ribbon Control` object in the `CMainFrame` class.

```
    CMFCRibbonBar m_wndRibbonBar;
```

1. In `CMainFrame::OnCreate`, create and initialize the Ribbon Control.

```
    if (!m_wndRibbonBar.Create (this))
{
    return -1;
}

    if (!m_wndRibbonBar.LoadFromResource(IDR_RIBBON))
{
    return -1;
}
```

## See also

[Ribbon Designer (MFC)](ribbon-designer-mfc.md)
