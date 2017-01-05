---
title: "Add Member Variable Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.variable.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Add Member Variable Wizard [C++]"
ms.assetid: 73e8fa99-ac1a-42e2-8fc2-4684b9eb6d4d
caps.latest.revision: 6
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
# Add Member Variable Wizard
This wizard adds a member variable declaration to the header file and, depending on the options, it can add code to the .cpp file. Once you have added the member variable using the wizard, you can edit the code in the development environment.  
  
 **Access**  
 Sets the access to the member variable. Access modifiers are keywords that specify the access other classes have to the member variable. See [Member-Access Control](../cpp/member-access-control-cpp.md) for more information about specifying access. The member variable access level is set to **public** by default.  
  
-   [public](../cpp/public-cpp.md)  
  
-   [protected](../cpp/protected-cpp.md)  
  
-   [private](../cpp/private-cpp.md)  
  
 **Variable type**  
 Sets the return type for the member variable you are adding.  
  
-   If you are adding a member variable that is not a dialog box control, select from the list of available types.  
  
     For information about the types, see [Fundamental Types](../cpp/fundamental-types-cpp.md).  
  
    |||  
    |-|-|  
    |`char`|**short**|  
    |**double**|`unsigned char`|  
    |**float**|`unsigned int`|  
    |`int`|`unsigned long`|  
    |**long**||  
  
-   If you are adding a member variable for a dialog box control, this box is filled with the type of object returned for a control or value. If you select **Control**, then **Variable type** specifies the base class of the control you select in the **Control ID** box. If the dialog box control can contain a value, and if you select **Value**, then **Variable type** specifies the appropriate type for the value that control can contain. See [Dialog Box Controls and Variable Types](../ide/dialog-box-controls-and-variable-types.md) for more information.  
  
     This value depends on the selection in **Control ID** and cannot be changed.  
  
 **Variable name**  
 Sets the name of the member variable you are adding. Member variables typically begin with the identifying string "m_," which is provided for you by default.  
  
 **Control variable**  
 Indicates that the member variable manages a control within a dialog box with [data exchange and data validation](../mfc/dialog-data-exchange-and-validation.md) support. See [DoDataExchange](../mfc/reference/cwnd-class.md#dodataexchange) for more information. This option is available only for member variables added to classes derived from [CDialog](../mfc/reference/cdialog-class.md). Select this box to activate the **Control ID** and **Control type** options.  
  
 **Control ID**  
 Sets the ID for the control variable you are adding. Select from the list the ID for the type of control for which you are adding the member variable. The list is active only when the **Control variable** box is selected, and it is limited to IDs for the controls already added to the dialog box. For example, for the standard **OK** button, the Control ID is **IDOK**.  
  
|Option|Description|  
|------------|-----------------|  
|**Control**|This option is set by default for the control type. It manages the control itself and not the state or contents (as you might want to do with a list box, combo box, or edit box) of the control.|  
|**Value**|This option is available only for control types that can contain a value (such as an edit box) or reflect a state (such as a check box), and for which you might manage range, contents, or state. See [Dialog Box Controls and Variable Types](../ide/dialog-box-controls-and-variable-types.md) for more information.|  
  
 **Category**  
 Specifies whether the variable is based on a control type or the value of the control.  
  
 **Control type**  
 Sets the type of control being added. This box is not available to change. For example, a button has the control type **BUTTON**, and a combo box has the control type **COMBOBOX**. See [Dialog Box Controls and Variable Types](../ide/dialog-box-controls-and-variable-types.md) for more information.  
  
 **Max characters**  
 Available only when **Variable type** is set to [CString](../atl-mfc-shared/reference/cstringt-class.md). Indicates the maximum number of characters that the control can hold.  
  
 **Min value**  
 Available only when the variable type is **BOOL**, `int`, **UINT**, **long**, `DWORD`, **float**, **double**, **BYTE**, **short**, [COLECurrency](../mfc/reference/colecurrency-class.md) or [CTime](../atl-mfc-shared/reference/ctime-class.md). Indicates the lowest value acceptable for a scale or date range.  
  
 **Max value**  
 Available only when the variable type is **BOOL**, `int`, **UINT**, **long**, `DWORD`, **float**, **double**, **BYTE**, **short**, `COLECurrency` or `CTime`. Indicates the highest value acceptable for a scale or date range.  
  
 **.h file**  
 For ActiveX controls, whose member variables require a wrapper class. Sets the name of the header file to add the class declaration.  
  
 **.cpp file**  
 For ActiveX controls, whose member variables require a wrapper class. Sets the name of the implementation file to add the class definition.  
  
 **Comment**  
 Provides a comment in the header file for the member variable.  
  
## See Also  
 [Adding a Member Variable](../ide/adding-a-member-variable-visual-cpp.md)