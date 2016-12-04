---
title: "Clipboard: Copying and Pasting Data | Microsoft Docs"
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
  - "Clipboard, copying data to"
  - "Clipboard, pasting"
ms.assetid: 580e10be-241f-4f9f-94cf-8302edc5beef
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
# Clipboard: Copying and Pasting Data
This topic describes the minimum work necessary to implement copying to and pasting from the Clipboard in your OLE application. It is recommended that you read the [Data Objects and Data Sources (OLE)](../mfc/data-objects-and-data-sources-ole.md) topics before proceeding.  
  
 Before you can implement either copying or pasting, you must first provide functions to handle the Copy, Cut, and Paste options on the Edit menu.  
  
##  <a name="_core_copying_or_cutting_data"></a> Copying or Cutting Data  
  
#### To copy data to the Clipboard  
  
1.  Determine whether the data to be copied is native data or is an embedded or linked item.  
  
    -   If the data is embedded or linked, obtain a pointer to the `COleClientItem` object that has been selected.  
  
    -   If the data is native and the application is a server, create a new object derived from `COleServerItem` containing the selected data. Otherwise, create a `COleDataSource` object for the data.  
  
2.  Call the selected item's `CopyToClipboard` member function.  
  
3.  If the user chose a Cut operation instead of a Copy operation, delete the selected data from your application.  
  
 To see an example of this sequence, see the **OnEditCut** and **OnEditCopy** functions in the MFC OLE sample programs [OCLIENT](../visual-cpp-samples.md) and [HIERSVR](../visual-cpp-samples.md). Note that these samples maintain a pointer to the currently selected data, so step 1 is already complete.  
  
##  <a name="_core_pasting_data"></a> Pasting Data  
 Pasting data is more complicated than copying it because you need to choose the format to use in pasting the data into your application.  
  
#### To paste data from the Clipboard  
  
1.  In your view class, implement **OnEditPaste** to handle users choosing the Paste option from the Edit menu.  
  
2.  In the **OnEditPaste** function, create a `COleDataObject` object and call its `AttachClipboard` member function to link this object to the data on the Clipboard.  
  
3.  Call `COleDataObject::IsDataAvailable` to check whether a particular format is available.  
  
     Alternately, you can use `COleDataObject::BeginEnumFormats` to look for other formats until you find one most suited to your application.  
  
4.  Perform the paste of the format.  
  
 For an example of how this works, see the implementation of the **OnEditPaste** member functions in the view classes defined in the MFC OLE sample programs [OCLIENT](../visual-cpp-samples.md) and [HIERSVR](../visual-cpp-samples.md).  
  
> [!TIP]
>  The main benefit of separating the paste operation into its own function is that the same paste code can be used when data is dropped in your application during a drag-and-drop operation. As in OCLIENT and HIERSVR, your `OnDrop` function can also call **DoPasteItem**, reusing the code written to implement Paste operations.  
  
 To handle the Paste Special option on the Edit menu, see the topic [Dialog Boxes in OLE](../mfc/dialog-boxes-in-ole.md).  
  
### What do you want to know more about  
  
-   [Adding other formats](../mfc/clipboard-adding-other-formats.md)  
  
-   [OLE data objects and data sources and uniform data transfer](../mfc/data-objects-and-data-sources-ole.md)  
  
-   [OLE drag and drop](../mfc/drag-and-drop-ole.md)  
  
-   [OLE](../mfc/ole-background.md)  
  
## See Also  
 [Clipboard: Using the OLE Clipboard Mechanism](../mfc/clipboard-using-the-ole-clipboard-mechanism.md)

