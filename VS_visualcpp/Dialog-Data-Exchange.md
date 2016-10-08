---
title: "Dialog Data Exchange"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 4675f63b-41d2-45ed-b6c3-235ad8ab924b
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Dialog Data Exchange
If you use the DDX mechanism, you set the initial values of the dialog object's member variables, typically in your `OnInitDialog` handler or the dialog constructor. Immediately before the dialog is displayed, the framework's DDX mechanism transfers the values of the member variables to the controls in the dialog box, where they appear when the dialog box itself appears in response to `DoModal` or **Create**. The default implementation of `OnInitDialog` in `CDialog` calls the `UpdateData` member function of class `CWnd` to initialize the controls in the dialog box.  
  
 The same mechanism transfers values from the controls to the member variables when the user clicks the OK button (or whenever you call the `UpdateData` member function with the argument **TRUE**). The dialog data validation mechanism validates any data items for which you specified validation rules.  
  
 The following figure illustrates dialog data exchange.  
  
 ![Dialog box data exchange](../VS_visualcpp/media/vc379D1.gif "vc379D1")  
Dialog Data Exchange  
  
 `UpdateData` works in both directions, as specified by the **BOOL** parameter passed to it. To carry out the exchange, `UpdateData` sets up a `CDataExchange` object and calls your dialog class's override of `CDialog`'s `DoDataExchange` member function. `DoDataExchange` takes an argument of type `CDataExchange`. The `CDataExchange` object passed to `UpdateData` represents the context of the exchange, defining such information as the direction of the exchange.  
  
 When you (or a Code wizard) override `DoDataExchange`, you specify a call to one DDX function per data member (control). Each DDX function knows how to exchange data in both directions based on the context supplied by the `CDataExchange` argument passed to your `DoDataExchange` by `UpdateData`.  
  
 MFC provides many DDX functions for different kinds of exchange. The following example shows a `DoDataExchange` override in which two DDX functions and one DDV function are called:  
  
 [!CODE [NVC_MFCControlLadenDialog#49](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#49)]  
  
 The `DDX_` and `DDV_` lines are a data map. The sample DDX and DDV functions shown are for a check-box control and an edit-box control, respectively.  
  
 If the user cancels a modal dialog box, the `OnCancel` member function terminates the dialog box and `DoModal` returns the value **IDCANCEL**. In that case, no data is exchanged between the dialog box and the dialog object.  
  
## See Also  
 [Dialog Data Exchange and Validation](../VS_visualcpp/Dialog-Data-Exchange-and-Validation.md)   
 [Life Cycle of a Dialog Box](../VS_visualcpp/Life-Cycle-of-a-Dialog-Box.md)   
 [Dialog Data Validation](../VS_visualcpp/Dialog-Data-Validation.md)