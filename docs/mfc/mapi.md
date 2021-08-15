---
description: "Learn more about: MAPI"
title: "MAPI"
ms.date: "11/04/2016"
helpviewer_keywords: ["messaging [MFC], client applications", "enabling applications for MAPI [MFC]", "MAPI support in MFC", "e-mail [MFC], enabling", "mail [MFC], enabling your application", "MAPI, MFC", "enabling applications for mail [MFC]"]
ms.assetid: 193449f7-b131-4ab0-9301-8d4f6cd1e7c4
---
# MAPI

This article describes the Microsoft Messaging Application Programming Interface (MAPI) for client message application developers. MFC supplies support for a subset of MAPI in class `CDocument` but does not encapsulate the entire API. For more information, see [MAPI Support in MFC](mapi-support-in-mfc.md).

MAPI is a set of functions that mail-enabled and mail-aware applications use to create, manipulate, transfer, and store mail messages. It gives application developers the tools to define the purpose and content of mail messages and gives them flexibility in their management of stored mail messages. MAPI also provides a common interface that application developers can use to create mail-enabled and mail-aware applications independent of the underlying messaging system.

Messaging clients provide a human interface for interaction with the Microsoft Windows Messaging System (WMS). This interaction typically includes requesting services from MAPI-compliant providers such as message stores and address books.

For more information about MAPI, see the articles under Guide in Win32 Messaging (MAPI) of the Windows SDK.

## In This Section

[MAPI Support in MFC](mapi-support-in-mfc.md)

## See also

[CDocument::OnFileSendMail](reference/cdocument-class.md#onfilesendmail)<br/>
[CDocument::OnUpdateFileSendMail](reference/cdocument-class.md#onupdatefilesendmail)<br/>
[COleDocument::OnFileSendMail](reference/coledocument-class.md#onfilesendmail)
