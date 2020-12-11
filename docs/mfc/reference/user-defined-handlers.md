---
description: "Learn more about: User-Defined Handlers"
title: "User-Defined Handlers"
ms.date: "11/04/2016"
helpviewer_keywords: ["ON_REGISTERED_MESSAGE macro [MFC]", "ON_MESSAGE macro [MFC]", "user-defined handlers [MFC]"]
ms.assetid: 99478294-bef0-4ba7-a369-25a6abdcdb62
---
# User-Defined Handlers

The following map entries correspond to the function prototypes.

|Map entry|Function prototype|
|---------------|------------------------|
|ON_MESSAGE( \<message>, \<memberFxn> )|afx_msg LRESULT memberFxn( WPARAM, LPARAM );|
|ON_REGISTERED_MESSAGE( \<nMessageVariable>, \<memberFxn> )|afx_msg LRESULT memberFxn( WPARAM, LPARAM );|
|ON_THREAD_MESSAGE( \<message>, \<memberFxn> )|afx_msg void memberFxn( WPARAM, LPARAM );|
|ON_REGISTERED_THREAD_MESSAGE( \<nMessageVariable>, \<memberFxn> )|afx_msg void memberFxn( WPARAM, LPARAM );|

## See also

[Message Maps](../../mfc/reference/message-maps-mfc.md)<br/>
[Handlers for WM_ Messages](../../mfc/reference/handlers-for-wm-messages.md)
