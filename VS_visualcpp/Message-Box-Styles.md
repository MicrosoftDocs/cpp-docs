---
title: "Message-Box Styles"
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
ms.assetid: d87014c5-4ea4-4950-a27e-7bcdda67be7d
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
# Message-Box Styles
The following message-box styles are available.  
  
## Message_Box Types  
  
-   **MB_ABORTRETRYIGNORE** The message box contains three pushbuttons: Abort, Retry, and Ignore.  
  
-   **MB_OK** The message box contains one pushbutton: OK.  
  
-   **MB_OKCANCEL** The message box contains two pushbuttons: OK and Cancel.  
  
-   **MB_RETRYCANCEL** The message box contains two pushbuttons: Retry and Cancel.  
  
-   **MB_YESNO** The message box contains two pushbuttons: Yes and No.  
  
-   **MB_YESNOCANCEL** The message box contains three pushbuttons: Yes, No, and Cancel.  
  
## Message-Box Modality  
  
-   **MB_APPLMODAL** The user must respond to the message box before continuing work in the current window. However, the user can move to the windows of other applications and work in those windows. The default is **MB_APPLMODAL** if neither **MB_SYSTEMMODAL** nor **MB_TASKMODAL** is specified.  
  
-   **MB_SYSTEMMODAL** All applications are suspended until the user responds to the message box. System-modal message boxes are used to notify the user of serious, potentially damaging errors that require immediate attention and should be used sparingly.  
  
-   **MB_TASKMODAL** Similar to **MB_APPLMODAL**, but not useful within a Microsoft Foundation class application. This flag is reserved for a calling application or library that does not have a window handle available.  
  
## Message-Box Icons  
  
-   **MB_ICONEXCLAMATION** An exclamation-point icon appears in the message box.  
  
-   **MB_ICONINFORMATION** An icon consisting of an "I" in a circle appears in the message box.  
  
-   **MB_ICONQUESTION** A question-mark icon appears in the message box.  
  
-   **MB_ICONSTOP** A stop-sign icon appears in the message box.  
  
## Message-Box Default Buttons  
  
-   **MB_DEFBUTTON1** The first button is the default. Note that the first button is always the default unless **MB_DEFBUTTON2** or **MB_DEFBUTTON3** is specified.  
  
-   **MB_DEFBUTTON2** The second button is the default.  
  
-   **MB_DEFBUTTON3** The third button is the default.  
  
## See Also  
 [Styles Used by MFC](../VS_visualcpp/Styles-Used-by-MFC.md)   
 [AfxMessageBox](../Topic/AfxMessageBox.md)