---
description: "Learn more about: MFC ActiveX Controls: Using Stock Property Pages"
title: "MFC ActiveX Controls: Using Stock Property Pages"
ms.date: "09/12/2018"
f1_keywords: ["CLSID_CPicturePropPage", "CLSID_CColorPropPage", "CLSID_CFontPropPage"]
helpviewer_keywords: ["picture stock property pages [MFC]", "CLSID_CFontPropPage [MFC]", "color stock property pages [MFC]", "CLSID_CColorPropPage [MFC]", "fonts [MFC], ActiveX controls", "stock properties [MFC], stock property pages", "CLSID_CPicturePropPage [MFC]", "MFC ActiveX controls [MFC], property pages"]
ms.assetid: 22638d86-ff3e-4124-933e-54b7c2a25968
---
# MFC ActiveX Controls: Using Stock Property Pages

This article discusses the stock property pages available for ActiveX controls and how to use them.

>[!IMPORTANT]
> ActiveX is a legacy technology that should not be used for new development. For more information about modern technologies that supersede ActiveX, see [ActiveX Controls](activex-controls.md).

For more information on using property pages in an ActiveX control, see the following articles:

- [MFC ActiveX Controls: Property Pages](mfc-activex-controls-property-pages.md)

- [MFC ActiveX Controls: Adding Another Custom Property Page](mfc-activex-controls-adding-another-custom-property-page.md)

MFC provides three stock property pages for use with ActiveX controls: `CLSID_CColorPropPage`, `CLSID_CFontPropPage`, and `CLSID_CPicturePropPage`. These pages display a user interface for stock color, font, and picture properties, respectively.

To incorporate these property pages into a control, add their IDs to the code that initializes the control's array of property page IDs. In the following example, this code, located in the control implementation file (.CPP), initializes the array to contain all three stock property pages and the default property page (named `CMyPropPage` in this example):

[!code-cpp[NVC_MFC_AxOpt#21](codesnippet/cpp/mfc-activex-controls-using-stock-property-pages_1.cpp)]

Note that the count of property pages, in the BEGIN_PROPPAGEIDS macro, is 4. This represents the number of property pages supported by the ActiveX control.

After these modifications have been made, rebuild your project. Your control now has property pages for the font, picture, and color properties.

> [!NOTE]
> If the control stock property pages cannot be accessed, it may be because the MFC DLL (MFCxx.DLL) has not been properly registered with the current operating system. This usually results from installing Visual C++ under an operating system different from the one currently running.

> [!TIP]
> If your stock property pages are not visible (see previous Note), register the DLL by running RegSvr32.exe from the command line with the full path name to the DLL.

## See also

[MFC ActiveX Controls](mfc-activex-controls.md)<br/>
[MFC ActiveX Controls: Adding Stock Properties](mfc-activex-controls-adding-stock-properties.md)
