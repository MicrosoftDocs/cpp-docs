---
description: "Learn more about: TOOLTIPTEXT Structure"
title: "TOOLTIPTEXT Structure"
ms.date: "11/04/2016"
f1_keywords: ["TOOLTIPTEXT"]
helpviewer_keywords: ["TOOLTIPTEXT structure [MFC]", "tool tips [MFC], notifications"]
ms.assetid: 547591bf-80f5-400e-a2a7-0708cfffbb5d
---
# TOOLTIPTEXT Structure

In writing your [tool tip notification handler](../mfc/handling-ttn-needtext-notification-for-tool-tips.md), you need to use the **TOOLTIPTEXT** structure. The members of the **TOOLTIPTEXT** structure are:

```cpp
typedef struct {
    NMHDR     hdr;        // required for all WM_NOTIFY messages
    LPTSTR    lpszText;   // see below
    TCHAR     szText[80]; // buffer for tool tip text
    HINSTANCE hinst;      // see below
    UINT      uflags;     // flag indicating how to interpret the
                          // idFrom member of the NMHDR structure
                          // that is included in the structure
} TOOLTIPTEXT, FAR *LPTOOLTIPTEXT;
```

*hdr*<br/>
Identifies the tool that needs text. The only member of this structure you might need is the control's command ID. The control's command ID will be in the *idFrom* member of the **NMHDR** structure, accessed with the syntax `hdr.idFrom`. See [NMHDR](/windows/win32/api/richedit/ns-richedit-nmhdr) for a discussion of members of the **NMHDR** structure.

*lpszText*<br/>
Address of a string to receive the text for a tool.

*szText*<br/>
Buffer that receives the tool tip text. An application can copy the text to this buffer as an alternative to specifying a string address.

*hinst*<br/>
Handle of the instance that contains a string to be used as the tool tip text. If *lpszText* is the address of the tool tip text, this member is NULL.

When you handle the `TTN_NEEDTEXT` notification message, specify the string to be displayed in one of the following ways:

- Copy the text to the buffer specified by the *szText* member.

- Copy the address of the buffer that contains the text to the *lpszText* member.

- Copy the identifier of a string resource to the *lpszText* member, and copy the handle of the instance that contains the resource to the *hinst* member.

## See also

[Tool Tips in Windows Not Derived from CFrameWnd](../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md)
