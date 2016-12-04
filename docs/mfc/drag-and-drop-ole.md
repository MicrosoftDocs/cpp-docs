---
title: "Drag and Drop (OLE) | Microsoft Docs"
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
  - "OLE server applications, drag and drop"
  - "drag and drop [C++]"
  - "OLE applications, drag and drop"
  - "File Manager drag and drop support"
  - "drag and drop [C++], about OLE drag and drop"
  - "OLE drag and drop"
ms.assetid: a4595350-ca06-4400-88a1-f0175c76b77b
caps.latest.revision: 10
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
# Drag and Drop (OLE)
The drag-and-drop feature of OLE is primarily a shortcut for copying and pasting data. When you use the Clipboard to copy or paste data, a number of steps are required. You select the data, click **Cut** or **Copy** from the **Edit** menu, move to the destination file, window or application, place the cursor in the desired location, and click **Paste** from the **Edit** menu.  
  
 OLE drag and drop is different from the File Manager drag-and-drop mechanism, which can only handle filenames and is designed specifically to pass filenames to applications. OLE drag and drop is much more general. It allows you to drag and drop any data that could also be placed on the Clipboard.  
  
 When you use OLE drag and drop, you remove two steps from the process. You select the data from the source window (the "drop source"), drag it to the desired destination (the "drop target"), and drop it by releasing the mouse button. The operation eliminates the need for menus and is quicker than the copy/paste sequence. The only requirement is that both the drop source and drop target must be open and at least partially visible on the screen.  
  
 Using OLE drag and drop, data can be transferred from one location to another within a document, between different documents, or between applications. It can be implemented in either a container or a server application, and any application can be a drop source, a drop target, or both. If an application has both drop-source and drop-target support implemented, drag and drop is enabled between child windows, or within one window. This feature can make your application much easier to use.  
  
 If you only want to use the drag-and-drop capabilities of OLE, see [Drag and Drop: Customizing](../mfc/drag-and-drop-customizing.md). You can use the techniques explained in that article to make non-OLE applications drop sources. The article [Drag and Drop: Implementing a Drop Target](../mfc/drag-and-drop-implementing-a-drop-target.md) describes how to implement drop-target support for both OLE and non-OLE applications. It will also be helpful to examine the MFC OLE samples [OCLIENT](../visual-cpp-samples.md) and [HIERSVR](../visual-cpp-samples.md).  
  
 If you have not read the [Data Objects and Data Sources (OLE)](../mfc/data-objects-and-data-sources-ole.md) family of articles, you may want to do so now. These articles explain the fundamentals of data transfer, and how to implement it in your applications.  
  
 For more information about drag and drop, see:  
  
-   [Drag and Drop: Implementing a Drop Source](../mfc/drag-and-drop-implementing-a-drop-source.md)  
  
-   [Drag and Drop: Implementing a Drop Target](../mfc/drag-and-drop-implementing-a-drop-target.md)  
  
-   [Drag and Drop: Customizing](../mfc/drag-and-drop-customizing.md)  
  
## See Also  
 [OLE](../mfc/ole-in-mfc.md)   
 [Data Objects and Data Sources (OLE)](../mfc/data-objects-and-data-sources-ole.md)

