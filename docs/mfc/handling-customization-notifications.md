---
description: "Learn more about: Handling Customization Notifications"
title: "Handling Customization Notifications"
ms.date: "11/04/2016"
f1_keywords: ["TBN_CUSTHELP", "TBN_QUERYINSERT", "TBNOTIFY", "NMHDR", "TBN_TOOLBARCHANGE", "TBN_ENDDRAG", "NM_SETFOCUS", "TBN_RESET", "NM_RETURN", "NM_ENDWAIT", "NM_STARTWAIT", "TBN_BEGINDRAG", "NM_OUTOFMEMORY", "TBN_QUERYDELETE", "NM_DBLCLK", "TBN_ENDADJUST", "NM_KILLFOCUS", "NM_RCLICK", "TBN_BEGINADJUST", "NM_CLICK"]
helpviewer_keywords: ["TBN_ENDADJUST notification [MFC]", "TBNOTIFY notification [MFC]", "TBN_BEGINDRAG notification [MFC]", "TBN_TOOLBARCHANGE notification [MFC]", "NM_CLICK notification [MFC]", "NM_RETURN notification [MFC]", "NM_RCLICK notification [MFC]", "TBN_ENDDRAG notification [MFC]", "TBN_BEGINADJUST notification [MFC]", "NM_ENDWAIT notification [MFC]", "NM_KILLFOCUS notification [MFC]", "NM_SETFOCUS notification [MFC]", "NM_OUTOFMEMORY notification [MFC]", "TBN_QUERYINSERT notification [MFC]", "NMHDR [MFC]", "NM_STARTWAIT notification [MFC]", "CToolBarCtrl class [MFC], handling notifications", "TBN_CUSTHELP notification [MFC]", "TBN_RESET notification [MFC]", "NM_DBLCLK notification [MFC]", "TBN_QUERYDELETE notification [MFC]", "NM_RDBLCLK notification [MFC]", "TBN_GETBUTTONINFO notification [MFC]"]
ms.assetid: 219ea08e-7515-4b98-85cb-47120f08c0a2
---
# Handling Customization Notifications

A Windows toolbar common control has built-in customization features, including a system-defined customization dialog box, which allow the user to insert, delete, or rearrange toolbar buttons. The application determines whether the customization features are available and controls the extent to which the user can customize the toolbar.

You can make these customization features available to the user by giving the toolbar the **CCS_ADJUSTABLE** style. The customization features allow the user to drag a button to a new position or to remove a button by dragging it off the toolbar. In addition, the user can double-click the toolbar to display the **Customize Toolbar** dialog box, which allows the user to add, delete, and rearrange toolbar buttons. The application can display the dialog box by using the [Customize](reference/ctoolbarctrl-class.md#customize) member function.

The toolbar control sends notification messages to the parent window at each step in the customization process. If the user holds the SHIFT key down and begins dragging a button, the toolbar automatically handles the drag operation. The toolbar sends the **TBN_QUERYDELETE** notification message to the parent window to determine whether the button may be deleted. The drag operation ends if the parent window returns **FALSE**. Otherwise, the toolbar captures mouse input and waits for the user to release the mouse button.

When the user releases the mouse button, the toolbar control determines the location of the mouse cursor. If the cursor is outside the toolbar, the button is deleted. If the cursor is on another toolbar button, the toolbar sends the **TBN_QUERYINSERT** notification message to the parent window to determine if a button may be inserted to the left of the given button. The button is inserted if the parent window returns **TRUE**; otherwise, it is not. The toolbar sends the **TBN_TOOLBARCHANGE** notification message to signal the end of the drag operation.

If the user begins a drag operation without holding down the SHIFT key, the toolbar control sends the **TBN_BEGINDRAG** notification message to the owner window. An application that implements its own button-dragging code can use this message as a signal to begin a drag operation. The toolbar sends the **TBN_ENDDRAG** notification message to signal the end of the drag operation.

A toolbar control sends notification messages when the user customizes a toolbar by using the **Customize Toolbar** dialog box. The toolbar sends the **TBN_BEGINADJUST** notification message after the user double-clicks the toolbar, but before the dialog box is created. Next, the toolbar begins sending a series of **TBN_QUERYINSERT** notification messages to determine whether the toolbar allows buttons to be inserted. When the parent window returns **TRUE**, the toolbar stops sending **TBN_QUERYINSERT** notification messages. If the parent window does not return **TRUE** for any button, the toolbar destroys the dialog box.

Next, the toolbar control determines if any buttons may be deleted from the toolbar by sending one **TBN_QUERYDELETE** notification message for each button in the toolbar. The parent window returns **TRUE** to indicate that a button may be deleted; otherwise, it returns **FALSE**. The toolbar adds all toolbar buttons to the dialog box, but grays those that may not be deleted.

Whenever the toolbar control needs information about a button in the Customize Toolbar dialog box, it sends the **TBN_GETBUTTONINFO** notification message, specifying the index of the button for which it needs information and the address of a **TBNOTIFY** structure. The parent window must fill the structure with the relevant information.

The **Customize Toolbar** dialog box includes a Help button and a Reset button. When the user chooses the Help button, the toolbar control sends the **TBN_CUSTHELP** notification message. The parent window should respond by displaying help information. The dialog box sends the **TBN_RESET** notification message when the user selects the Reset button. This message signals that the toolbar is about to reinitialize the dialog box.

These messages are all **WM_NOTIFY** messages, and they can be handled in your owner window by adding message-map entries of the following form to your owner window's message map:

```cpp
ON_NOTIFY( wNotifyCode, idControl, memberFxn )
```

- **wNotifyCode**

   Notification message identifier code, such as **TBN_BEGINADJUST**.

- **idControl**

   The identifier of the control sending the notification.

- **memberFxn**

   The member function to be called when this notification is received.

Your member function would be declared with the following prototype:

```cpp
afx_msg void memberFxn( NMHDR * pNotifyStruct, LRESULT * result );
```

If the notification message handler returns a value, it should put it in the **LRESULT** pointed to by *result*.

For each message, `pNotifyStruct` points to either an **NMHDR** structure or a **TBNOTIFY** structure. These structures are described below:

The **NMHDR** structure contains the following members:

```cpp
typedef struct tagNMHDR {
    HWND hwndFrom;  // handle of control sending message
    UINT idFrom;// identifier of control sending message
    UINT code;  // notification code; see below
} NMHDR;
```

- **hwndFrom**

   Window handle of the control that is sending the notification. To convert this handle to a `CWnd` pointer, use [CWnd::FromHandle](reference/cwnd-class.md#fromhandle).

- **idFrom**

   Identifier of the control sending the notification.

- **code**

   Notification code. This member can be a value specific to a control type, such as **TBN_BEGINADJUST** or **TTN_NEEDTEXT**, or it can be one of the common notification values listed below:

  - **NM_CLICK** The user has clicked the left mouse button within the control.

  - **NM_DBLCLK** The user has double-clicked the left mouse button within the control.

  - **NM_KILLFOCUS** The control has lost the input focus.

  - **NM_OUTOFMEMORY** The control could not complete an operation because there is not enough memory available.

  - **NM_RCLICK** The user has clicked the right mouse button within the control.

  - **NM_RDBLCLK** The user has double-clicked the right mouse button within the control.

  - **NM_RETURN** The control has the input focus, and the user has pressed the ENTER key.

  - **NM_SETFOCUS** The control has received the input focus.

The **TBNOTIFY** structure contains the following members:

```cpp
typedef struct {
    NMHDR hdr; // information common to all WM_NOTIFY messages
    int iItem; // index of button associated with notification
    TBBUTTON tbButton; // info about button associated withnotification
    int cchText;   // count of characters in button text
    LPSTR lpszText;// address of button text
} TBNOTIFY, FAR* LPTBNOTIFY;
```

- **hdr**

   Information common to all **WM_NOTIFY** messages.

- **iItem**

   Index of button associated with notification.

- **tbButton**

   **TBBUTTON** structure that contains information about the toolbar button associated with the notification.

- **cchText**

   Count of characters in button text.

- **lpszText**

   Pointer to button text.

The notifications the toolbar sends are as follows:

- **TBN_BEGINADJUST**

   Sent when the user begins customizing a toolbar control. The pointer points to an **NMHDR** structure that contains information about the notification. The handler doesn't need to return any specific value.

- **TBN_BEGINDRAG**

   Sent when the user begins dragging a button in a toolbar control. The pointer points to a **TBNOTIFY** structure. The **iItem** member contains the zero-based index of the button being dragged. The handler doesn't need to return any specific value.

- **TBN_CUSTHELP**

   Sent when the user chooses the Help button in the Customize Toolbar dialog box. No return value. The pointer points to an **NMHDR** structure that contains information about the notification message. The handler doesn't need to return any specific value.

- **TBN_ENDADJUST**

   Sent when the user stops customizing a toolbar control. The pointer points to an **NMHDR** structure that contains information about the notification message. The handler doesn't need to return any specific value.

- **TBN_ENDDRAG**

   Sent when the user stops dragging a button in a toolbar control. The pointer points to a **TBNOTIFY** structure. The **iItem** member contains the zero-based index of the button being dragged. The handler doesn't need to return any specific value.

- **TBN_GETBUTTONINFO**

   Sent when the user is customizing a toolbar control. The toolbar uses this notification message to retrieve information needed by the Customize Toolbar dialog box. The pointer points to a **TBNOTIFY** structure. The **iItem** member specifies the zero-based index of a button. The **pszText** and **cchText** members specify the address and length, in characters, of the current button text. An application should fill the structure with information about the button. Return **TRUE** if button information was copied to the structure, or **FALSE** otherwise.

- **TBN_QUERYDELETE**

   Sent while the user is customizing a toolbar to determine whether a button may be deleted from a toolbar control. The pointer points to a **TBNOTIFY** structure. The **iItem** member contains the zero-based index of the button to be deleted. Return **TRUE** to allow the button to be deleted or **FALSE** to prevent the button from being deleted.

- **TBN_QUERYINSERT**

   Sent while the user is customizing a toolbar control to determine whether a button may be inserted to the left of the given button. The pointer points to a **TBNOTIFY** structure. The **iItem** member contains the zero-based index of the button to be inserted. Return **TRUE** to allow a button to be inserted in front of the given button or **FALSE** to prevent the button from being inserted.

- **TBN_RESET**

   Sent when the user resets the content of the Customize Toolbar dialog box. The pointer points to an **NMHDR** structure that contains information about the notification message. The handler doesn't need to return any specific value.

- **TBN_TOOLBARCHANGE**

   Sent after the user has customized a toolbar control. The pointer points to an **NMHDR** structure that contains information about the notification message. The handler doesn't need to return any specific value.

## See also

[Using CToolBarCtrl](using-ctoolbarctrl.md)<br/>
[Controls](controls-mfc.md)
