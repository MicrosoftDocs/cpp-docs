---
title: "Dialog Data Validation | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "validating data [C++], message boxes"
  - "data validation [C++], dialog boxes"
  - "dialog boxes [C++], validating data"
  - "validating data [C++], dialog box data entry"
  - "DDV (dialog data validation) [C++]"
  - "data validation [C++], message boxes"
ms.assetid: f070c309-2044-4ff2-8c92-1ec1ea84af58
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Dialog Data Validation
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Dialog Data Validation](https://docs.microsoft.com/cpp/mfc/dialog-data-validation).  
  
  
You can specify validation in addition to data exchange by calling DDV functions, as shown in the example in [Dialog Data Exchange](../mfc/dialog-data-exchange.md). The `DDV_MaxChars` call in the example validates that the string entered in the text-box control is not longer than 20 characters. The DDV function typically alerts the user with a message box if the validation fails and puts the focus on the offending control so the user can reenter the data. A DDV function for a given control must be called immediately after the DDX function for the same control.  
  
 You can also define your own custom DDX and DDV routines. For details on this and other aspects of DDX and DDV, see [MFC Technical Note 26](../mfc/tn026-ddx-and-ddv-routines.md).  
  
 The [Add Member Variable Wizard](../ide/add-member-variable-wizard.md) will write all of the DDX and DDV calls in the data map for you.  
  
## See Also  
 [Dialog Data Exchange and Validation](../mfc/dialog-data-exchange-and-validation.md)   
 [Life Cycle of a Dialog Box](../mfc/life-cycle-of-a-dialog-box.md)   
 [Dialog Data Exchange](../mfc/dialog-data-exchange.md)





