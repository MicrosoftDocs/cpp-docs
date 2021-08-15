---
description: "Learn more about: Creating a Rebar Control"
title: "Creating a Rebar Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["rebar controls [MFC], creating", "CReBarCtrl class [MFC], creating"]
ms.assetid: 0a012e08-772b-4f6a-af86-7cb651d11d3e
---
# Creating a Rebar Control

[CReBarCtrl](reference/crebarctrl-class.md) objects should be created before the parent object is visible. This minimizes the possibilities of painting problems.

For instance, rebar controls (used in frame window objects) are commonly used as parent windows for toolbar controls. Therefore, the parent of the rebar control is the frame window object. Because the frame window object is the parent, the `OnCreate` member function (of the parent) is an excellent place to create the rebar control.

To use a `CReBarCtrl` object, you will typically follow these steps:

### To use a CReBarCtrl object

1. Construct the [CReBarCtrl](reference/crebarctrl-class.md) object.

1. Call [Create](reference/crebarctrl-class.md#create) to create the Windows rebar common control and attach it to the `CReBarCtrl` object, specifying any desired styles.

1. Load a bitmap, with a call to [CBitmap::LoadBitmap](reference/cbitmap-class.md#loadbitmap), to be used as the background of the rebar control object.

1. Create and initialize any child window objects (toolbars, dialog controls, and so on) that will be contained by the rebar control object.

1. Initialize a **REBARBANDINFO** structure with the necessary information for the band about to be inserted.

1. Call [InsertBand](reference/crebarctrl-class.md#insertband) to insert existing child windows (such as `m_wndReToolBar`) into the new rebar control. For more information on inserting bands into an existing rebar control, see [Rebar Controls and Bands](rebar-controls-and-bands.md).

## See also

[Using CReBarCtrl](using-crebarctrl.md)<br/>
[Controls](controls-mfc.md)
