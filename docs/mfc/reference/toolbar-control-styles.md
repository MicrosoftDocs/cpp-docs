---
description: "Learn more about: ToolBar Control Styles"
title: "ToolBar Control Styles"
ms.date: "11/04/2016"
helpviewer_keywords: ["ToolBar control styles [MFC]"]
ms.assetid: 0f717eb9-fa32-4263-b852-809238863feb
---
# ToolBar Control Styles

[CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md) has a set of style flags that determine the appearance and behavior of the button. You can set a combination of these flags by calling [CMFCToolBarButton::SetStyle](../../mfc/reference/cmfctoolbarbutton-class.md#setstyle). This topic lists the style flag values and their meanings.

## Property Values

The following values determine the type of button that the control represents:

|Name|Description|
|-|-|
|TBBS_BUTTON|Standard pushbutton (default).  |
|TBBS_CHECKBOX|Check box.  |
|TBBS_CHECKGROUP|The start of a group of checkboxes.  |
|TBBS_GROUP|The start of a group of buttons.  |
|TBBS_SEPARATOR|Separator.  |

The following values represent the current status of the control:

|Name|Description|
|-|-|
|TBBS_CHECKED|Check box is checked.  |
|TBBS_DISABLED|Control is disabled.  |
|TBBS_INDETERMINATE|Check box is in an indeterminate state.  |
|TBBS_PRESSED|Button is pressed.  |

The following value changes the layout of the button in the toolbar:

|Name|Description|
|-|-|
|TBBS_BREAK|Places the item on a new line or in a new column without separating columns.  |

## Remarks

The current style is stored in [CMFCToolBarButton::m_nStyle](../../mfc/reference/cmfctoolbarbutton-class.md#m_nstyle). Do not set a new value in                 `m_nStyle` directly, because some derived classes perform additional processing when you call `SetStyles`.

The visual manager determines the appearance of buttons in each state. See [Visualization Manager](../../mfc/visualization-manager.md) for more information.

## Requirements

**Header:** afxtoolbarbutton.h

## See also

[Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)<br/>
[CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md)<br/>
[Visualization Manager](../../mfc/visualization-manager.md)
