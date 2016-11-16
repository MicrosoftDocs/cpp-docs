---
title: "Activation (C++) | Microsoft Docs"
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
  - "OLE server applications, activation"
  - "OLE items, visual editing"
  - "activation [C++]"
  - "OLE [C++], in-place activation"
  - "OLE [C++], activation"
  - "in-place activation, embedded and linked items"
  - "activating objects"
  - "visual editing, activation"
  - "visual editing"
  - "documents, OLE"
  - "embedded objects"
  - "OLE [C++], editing"
  - "in-place activation"
  - "activation [C++], embedded OLE items"
  - "OLE activation"
ms.assetid: ed8357d9-e487-4aaa-aa6b-2edc4de25dfa
caps.latest.revision: 9
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
# Activation (C++)
This article explains the role of activation in the visual editing of OLE items. After a user has embedded an OLE item in a container document, it may need to be used. To do this, the user double-clicks the item, which activates that item. The most frequent activity for activation is editing. Many current OLE items, when activated for editing, cause the menus and toolbars in the current frame window to change to reflect those belonging to the server application that created the item. This behavior, known as in-place activation, allows the user to edit any embedded item in a compound document without leaving the container document's window.  
  
 It is also possible to edit embedded OLE items in a separate window. This will happen if either the container or server application does not support in-place activation. In this case, when the user double-clicks an embedded item, the server application is launched in a separate window and the embedded item appears as its own document. The user edits the item in this window. When editing is complete, the user closes the server application and returns to the container application.  
  
 As an alternative, the user can choose "open editing" with the **\<object> Open** command on the **Edit** menu. This opens the object in a separate window.  
  
> [!NOTE]
>  Editing embedded items in a separate window was standard behavior in version 1 of OLE, and some OLE applications may support only this style of editing.  
  
 In-place activation promotes a document-centric approach to document creation. The user can treat a compound document as a single entity, working on it without switching between applications. However, in-place activation is used only for embedded items, not for linked items: they must be edited in a separate window. This is because a linked item is actually stored in a different place. The editing of a linked item takes place within the actual context of the data, that is, where the data is stored. Editing a linked item in a separate window reminds the user that the data belongs to another document.  
  
 MFC does not support nested in-place activation. If you build a container/server application, and that container/server is embedded in another container and in-place activated, it cannot in-place activate objects embedded inside it.  
  
 What happens to an embedded item when the user double-clicks it depends on the verbs defined for the item. For information, see [Activation: Verbs](../mfc/activation-verbs.md).  
  
## See Also  
 [OLE](../mfc/ole-in-mfc.md)   
 [Containers](../mfc/containers.md)   
 [Servers](../mfc/servers.md)

