---
title: "DEVNAMES Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "DEVNAMES"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DEVNAMES"
ms.assetid: aac97f60-2169-471a-ba5d-c0baed9eed9a
caps.latest.revision: 11
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
# DEVNAMES Structure
The `DEVNAMES` structure contains strings that identify the driver, device, and output-port names for a printer.  
  
## Syntax  
  
```  
typedef struct tagDEVNAMES { /* dvnm */  
    WORD wDriverOffset;  
    WORD wDeviceOffset;  
    WORD wOutputOffset;  
    WORD wDefault; */* driver,
    device,
    and port-name strings follow wDefault */  
} DEVNAMES;  
```  
  
#### Parameters  
 *wDriverOffset*  
 (Input/Output) Specifies the offset in characters to a null-terminated string that contains the filename (without the extension) of the device driver. On input, this string is used to determine the printer to display initially in the dialog box.  
  
 *wDeviceOffset*  
 (Input/Output) Specifies the offset in characters to the null-terminated string (maximum of 32 bytes including the null) that contains the name of the device. This string must be identical to the **dmDeviceName** member of the [DEVMODE](http://msdn.microsoft.com/library/windows/desktop/dd183565) structure.  
  
 *wOutputOffset*  
 (Input/Output) Specifies the offset in characters to the null-terminated string that contains the DOS device name for the physical output medium (output port).  
  
 *wDefault*  
 Specifies whether the strings contained in the `DEVNAMES` structure identify the default printer. This string is used to verify that the default printer has not changed since the last print operation. On input, if the **DN_DEFAULTPRN** flag is set, the other values in the `DEVNAMES` structure are checked against the current default printer. If any of the strings do not match, a warning message is displayed informing the user that the document may need to be reformatted. On output, the **wDefault** member is changed only if the Print Setup dialog box was displayed and the user chose the OK button. The **DN_DEFAULTPRN** flag is set if the default printer was selected. If a specific printer is selected, the flag is not set. All other bits in this member are reserved for internal use by the Print Dialog box procedure.  
  
## Remarks  
 The **PrintDlg** function uses these strings to initialize members in the system-defined Print dialog box. When the user closes the dialog box, information about the selected printer is returned in this structure.  
  
## Requirements  
 **Header:** commdlg.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CPrintDialog::CreatePrinterDC](../../mfc/reference/cprintdialog-class.md#cprintdialog__createprinterdc)


