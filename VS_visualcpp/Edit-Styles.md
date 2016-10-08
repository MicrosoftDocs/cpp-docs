---
title: "Edit Styles"
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
ms.assetid: e6291dd6-f2cb-4ce2-ac31-32272526625c
caps.latest.revision: 9
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
# Edit Styles
-   **ES_AUTOHSCROLL** Automatically scrolls text to the right by 10 characters when the user types a character at the end of the line. When the user presses the ENTER key, the control scrolls all text back to position 0.  
  
-   **ES_AUTOVSCROLL** Automatically scrolls text up one page when the user presses ENTER on the last line.  
  
-   **ES_CENTER** Centers text in a single-line or multiline edit control.  
  
-   **ES_LEFT** Left-aligns text in a single-line or multiline edit control.  
  
-   **ES_LOWERCASE** Converts all characters to lowercase as they are typed into the edit control.  
  
-   **ES_MULTILINE** Designates a multiple-line edit control. (The default is single line.) If the **ES_AUTOVSCROLL** style is specified, the edit control shows as many lines as possible and scrolls vertically when the user presses the ENTER key. If **ES_AUTOVSCROLL** is not given, the edit control shows as many lines as possible and beeps if ENTER is pressed when no more lines can be displayed. If the **ES_AUTOHSCROLL** style is specified, the multiple-line edit control automatically scrolls horizontally when the caret goes past the right edge of the control. To start a new line, the user must press ENTER. If **ES_AUTOHSCROLL** is not given, the control automatically wraps words to the beginning of the next line when necessary; a new line is also started if ENTER is pressed. The position of the wordwrap is determined by the window size. If the window size changes, the wordwrap position changes and the text is redisplayed. Multiple-line edit controls can have scroll bars. An edit control with scroll bars processes its own scroll-bar messages. Edit controls without scroll bars scroll as described above and process any scroll messages sent by the parent window.  
  
-   **ES_NOHIDESEL** Normally, an edit control hides the selection when the control loses the input focus and inverts the selection when the control receives the input focus. Specifying **ES_NOHIDESEL** deletes this default action.  
  
-   **ES_NUMBER** Allows only digits to be entered into the edit control.  
  
-   **ES_OEMCONVERT** Text entered in the edit control is converted from the ANSI character set to the OEM character set and then back to ANSI. This ensures proper character conversion when the application calls the `AnsiToOem` Windows function to convert an ANSI string in the edit control to OEM characters. This style is most useful for edit controls that contain filenames.  
  
-   **ES_PASSWORD** Displays all characters as an asterisk (**\***) as they are typed into the edit control. An application can use the `SetPasswordChar` member function to change the character that is displayed.  
  
-   **ES_READONLY** Prevents the user from entering or editing text in the edit control.  
  
-   **ES_RIGHT** Right-aligns text in a single-line or multiline edit control.  
  
-   **ES_UPPERCASE** Converts all characters to uppercase as they are typed into the edit control.  
  
-   **ES_WANTRETURN** Specifies that a carriage return be inserted when the user presses the ENTER key while entering text into a multiple-line edit control in a dialog box. Without this style, pressing the ENTER key has the same effect as pressing the dialog boxs default pushbutton. This style has no effect on a single-line edit control.  
  
## See Also  
 [Styles Used by MFC](../VS_visualcpp/Styles-Used-by-MFC.md)   
 [CEdit::Create](../Topic/CEdit::Create.md)   
 [Edit Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb775464)