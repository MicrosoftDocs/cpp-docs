---
title: "Using Property Sheets in Your Application | Microsoft Docs"
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
  - "dialog templates, property sheets"
  - "dialog resources"
  - "property pages, property sheets"
  - "DoModal method property sheets"
  - "AddPage method"
  - "property sheets, about property sheets"
  - "Create method [C++], property sheets"
  - "CPropertyPage class, styles"
ms.assetid: 240654d4-152b-4e3f-af7b-44234339206e
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
# Using Property Sheets in Your Application
To use a property sheet in your application, complete the following steps:  
  
1.  Create a dialog template resource for each property page. Keep in mind that the user may be switching from one page to another, so lay out each page as consistently as possible.  
  
     The dialog templates for all pages do not have to be the same size. The framework uses the size of the largest page to determine how much space to allocate in the property sheet for the property pages.  
  
     When you create the dialog template resource for a property page, you must specify the following styles in the Dialog Properties property sheet:  
  
    -   Set the **Caption** edit box on the **General** page to the text you wish to appear in the tab for this page.  
  
    -   Set the **Style** list box on the **Styles** page to **Child**.  
  
    -   Set the **Border** list box on the **Styles** page to **Thin**.  
  
    -   Ensure that the **Titlebar** check box on the **Styles** page is selected.  
  
    -   Ensure that the **Disabled** check box on the **More Styles** page is selected.  
  
2.  Create a [CPropertyPage](../mfc/reference/cpropertypage-class.md)-derived class corresponding to each property page dialog template. See [Adding a Class](../ide/adding-a-class-visual-cpp.md). Choose `CPropertyPage` as the base class.  
  
3.  Create member variables to hold the values for this property page. The process for adding member variables to a property page is exactly the same as adding member variables to a dialog box, because a property page is a specialized dialog box. For more information, see [Defining Member Variables for Dialog Controls](../mfc/defining-member-variables-for-dialog-controls.md).  
  
4.  Construct a [CPropertySheet](../mfc/reference/cpropertysheet-class.md) object in your source code. Usually, you construct the `CPropertySheet` object in the handler for the command that displays the property sheet. This object represents the entire property sheet. If you create a modal property sheet with the [DoModal](../mfc/reference/cpropertysheet-class.md#cpropertysheet__domodal) function, the framework supplies three command buttons by default: OK, Cancel, and Apply. The framework creates no command buttons for modeless property sheets created with the [Create](../mfc/reference/cpropertysheet-class.md#cpropertysheet__create) function. You do not need to derive a class from `CPropertySheet` unless you want to either add other controls (such as a preview window) or display a modeless property sheet. This step is necessary for modeless property sheets because they do not contain any default controls that could be used to close the property sheet.  
  
5.  For each page to be added to the property sheet, do the following:  
  
    -   Construct one object for each `CPropertyPage`-derived class that you created earlier in this process.  
  
    -   Call [CPropertySheet::AddPage](../mfc/reference/cpropertysheet-class.md#cpropertysheet__addpage) for each page.  
  
     Typically, the object that creates the `CPropertySheet` also creates the `CPropertyPage` objects in this step. However, if you implement a `CPropertySheet`-derived class, you can embed the `CPropertyPage` objects in the `CPropertySheet` object and call `AddPage` for each page from the `CPropertySheet`-derived class constructor. `AddPage` adds the `CPropertyPage` object to the property sheet's list of pages but does not actually create the window for that page. Therefore, it is not necessary to wait until creation of the property sheet window to call `AddPage`; you can call `AddPage` from the property sheet's constructor.  
  
     By default, if a property sheet has more tabs than will fit in a single row of the property sheet, the tabs will stack in multiple rows. To disable stacking, call [CPropertySheet::EnableStackedTabs](../mfc/reference/cpropertysheet-class.md#cpropertysheet__enablestackedtabs) with the parameter set to **FALSE**. You must call `EnableStackedTabs` when you create the property sheet.  
  
6.  Call [CPropertySheet::DoModal](../mfc/reference/cpropertysheet-class.md#cpropertysheet__domodal) or [Create](../mfc/reference/cpropertysheet-class.md#cpropertysheet__create) to display the property sheet. Call `DoModal` to create a property sheet as a modal dialog box. Call **Create** to create the property sheet as a modeless dialog box.  
  
7.  Exchange data between property pages and the owner of the property sheet. This is explained in the article [Exchanging Data](../mfc/exchanging-data.md).  
  
 For an example of how to use property sheets, see the MFC General sample [PROPDLG](../visual-cpp-samples.md).  
  
## See Also  
 [Property Sheets](../mfc/property-sheets-mfc.md)

