---
description: "Learn more about: How to: Convert an Existing MFC Ribbon to a Ribbon Resource"
title: "How to: Convert an Existing MFC Ribbon to a Ribbon Resource"
ms.date: "11/04/2016"
helpviewer_keywords: ["ribbon resource, converting from an MFC ribbon", "MFC ribbon, converting to a ribbon resource"]
ms.assetid: 324b7ff6-58f9-4691-96a9-9836a79d0fb6
---
# How to: Convert an Existing MFC Ribbon to a Ribbon Resource

Ribbon resources are easier to visualize, modify, and maintain than manually coded ribbons. This topic describes how to convert a manually coded ribbon in an MFC Project into a ribbon resource.

You must have an existing MFC project that has code that uses the MFC ribbon classes, for example, [CMFCRibbonBar Class](reference/cmfcribbonbar-class.md).

### To convert an MFC ribbon to a ribbon resource

1. In Visual Studio, in an existing MFC project, open the source file where the `CMFCRibbonBar` object is initialized. Typically, the file is mainfrm.cpp. Add the following code after the initialization code for the ribbon.

```
    m_wndRibbonBar.SaveToXMLFile("RibbonOutput.xml");
```

   Save and close the file.

1. Build and run the MFC application, and then in Notepad, open RibbonOutput.txt and copy its contents.

1. In Visual Studio, on the **Project** menu, click **Add Resource**. In the **Add Resource** dialog box, select **Ribbon** and then click **New**.

   Visual Studio creates a ribbon resource and opens it in design view. The ribbon resource ID is IDR_RIBBON1, which is displayed in **Resource View**. The ribbon is defined in the ribbon1.mfcribbon-ms XML file.

1. In Visual Studio, open ribbon1.mfcribbon-ms, delete its contents, and then paste the contents of RibbonOutput.txt, which you copied earlier. Save and close ribbon1.mfcribbon-ms.

1. Again open the source file where the CMFCRibbonBar object is initialized (typically, mainfrm.cpp) and comment out the existing ribbon code. Add the following code after the code that you commented out.

```
    m_wndRibbonBar.LoadFromResource(IDR_RIBBON1);
```

1. Build the project and run the program.

## See also

[Ribbon Designer (MFC)](ribbon-designer-mfc.md)
