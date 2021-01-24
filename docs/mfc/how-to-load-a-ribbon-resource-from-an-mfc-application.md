---
description: "Learn more about: How to: Load a Ribbon Resource from an MFC Application"
title: "How to: Load a Ribbon Resource from an MFC Application"
ms.date: "11/04/2016"
helpviewer_keywords: ["ribbon resource [MFC], loading"]
ms.assetid: 1c76bb8f-6345-414a-9f3f-128815ceadc5
---
# How to: Load a Ribbon Resource from an MFC Application

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
