---
description: "Learn more about: Handlers for Standard Windows Messages"
title: "Handlers for Standard Windows Messages"
ms.date: "11/04/2016"
f1_keywords: ["afx_msg"]
helpviewer_keywords: ["Windows messages [MFC], handlers", "message handling [MFC], Windows message handlers", "handler functions, standard Windows messages", "functions [MFC], handler", "messages [MFC], Windows"]
ms.assetid: 19412a8b-2c38-4502-81da-13c823c7e36c
---
# Handlers for Standard Windows Messages

Default handlers for standard Windows messages (**WM_**) are predefined in class `CWnd`. The class library bases names for these handlers on the message name. For example, the handler for the **WM_PAINT** message is declared in `CWnd` as:

`afx_msg void OnPaint();`

The **afx_msg** keyword suggests the effect of the C++ **`virtual`** keyword by distinguishing the handlers from other `CWnd` member functions. Note, however, that these functions are not actually virtual; they are instead implemented through message maps. Message maps depend solely on standard preprocessor macros, not on any extensions to the C++ language. The **afx_msg** keyword resolves to white space after preprocessing.

To override a handler defined in a base class, simply define a function with the same prototype in your derived class and to make a message-map entry for the handler. Your handler "overrides" any handler of the same name in any of your class's base classes.

In some cases, your handler should call the overridden handler in the base class so the base class(es) and Windows can operate on the message. Where you call the base-class handler in your override depends on the circumstances. Sometimes you must call the base-class handler first and sometimes last. Sometimes you call the base-class handler conditionally, if you choose not to handle the message yourself. Sometimes you should call the base-class handler, then conditionally execute your own handler code, depending on the value or state returned by the base-class handler.

> [!CAUTION]
> It is not safe to modify the arguments passed into a handler if you intend to pass them to a base-class handler. For example, you might be tempted to modify the *nChar* argument of the `OnChar` handler (to convert to uppercase, for example). This behavior is fairly obscure, but if you need to accomplish this effect, use the `CWnd` member function `SendMessage` instead.

How do you determine the proper way to override a given message When the [Class Wizard](reference/mfc-class-wizard.md) writes the skeleton of the handler function for a given message — an `OnCreate` handler for **WM_CREATE**, for example — it sketches in the form of the recommended overridden member function. The following example recommends that the handler first call the base-class handler and proceed only on condition that it does not return -1.

[!code-cpp[NVC_MFCMessageHandling#3](codesnippet/cpp/handlers-for-standard-windows-messages_1.cpp)]

By convention, the names of these handlers begin with the prefix "On." Some of these handlers take no arguments, while others take several. Some also have a return type other than **`void`**. The default handlers for all **WM_** messages are documented in the *MFC Reference* as member functions of class `CWnd` whose names begin with "On." The member function declarations in `CWnd` are prefixed with **afx_msg**.

## See also

[Declaring Message Handler Functions](declaring-message-handler-functions.md)
