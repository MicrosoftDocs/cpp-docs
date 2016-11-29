---
title: "Combo-Box Styles | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CBS_LOWERCASE"
  - "CBS_SORT"
  - "CBS_OWNERDRAWVARIABLE"
  - "CBS_OEMCONVERT"
  - "CBS_AUTOHSCROLL"
  - "CBS_NOINTEGRALHEIGHT"
  - "CBS_SIMPLE"
  - "CBS_DROPDOWNLIST"
  - "CBS_DROPDOWN"
  - "CBS_UPPERCASE"
  - "CBS_HASSTRINGS"
  - "CBS_DISABLENOSCROLL"
  - "CBS_OWNERDRAWFIXED"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CBS_OWNERDRAWVARIABLE constant"
  - "CBS_NOINTEGRALHEIGHT constant"
  - "CBS_SIMPLE constant"
  - "CBS_AUTOHSCROLL constant"
  - "CBS_OEMCONVERT constant"
  - "CBS_DISABLENOSCROLL constant"
  - "CBS_HASSTRINGS constant"
  - "CBS_LOWERCASE constant"
  - "CBS_SORT constant"
  - "CBS_DROPDOWN constant"
  - "CBS_OWNERDRAWFIXED constant"
  - "combo boxes, styles"
  - "CBS_UPPERCASE constant"
  - "CBS_DROPDOWNLIST constant"
ms.assetid: d21a5023-e6a2-495b-a6bd-010a515cbc63
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Combo-Box Styles
The following combo-box styles are available in MFC.  
  
-   **CBS_AUTOHSCROLL** Automatically scrolls the text in the edit control to the right when the user types a character at the end of the line. If this style is not set, only text that fits within the rectangular boundary is allowed.  
  
-   **CBS_DISABLENOSCROLL** The list box shows a disabled vertical scroll bar when the list box does not contain enough items to scroll. Without this style, the scroll bar is hidden when the list box does not contain enough items.  
  
-   **CBS_DROPDOWN** Similar to **CBS_SIMPLE**, except that the list box is not displayed unless the user selects an icon next to the edit control.  
  
-   **CBS_DROPDOWNLIST** Similar to **CBS_DROPDOWN**, except that the edit control is replaced by a static-text item that displays the current selection in the list box.  
  
-   **CBS_HASSTRINGS** An owner-draw combo box contains items consisting of strings. The combo box maintains the memory and pointers for the strings so the application can use the `GetText` member function to retrieve the text for a particular item.  
  
-   **CBS_LOWERCASE** Converts to lowercase all text in both the selection field and the list.  
  
-   **CBS_NOINTEGRALHEIGHT** Specifies that the size of the combo box is exactly the size specified by the application when it created the combo box. Normally, Windows sizes a combo box so that the combo box does not display partial items.  
  
-   **CBS_OEMCONVERT** Text entered in the combo-box edit control is converted from the ANSI character set to the OEM character set and then back to ANSI. This ensures proper character conversion when the application calls the `AnsiToOem` Windows function to convert an ANSI string in the combo box to OEM characters. This style is most useful for combo boxes that contain filenames and applies only to combo boxes created with the **CBS_SIMPLE** or **CBS_DROPDOWN** styles.  
  
-   **CBS_OWNERDRAWFIXED** The owner of the list box is responsible for drawing its contents; the items in the list box are all the same height.  
  
-   **CBS_OWNERDRAWVARIABLE** The owner of the list box is responsible for drawing its contents; the items in the list box are variable in height.  
  
-   **CBS_SIMPLE** The list box is displayed at all times. The current selection in the list box is displayed in the edit control.  
  
-   **CBS_SORT** Automatically sorts strings entered into the list box.  
  
-   **CBS_UPPERCASE** Converts to uppercase all text in both the selection field and the list.  
  
## See Also  
 [Styles Used by MFC](../../mfc/reference/styles-used-by-mfc.md)   
 [CComboBox::Create](ccombobox-class.md#ccombobox__create   



