---
title: "Static Styles | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SS_SUNKEN"
  - "SS_CENTER"
  - "SS_ENHMETAFILE"
  - "SS_RIGHT"
  - "SS_BLACKRECT"
  - "SS_LEFTNOWORDWRAP"
  - "SS_GRAYFRAME"
  - "SS_USERITEM"
  - "SS_GRAYRECT"
  - "SS_WHITEFRAME"
  - "SS_ETCHEDFRAME"
  - "SS_ETCHEDVERT"
  - "SS_WHITERECT"
  - "SS_PATHELLIPSIS"
  - "SS_WORDELLIPSIS"
  - "SS_NOPREFIX"
  - "SS_BITMAP"
  - "SS_SIMPLE"
  - "SS_CENTERIMAGE"
  - "SS_BLACKFRAME"
  - "SS_OWNERDRAW"
  - "SS_REALSIZEIMAGE"
  - "SS_RIGHTJUST"
  - "SS_ICON"
  - "SS_NOTIFY"
  - "SS_ETCHEDHORZ"
  - "SS_LEFT"
  - "SS_ENDELLIPSIS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SS_ICON constant"
  - "SS_WHITEFRAME constant"
  - "SS_BLACKFRAME constant"
  - "SS_ETCHEDHORZ constant"
  - "SS_OWNERDRAW constant"
  - "SS_BITMAP constant"
  - "SS_NOPREFIX constant"
  - "SS_NOTIFY constant"
  - "SS_CENTER constant"
  - "SS_REALSIZEIMAGE constant"
  - "SS_ETCHEDFRAME constant"
  - "SS_CENTERIMAGE constant"
  - "SS_SUNKEN constant"
  - "SS_ENDELLIPSIS constant"
  - "SS_WORDELLIPSIS constant"
  - "SS_WHITERECT constant"
  - "SS_ETCHEDVERT constant"
  - "SS_GRAYFRAME constant"
  - "SS_LEFTNOWORDWRAP constant"
  - "SS_LEFT constant"
  - "SS_SIMPLE constant"
  - "static styles"
  - "SS_ENHMETAFILE constant"
  - "SS_GRAYRECT constant"
  - "SS_USERITEM constant"
  - "SS_PATHELLIPSIS constant"
  - "SS_BLACKRECT constant"
  - "SS_RIGHT constant"
  - "SS_RIGHTJUST constant"
ms.assetid: a1114548-fc6d-491d-8c46-21d11b8574f5
caps.latest.revision: 12
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
# Static Styles
-   **SS_BITMAP** Specifies a bitmap is to be displayed in the static control. The given text is the name of a bitmap (not a filename) defined elsewhere in the resource file. The style ignores the nWidth and nHeight parameters; the control automatically sizes itself to accommodate the bitmap.  
  
-   **SS_BLACKFRAME** Specifies a box with a frame drawn with the same color as window frames. The default is black.  
  
-   **SS_BLACKRECT** Specifies a rectangle filled with the color used to draw window frames. The default is black.  
  
-   **SS_CENTER** Designates a simple rectangle and displays the given text centered in the rectangle. The text is formatted before it is displayed. Words that would extend past the end of a line are automatically wrapped to the beginning of the next centered line.  
  
-   **SS_CENTERIMAGE** Specifies that, if the bitmap or icon is smaller than the client area of the static control, the rest of the client area is filled with the color of the pixel in the top left corner of the bitmap or icon. If the static control contains a single line of text, the text is centered vertically in the client area of the control.  
  
-   **SS_ENDELLIPSIS** or **SS_PATHELLIPSIS** Replaces part of the given string with ellipses, if necessary, so that the result fits in the specified rectangle.  
  
     You can specify **SS_END_ELLIPSIS** to replace characters at the end of the string, or **SS_PATHELLIPSIS** to replace characters in the middle of the string. If the string contains backslash (\\) characters, **SS_PATHELLIPSIS** preserves as much of the text after the last backslash as possible.  
  
-   **SS_ENHMETAFILE** Specifies an enhanced metafile is to be displayed in the static control. The given text is the name of a metafile. An enhanced metafile static control has a fixed size; the metafile is scaled to fit the static control's client area.  
  
-   **SS_ETCHEDFRAME** Draws the frame of the static control using the **EDGE_ETCHED** edge style.  
  
-   **SS_ETCHEDHORZ** Draws the top and bottom edges of the static control using the **EDGE_ETCHED** edge style.  
  
-   **SS_ETCHEDVERT** Draws the left and right edges of the static control using the EDGE_ETCHED edge style.  
  
-   **SS_GRAYFRAME** Specifies a box with a frame drawn with the same color as the screen background (desktop). The default is gray.  
  
-   **SS_GRAYRECT** Specifies a rectangle filled with the color used to fill the screen background. The default is gray.  
  
-   **SS_ICON** Designates an icon displayed in the dialog box. The given text is the name of an icon (not a filename) defined elsewhere in the resource file. The `nWidth` and `nHeight` parameters are ignored; the icon automatically sizes itself.  
  
-   **SS_LEFT** Designates a simple rectangle and displays the given text flush-left in the rectangle. The text is formatted before it is displayed. Words that would extend past the end of a line are automatically wrapped to the beginning of the next flush-left line.  
  
-   **SS_LEFTNOWORDWRAP** Designates a simple rectangle and displays the given text flush-left in the rectangle. Tabs are expanded, but words are not wrapped. Text that extends past the end of a line is clipped.  
  
-   **SS_NOPREFIX** Unless this style is specified, Windows will interpret any ampersand (&) characters in the control's text to be accelerator prefix characters. In this case, the ampersand is removed and the next character in the string is underlined. If a static control is to contain text where this feature is not wanted, **SS_NOPREFIX** may be added. This static-control style may be included with any of the defined static controls. You can combine **SS_NOPREFIX** with other styles by using the bitwise OR operator. This is most often used when filenames or other strings that may contain an ampersand need to be displayed in a static control in a dialog box.  
  
-   **SS_NOTIFY** Sends the parent window **STN_CLICKED**, **STN_DBLCLK**, **STN_DISABLE**, and **STN_ENABLE** notification messages when the user clicks or double-clicks the control.  
  
-   **SS_OWNERDRAW** Specifies that the owner of the static control is responsible for drawing the control. The owner window receives a `WM_DRAWITEM` message whenever the control needs to be drawn.  
  
-   **SS_REALSIZEIMAGE** Prevents a static icon or bitmap control (that is, static controls that have the **SS_ICON** or **SS_BITMAP** style) from being resized as it is loaded or drawn. If the icon or bitmap is larger than the destination area, the image is clipped.  
  
-   **SS_RIGHT** Designates a simple rectangle and displays the given text flush-right in the rectangle. The text is formatted before it is displayed. Words that would extend past the end of a line are automatically wrapped to the beginning of the next flush-right line.  
  
-   **SS_RIGHTJUST** Specifies that the lower right corner of a static control with the **SS_BITMAP** or **SS_ICON** style is to remain fixed when the control is resized. Only the top and left sides are adjusted to accommodate a new bitmap or icon.  
  
-   **SS_SIMPLE** Designates a simple rectangle and displays a single line of text flush-left in the rectangle. The line of text cannot be shortened or altered in any way. (The control's parent window or dialog box must not process the `WM_CTLCOLOR` message.)  
  
-   **SS_SUNKEN** Draws a half-sunken border around a static control.  
  
-   **SS_USERITEM** Specifies a user-defined item.  
  
-   **SS_WHITEFRAME** Specifies a box with a frame drawn with the same color as the window background. The default is white.  
  
-   **SS_WHITERECT** Specifies a rectangle filled with the color used to fill the window background. The default is white.  
  
-   **SS_WORDELLIPSIS** Truncates text that does not fit and adds ellipses.  
  
## See Also  
 [Styles Used by MFC](../../mfc/reference/styles-used-by-mfc.md)   
 [CStatic::Create](../../mfc/reference/cstatic-class.md#cstatic__create)   
 [DrawEdge](http://msdn.microsoft.com/library/windows/desktop/dd162477)   
 [Static Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb760773)

