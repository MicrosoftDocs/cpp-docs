---
title: "ATL Dialog Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.codewiz.class.atl.dlg.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL projects, adding dialog resources"
  - "ATL Dialog Wizard"
ms.assetid: b0b9ace5-83c9-40d3-82c3-eb6293f10583
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
# ATL Dialog Wizard
This wizard inserts into the project an ATL dialog box object, derived from [CAxDialogImpl](../../atl/reference/caxdialogimpl-class.md). A dialog box derived from `CAxDialogImpl` can host ActiveX controls.  
  
 The wizard creates a dialog resource with default **OK** and **Cancel** buttons. You can edit the dialog resource and add ActiveX controls using the [Dialog Editor](../../mfc/dialog-editor.md) in Resource View.  
  
 The wizard inserts into the header file a [message map](../../atl/message-maps-atl.md) and declarations for handling the default click events. See [Implementing a Dialog Box](../../atl/implementing-a-dialog-box.md) for more information about ATL dialog boxes.  
  
 **Short name**  
 Sets the abbreviated name for the ATL dialog object. The name you provide determines the class name and the file (.cpp and .h) names, unless you change those fields individually.  
  
 `Class`  
 Sets the name of the class to be created. This name is based on the name you provide in **Short name**, preceded by 'C', the typical prefix for a class name.  
  
 **.h file**  
 Sets the name of the header file for the new object's class. By default, this name is based on the name you provide in **Short name**. Click the ellipsis button to save the file name to the location of your choice, or to append the class declaration to an existing file. If you choose an existing file, the wizard will not save it to the selected location until you click **Finish** in the wizard.  
  
 The wizard does not overwrite a file. If you select the name of an existing file, when you click **Finish**, the wizard prompts you to indicate whether the class declaration should be appended to the contents of the file. Click **Yes** to append the file; click **No** to return to the wizard and specify another file name.  
  
 **.cpp file**  
 Sets the name of the implementation file for the new object's class. By default, this name is based on the name you provide in **Short name**. Click the ellipsis button to save the file name to the location of your choice. The file is not saved to the selected location until you click **Finish** in the wizard.  
  
 The wizard does not overwrite a file. If you select the name of an existing file, when you click **Finish**, the wizard prompts you to indicate whether the class implementation should be appended to the contents of the file. Click **Yes** to append the file; click **No** to return to the wizard and specify another file name.  
  
## See Also  
 [ATL Dialog Box](../../atl/reference/adding-an-atl-dialog-box.md)

