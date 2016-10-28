---
title: "MFC ActiveX Controls: Adding Stock Methods"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC ActiveX controls, stock methods"
  - "MFC ActiveX controls, methods"
  - "DoClick method"
ms.assetid: bc4fad78-cabd-4cc0-a798-464b1a682f0b
caps.latest.revision: 8
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
# MFC ActiveX Controls: Adding Stock Methods
A stock method differs from a custom method in that it is already implemented by class [COleControl](../mfcref/colecontrol-class.md). For example, `COleControl` contains a predefined member function that supports the Refresh method for your control. The dispatch map entry for this stock method is **DISP_STOCKFUNC_REFRESH**.  
  
 `COleControl` supports two stock methods: DoClick and Refresh. Refresh is invoked by the control's user to immediately update the control's appearance; DoClick is invoked to fire the control's Click event.  
  
|Method|Dispatch map entry|Comment|  
|------------|------------------------|-------------|  
|`DoClick`|**DISP_STOCKPROP_DOCLICK( )**|Fires a Click event.|  
|**Refresh**|**DISP_STOCKPROP_REFRESH( )**|Immediately updates the control's appearance.|  
  
##  <a name="_core_adding_a_stock_method_using_classwizard"></a> Adding a Stock Method Using the Add Method Wizard  
 Adding a stock method is simple using the [Add Method Wizard](../ide/add-method-wizard.md). The following procedure demonstrates adding the Refresh method to a control created using the MFC ActiveX Control Wizard.  
  
#### To add the stock Refresh method using the Add Method Wizard  
  
1.  Load your control's project.  
  
2.  In Class View, expand the library node of your control.  
  
3.  Right-click the interface node for your control (the second node of the library node) to open the shortcut menu.  
  
4.  From the shortcut menu, click **Add** and then click **Add Method**.  
  
     This opens the Add Method Wizard.  
  
5.  In the **Method Name** box, click **Refresh**.  
  
6.  Click **Finish**.  
  
##  <a name="_core_classwizard_changes_for_stock_methods"></a> Add Method Wizard Changes for Stock Methods  
 Because the stock Refresh method is supported by the control's base class, the **Add Method Wizard** does not change the control's class declaration in any way. It adds an entry for the method to the control's dispatch map and to its .IDL file. The following line is added to the control's dispatch map, located in its implementation (.CPP) file:  
  
 [!code[NVC_MFC_AxUI#16](../mfc/codesnippet/CPP/mfc-activex-controls--adding-stock-methods_1.cpp)]  
  
 This makes the Refresh method available to the control's users.  
  
 The following line is added to the control's .IDL file:  
  
 [!code[NVC_MFC_AxUI#17](../mfc/codesnippet/CPP/mfc-activex-controls--adding-stock-methods_2.idl)]  
  
 This line assigns the Refresh method a specific ID number.  
  
## See Also  
 [MFC ActiveX Controls](../mfc/mfc-activex-controls.md)