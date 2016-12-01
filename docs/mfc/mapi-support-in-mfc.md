---
title: "MAPI Support in MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC, MAPI support"
  - "MAPI support in MFC"
  - "CDocument class, and MAPI"
  - "OnUpdateFileSendMail method"
  - "MAPI, MFC"
  - "OnFileSendMail method"
ms.assetid: cafbecb1-0427-4077-b4b8-159bae5b49b8
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# MAPI Support in MFC
MFC supplies support for a subset of the Microsoft Messaging Application Program Interface (MAPI) in class **CDocument**. Specifically, **CDocument** has member functions that determine whether mail support is present on the end-user's machine and, if so, enable a Send Mail command whose standard command ID is **ID_FILE_SEND_MAIL**. The MFC handler function for this command allows the user to send a document through electronic mail.  
  
> [!TIP]
>  Although MFC does not encapsulate the entire MAPI function set, you can still call MAPI functions directly, just as you can call Win32 API functions directly from MFC programs.  
  
 Providing the Send Mail command in your application is very easy. MFC provides the implementation to package a document (that is, a **CDocument**-derived object) as an attachment and send it as mail. This attachment is equivalent to a File Save command that saves (serializes) the document's contents to the mail message. This implementation calls upon the mail client on the user's machine to give the user the opportunity to address the mail and to add subject and message text to the mail message. Users see their familiar mail application's user interface. This functionality is supplied by two **CDocument** member functions: `OnFileSendMail` and `OnUpdateFileSendMail`.  
  
 MAPI needs to read the file to send the attachment. If the application keeps its data file open during an `OnFileSendMail` function call, the file needs to be opened with a share mode that allows multiple processes to access the file.  
  
> [!NOTE]
>  An overriding version of `OnFileSendMail` for class `COleDocument` correctly handles compound documents.  
  
#### To implement a Send Mail command with MFC  
  
1.  Use the Visual C++ menu editor to add a menu item whose command ID is **ID_FILE_SEND_MAIL**.  
  
     This command ID is provided by the framework in AFXRES.H. The command can be added to any menu, but it is usually added to the **File** menu.  
  
2.  Manually add the following to your document's message map:  
  
     [!code-cpp[NVC_MFCDocView#9](../mfc/codesnippet/cpp/mapi-support-in-mfc_1.cpp)]  
  
    > [!NOTE]
    >  This message map works for a document derived from either **CDocument** or **COleDocument** — it picks up the correct base class in either case, even though the message map is in your derived document class.  
  
3.  Build your application.  
  
 If mail support is available, MFC enables your menu item with `OnUpdateFileSendMail` and subsequently processes the command with `OnFileSendMail`. If mail support is not available, MFC automatically removes your menu item so the user will not see it.  
  
> [!TIP]
>  Rather than manually adding message map entries as previously described, you can use the class Properties window to map messages to functions. For more information, see [Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md).  
  
 For related information, see the [MAPI](../mfc/mapi.md) overview.  
  
 For more information about the **CDocument** member functions that enable MAPI, see:  
  
-   [CDocument::OnFileSendMail](../mfc/reference/cdocument-class.md#cdocument__onfilesendmail)  
  
-   [CDocument::OnUpdateFileSendMail](../mfc/reference/cdocument-class.md#cdocument__onupdatefilesendmail)  
  
-   [COleDocument::OnFileSendMail](../mfc/reference/coledocument-class.md#coledocument__onfilesendmail)  
  
## See Also  
 [MAPI](../mfc/mapi.md)

