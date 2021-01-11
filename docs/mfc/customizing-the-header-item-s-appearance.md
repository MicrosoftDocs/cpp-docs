---
description: "Learn more about: Customizing the Header Item&#39;s Appearance"
title: "Customizing the Header Item&#39;s Appearance"
ms.date: "11/04/2016"
helpviewer_keywords: ["header controls [MFC], customization of items", "CHeaderCtrl class [MFC], customizing the items", "HDS_ styles"]
ms.assetid: b1e1e326-ec7d-4dbd-a46f-96a3e2055618
---
# Customizing the Header Item&#39;s Appearance

By setting the *dwStyle* parameter when you first create a header control ([CHeaderCtrl::Create](reference/cheaderctrl-class.md#create)), you can define the appearance and behavior of header items or of the header control itself.

Here is a sampling of the styles you can set, and their purpose:

- To make a header item look like a pushbutton, use the **HDS_BUTTONS** style.

   Use this style if you want to carry out actions in response to mouse clicks on a header item, such as sorting data by a particular column, as is done in Microsoft Outlook.

- To give the header items a "hot tracking" appearance when the mouse cursor passes over them, use the **HDS_HOTTRACK** style.

   Hot tracking displays a 3D outline as the pointer passes over an item in an otherwise flat bar.

- To indicate that the header control should be hidden, use the **HDS_HIDDEN** style.

   The **HDS_HIDDEN** style indicates that the header control is intended to be used as a data container and not a visual control. This style does not automatically hide the control but, instead, affects the behavior of `CHeaderCtrl::Layout`. The value returned in the *cy* member of the `WINDOWPOS` structure will be zero indicating that the control should not be visible to the user.

For more information about these properties, see [Items](/windows/win32/Controls/header-controls) in the Windows SDK. For information about adding items to a header control, see [Adding Items to the Header Control](adding-items-to-the-header-control.md).

## See also

[Using CHeaderCtrl](using-cheaderctrl.md)<br/>
[Controls](controls-mfc.md)
