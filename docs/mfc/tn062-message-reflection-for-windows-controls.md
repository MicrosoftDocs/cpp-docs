---
description: "Learn more about: TN062: Message Reflection for Windows Controls"
title: "TN062: Message Reflection for Windows Controls"
ms.date: "06/28/2018"
f1_keywords: ["vc.controls.messages"]
helpviewer_keywords: ["ON_WM_VKEYTOITEM_REFLECT macro [MFC]", "ON_WM_DRAWITEM_REFLECT macro [MFC]", "ON_WM_VSCROLL_REFLECT macro [MFC]", "ON_NOTIFY_REFLECT message [MFC]", "ON_CONTROL_REFLECT_EX macro [MFC]", "ON_UPDATE_COMMAND_UI_REFLECT macro [MFC]", "ON_NOTIFY_REFLECT_EX message [MFC]", "ON_WM_HSCROLL_REFLECT macro [MFC]", "message reflection [MFC]", "ON_WM_COMPAREITEM_REFLECT macro [MFC]", "ON_WM_MEASUREITEM_REFLECT macro [MFC]", "ON_NOTIFY message [MFC]", "WM_COMMAND [MFC]", "WM_CTLCOLOR message [MFC]", "TN062 [MFC]", "ON_WM_CHARTOITEM_REFLECT macro [MFC]", "ON_WM_CTLCOLOR_REFLECT macro [MFC]", "ON_WM_DELETEITEM_REFLECT macro [MFC]", "notification messages [MFC]", "ON_WM_PARENTNOTIFY_REFLECT macro [MFC]", "WM_NOTIFY message [MFC]", "ON_CONTROL_REFLECT macro"]
ms.assetid: 53efb0ba-fcda-4fa0-a3c7-14e0b78fb494
---
# TN062: Message Reflection for Windows Controls

> [!NOTE]
> The following technical note has not been updated since it was first included in the online documentation. As a result, some procedures and topics might be out of date or incorrect. For the latest information, it is recommended that you search for the topic of interest in the online documentation index.

This technical note describes message reflection, a new feature in MFC 4.0. It also contains directions for creating a simple reusable control that uses message reflection.

This technical note does not discuss message reflection as it applies to ActiveX controls (formerly called OLE controls). Please see the article [ActiveX Controls: Subclassing a Windows Control](../mfc/mfc-activex-controls-subclassing-a-windows-control.md).

**What Is Message Reflection**

Windows controls frequently send notification messages to their parent windows. For instance, many controls send a control color notification message (WM_CTLCOLOR or one of its variants) to their parent to allow the parent to supply a brush for painting the background of the control.

In Windows and in MFC before version 4.0, the parent window, often a dialog box, is responsible for handling these messages. This means that the code for handling the message needs to be in the parent window's class and that it has to be duplicated in every class that needs to handle that message. In the case above, every dialog box that wanted controls with custom backgrounds would have to handle the control color notification message. It would be much easier to reuse code if a control class could be written that would handle its own background color.

In MFC 4.0, the old mechanism still works — parent windows can handle notification messages. In addition, however, MFC 4.0 facilitates reuse by providing a feature called "message reflection" that allows these notification messages to be handled in either the child control window or the parent window, or in both. In the control background color example, you can now write a control class that sets its own background color by handling the reflected WM_CTLCOLOR message — all without relying on the parent. (Note that since message reflection is implemented by MFC, not by Windows, the parent window class must be derived from `CWnd` for message reflection to work.)

Older versions of MFC did something similar to message reflection by providing virtual functions for a few messages, such as messages for owner-drawn list boxes (WM_DRAWITEM, and so on). The new message reflection mechanism is generalized and consistent.

Message reflection is backward compatible with code written for versions of MFC before 4.0.

If you have supplied a handler for a specific message, or for a range of messages, in your parent window's class, it will override reflected message handlers for the same message provided you don't call the base class handler function in your own handler. For example, if you handle WM_CTLCOLOR in your dialog box class, your handling will override any reflected message handlers.

If, in your parent window class, you supply a handler for a specific WM_NOTIFY message or a range of WM_NOTIFY messages, your handler will be called only if the child control sending those messages does not have a reflected message handler through `ON_NOTIFY_REFLECT()`. If you use `ON_NOTIFY_REFLECT_EX()` in your message map, your message handler may or may not allow the parent window to handle the message. If the handler returns **FALSE**, the message will be handled by the parent as well, while a call that returns **TRUE** does not allow the parent to handle it. Note that the reflected message is handled before the notification message.

When a WM_NOTIFY message is sent, the control is offered the first chance to handle it. If any other reflected message is sent, the parent window has the first chance to handle it and the control will receive the reflected message. To do so, it will need a handler function and an appropriate entry in the control's class message map.

The message-map macro for reflected messages is slightly different than for regular notifications: it has *_REFLECT* appended to its usual name. For instance, to handle a WM_NOTIFY message in the parent, you use the macro ON_NOTIFY in the parent's message map. To handle the reflected message in the child control, use the ON_NOTIFY_REFLECT macro in the child control's message map. In some cases, the parameters are different, as well. Note that ClassWizard can usually add the message-map entries for you and provide skeleton function implementations with correct parameters.

See [TN061: ON_NOTIFY and WM_NOTIFY Messages](../mfc/tn061-on-notify-and-wm-notify-messages.md) for information on the new WM_NOTIFY message.

**Message-Map Entries and Handler Function Prototypes for Reflected Messages**

To handle a reflected control notification message, use the message-map macros and function prototypes listed in the table below.

ClassWizard can usually add these message-map entries for you and provide skeleton function implementations. See [Defining a Message Handler for a Reflected Message](../mfc/reference/defining-a-message-handler-for-a-reflected-message.md) for information about how to define handlers for reflected messages.

To convert from the message name to the reflected macro name, prepend *ON_* and append *_REFLECT*. For example, WM_CTLCOLOR becomes ON_WM_CTLCOLOR_REFLECT. (To see which messages can be reflected, do the opposite conversion on the macro entries in the table below.)

The three exceptions to the rule above are as follows:

- The macro for WM_COMMAND notifications is ON_CONTROL_REFLECT.

- The macro for WM_NOTIFY reflections is ON_NOTIFY_REFLECT.

- The macro for ON_UPDATE_COMMAND_UI reflections is ON_UPDATE_COMMAND_UI_REFLECT.

In each of the above special cases, you must specify the name of the handler member function. In the other cases, you must use the standard name for your handler function.

The meanings of the parameters and return values of the functions are documented under either the function name or the function name with *On* prepended. For instance, `CtlColor` is documented in `OnCtlColor`. Several reflected message handlers need fewer parameters than the similar handlers in a parent window. Just match the names in the table below with the names of the formal parameters in the documentation.

|Map entry|Function prototype|
|---------------|------------------------|
|**ON_CONTROL_REFLECT(** `wNotifyCode` **,** `memberFxn` **)**|**afx_msg void** `memberFxn` **( );**|
|**ON_NOTIFY_REFLECT(** `wNotifyCode` **,** `memberFxn` **)**|**afx_msg void** `memberFxn` **( NMHDR** <strong>\*</strong> `pNotifyStruct` **, LRESULT**<strong>\*</strong> *result* **);**|
|**ON_UPDATE_COMMAND_UI_REFLECT(** `memberFxn` **)**|**afx_msg void** `memberFxn` **( CCmdUI**<strong>\*</strong> `pCmdUI` **);**|
|**ON_WM_CTLCOLOR_REFLECT( )**|**afx_msg HBRUSH CtlColor ( CDC**<strong>\*</strong> `pDC` **, UINT** `nCtlColor` **);**|
|**ON_WM_DRAWITEM_REFLECT( )**|**afx_msg void DrawItem ( LPDRAWITEMSTRUCT** `lpDrawItemStruct` **);**|
|**ON_WM_MEASUREITEM_REFLECT( )**|**afx_msg void MeasureItem ( LPMEASUREITEMSTRUCT** `lpMeasureItemStruct` **);**|
|**ON_WM_DELETEITEM_REFLECT( )**|**afx_msg void DeleteItem ( LPDELETEITEMSTRUCT** `lpDeleteItemStruct` **);**|
|**ON_WM_COMPAREITEM_REFLECT( )**|**afx_msg int CompareItem ( LPCOMPAREITEMSTRUCT** `lpCompareItemStruct` **);**|
|**ON_WM_CHARTOITEM_REFLECT( )**|**afx_msg int CharToItem ( UINT** `nKey` **, UINT** `nIndex` **);**|
|**ON_WM_VKEYTOITEM_REFLECT( )**|**afx_msg int VKeyToItem ( UINT** `nKey` **, UINT** `nIndex` **);**|
|**ON_WM_HSCROLL_REFLECT( )**|**afx_msg void HScroll ( UINT** `nSBCode` **, UINT** `nPos` **);**|
|**ON_WM_VSCROLL_REFLECT( )**|**afx_msg void VScroll ( UINT** `nSBCode` **, UINT** `nPos` **);**|
|**ON_WM_PARENTNOTIFY_REFLECT( )**|**afx_msg void ParentNotify ( UINT** `message` **, LPARAM** `lParam` **);**|

The ON_NOTIFY_REFLECT and ON_CONTROL_REFLECT macros have variations that allow more than one object (such as the control and its parent) to handle a given message.

|Map entry|Function prototype|
|---------------|------------------------|
|**ON_NOTIFY_REFLECT_EX(** `wNotifyCode` **,** `memberFxn` **)**|**afx_msg BOOL** `memberFxn` **( NMHDR** <strong>\*</strong> `pNotifyStruct` **, LRESULT**<strong>\*</strong> *result* **);**|
|**ON_CONTROL_REFLECT_EX(** `wNotifyCode` **,** `memberFxn` **)**|**afx_msg BOOL** `memberFxn` **( );**|

## Handling Reflected Messages: An Example of a Reusable control

This simple example creates a reusable control called `CYellowEdit`. The control works the same as a regular edit control except that it displays black text on a yellow background. It would be easy to add member functions that would allow the `CYellowEdit` control to display different colors.

### To try the example that creates a reusable control

1. Create a new dialog box in an existing application. For more information, see the [dialog editor](../windows/dialog-editor.md) topic.

   You must have an application in which to develop the reusable control. If you don't have an existing application to use, create a dialog-based application using AppWizard.

2. With your project loaded into Visual C++, use ClassWizard to create a new class called `CYellowEdit` based on `CEdit`.

3. Add three member variables to your `CYellowEdit` class. The first two will be *COLORREF* variables to hold the text color and the background color. The third will be a `CBrush` object that will hold the brush for painting the background. The `CBrush` object allows you to create the brush once, merely referencing it after that, and to destroy the brush automatically when the `CYellowEdit` control is destroyed.

4. Initialize the member variables by writing the constructor as follows:

    ```cpp
    CYellowEdit::CYellowEdit()
    {
        m_clrText = RGB(0, 0, 0);
        m_clrBkgnd = RGB(255, 255, 0);
        m_brBkgnd.CreateSolidBrush(m_clrBkgnd);
    }
    ```

5. Using ClassWizard, add a handler for the reflected WM_CTLCOLOR message to your `CYellowEdit` class. Note that the equal sign in front of the message name in the list of messages you can handle indicates that the message is reflected. This is described in [Defining a Message Handler for a Reflected Message](../mfc/reference/defining-a-message-handler-for-a-reflected-message.md).

   ClassWizard adds the following message-map macro and skeleton function for you:

    ```cpp
    ON_WM_CTLCOLOR_REFLECT()
    // Note: other code will be in between....

    HBRUSH CYellowEdit::CtlColor(CDC* pDC, UINT nCtlColor)
    {
        // TODO: Change any attributes of the DC here
        // TODO: Return a non-NULL brush if the
        //       parent's handler should not be called
        return NULL;
    }
    ```

6. Replace the body of the function with the following code. The code specifies the text color, the text background color, and the background color for rest of the control.

    ```cpp
    pDC->SetTextColor(m_clrText);   // text
    pDC->SetBkColor(m_clrBkgnd);    // text bkgnd
    return m_brBkgnd;               // ctl bkgnd
    ```

7. Create an edit control in your dialog box, then attach it to a member variable by double-clicking the edit control while holding a control key down. In the Add Member Variable dialog box, finish the variable name and choose "Control" for the category, then "CYellowEdit" for the variable type. Don't forget to set the tab order in the dialog box. Also, be sure to include the header file for the `CYellowEdit` control in your dialog box's header file.

8. Build and run your application. The edit control will have a yellow background.

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
