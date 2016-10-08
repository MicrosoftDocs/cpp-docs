---
title: "DHTML Editing Command Maps"
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
ms.assetid: c1b49876-039e-4a26-bb24-ea98ccf254a1
caps.latest.revision: 11
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
# DHTML Editing Command Maps
The following macros can be used to map DHTML editing commands in             [CHtmlEditView](../VS_visualcpp/CHtmlEditView-Class.md)-derived classes. For an example of their use, see             [HTMLEdit Sample](../VS_visualcpp/Visual-C---Samples.md).  
  
### DHTML Editing Command Map Macros  
  
|||  
|-|-|  
|[DECLARE_DHTMLEDITING_CMDMAP](../Topic/DECLARE_DHTMLEDITING_CMDMAP.md)|Declares a DHTML editing command map in a class.|  
|[BEGIN_DHTMLEDITING_CMDMAP](../Topic/BEGIN_DHTMLEDITING_CMDMAP.md)|Starts the definition of a DHTML editing command map within a class.|  
|[END_DHTMLEDITING_CMDMAP](../Topic/END_DHTMLEDITING_CMDMAP.md)|Marks the end of a DHTML editing command map.|  
|[DHTMLEDITING_CMD_ENTRY](../Topic/DHTMLEDITING_CMD_ENTRY.md)|Maps a command ID to an HTML editing command.|  
|[DHTMLEDITING_CMD_ENTRY_FUNC](../Topic/DHTMLEDITING_CMD_ENTRY_FUNC.md)|Maps a command ID to an HTML editing command and message handler.|  
|[DHTMLEDITING_CMD_ENTRY_TYPE](../Topic/DHTMLEDITING_CMD_ENTRY_TYPE.md)|Maps a command ID to an HTML editing command and user interface element.|  
|[DHTMLEDITING_CMD_ENTRY_FUNC_TYPE](../Topic/DHTMLEDITING_CMD_ENTRY_FUNC_TYPE.md)|Maps a command ID to an HTML editing command, message handler, and user interface element.|  
  
##  <a name="declare_dhtmlediting_cmdmap"></a>  DECLARE_DHTMLEDITING_CMDMAP  
 Declares a DHTML editing command map in a class.  
  
```  
  
DECLARE_DHTMLEDITING_CMDMAP(  
className  
)  
  
```  
  
### Parameters  
 `className`  
 The name of the class.  
  
### Remarks  
 This macro is to be used in the definition of                         [CHtmlEditView](../VS_visualcpp/CHtmlEditView-Class.md)-derived classes.  
  
 Use                         [BEGIN_DHTMLEDITING_CMDMAP](../Topic/BEGIN_DHTMLEDITING_CMDMAP.md) to implement the map.  
  
### Example  
 See                                 [HTMLEdit Sample](../VS_visualcpp/Visual-C---Samples.md).  
  
##  <a name="begin_dhtmlediting_cmdmap"></a>  BEGIN_DHTMLEDITING_CMDMAP  
 Starts the definition of a DHTML editing command map within a class.  
  
```  
  
BEGIN_DHTMLEDITING_CMDMAP(  
className  
)  
  
```  
  
### Parameters  
 `className`  
 The name of the class containing the DHTML editing command map. This class should derive directly or indirectly from                                 [CHtmlEditView](../VS_visualcpp/CHtmlEditView-Class.md) and include the                                 [DECLARE_DHTMLEDITING_CMDMAP](../Topic/DECLARE_DHTMLEDITING_CMDMAP.md) macro within its class definition.  
  
### Remarks  
 Add a DHTML editing command map to your class to map user interface commands to HTML editing commands.  
  
 Place the                         `BEGIN_DHTMLEDITING_CMDMAP` macro in the class's implementation (.cpp) file followed by                         [DHTMLEDITING_CMD_ENTRY](../Topic/DHTMLEDITING_CMD_ENTRY.md) macros for the commands the class is to map (for example, from                         **ID_EDIT_CUT** to                         **IDM_CUT**). Use the                         [END_DHTMLEDITING_CMDMAP](../Topic/END_DHTMLEDITING_CMDMAP.md) macro to mark the end of the event map.  
  
##  <a name="end_dhtmlediting_cmdmap"></a>  END_DHTMLEDITING_CMDMAP  
 Marks the end of a DHTML editing command map.  
  
```  
  
END_DHTMLEDITING_CMDMAP(  
)  
  
```  
  
### Remarks  
 Use in conjunction with                         [BEGIN_DHTMLEDITING_CMDMAP](../Topic/BEGIN_DHTMLEDITING_CMDMAP.md).  
  
### Example  
 See                                 [HTMLEdit Sample](../VS_visualcpp/Visual-C---Samples.md).  
  
##  <a name="dhtmlediting_cmd_entry"></a>  DHTMLEDITING_CMD_ENTRY  
 Maps a command ID to an HTML editing command.  
  
```  
  
DHTMLEDITING_CMD_ENTRY(  
cmdID  
,   
dhtmlcmdID  
)  
  
```  
  
### Parameters  
 `cmdID`  
 The command ID (such as                                 **ID_EDIT_COPY**).  
  
 `dhtmlcmdID`  
 The HTML editing command to which                                 `cmdID` maps (such as                                 **IDM_COPY**).  
  
### Example  
 See                                 [HTMLEdit Sample](../VS_visualcpp/Visual-C---Samples.md).  
  
##  <a name="dhtmlediting_cmd_entry_func"></a>  DHTMLEDITING_CMD_ENTRY_FUNC  
 Maps a command ID to an HTML editing command and message handler.  
  
```  
  
DHTMLEDITING_CMD_ENTRY_FUNC(  
cmdID  
,   
dhtmlcmdID  
,   
member_func_name  
)  
  
```  
  
### Parameters  
 `cmdID`  
 The command ID (such as                                 **ID_EDIT_COPY**).  
  
 `dhtmlcmdID`  
 The HTML editing command to which                                 `cmdID` maps (such as                                 **IDM_COPY**).  
  
 `member_func_name`  
 The name of the message-handler function to which the command is mapped.  
  
### Example  
 See                                 [HTMLEdit Sample](../VS_visualcpp/Visual-C---Samples.md).  
  
##  <a name="dhtmlediting_cmd_entry_type"></a>  DHTMLEDITING_CMD_ENTRY_TYPE  
 Maps a command ID to an HTML editing command and user interface element.  
  
```  
  
DHTMLEDITING_CMD_ENTRY_TYPE(  
cmdID  
,   
dhtmlcmdID  
,   
elemType  
)  
  
```  
  
### Parameters  
 `cmdID`  
 The command ID (such as                                 **ID_EDIT_COPY**).  
  
 `dhtmlcmdID`  
 The HTML editing command to which                                 `cmdID` maps (such as                                 **IDM_COPY**).  
  
 `elemType`  
 The user interface element type; one of                                 **AFX_UI_ELEMTYPE_NORMAL**,                                 **AFX_UI_ELEMTYPE_CHECKBOX**, or                                 **AFX_UI_ELEMTYPE_RADIO**.  
  
### Example  
 See                                 [HTMLEdit Sample](../VS_visualcpp/Visual-C---Samples.md).  
  
##  <a name="dhtmlediting_cmd_entry_func_type"></a>  DHTMLEDITING_CMD_ENTRY_FUNC_TYPE  
 Maps a command ID to an HTML editing command, message handler, and user interface element.  
  
```  
  
DHTMLEDITING_CMD_ENTRY_FUNC_TYPE(  
cmdID  
,   
dhtmlcmdID  
,   
member_func_name  
,   
elemType  
)  
  
```  
  
### Parameters  
 `cmdID`  
 The command ID (such as                                 **ID_EDIT_COPY**).  
  
 `dhtmlcmdID`  
 The HTML editing command to which                                 `cmdID` maps (such as                                 **IDM_COPY**).  
  
 `member_func_name`  
 The name of the message-handler function to which the command is mapped.  
  
 `elemType`  
 The user interface element type; one of                                 **AFX_UI_ELEMTYPE_NORMAL**,                                 **AFX_UI_ELEMTYPE_CHECKBOX**, or                                 **AFX_UI_ELEMTYPE_RADIO**.  
  
### Example  
 See                                 [HTMLEdit Sample](../VS_visualcpp/Visual-C---Samples.md).  
  
## See Also  
 [Macros and Globals](../VS_visualcpp/MFC-Macros-and-Globals.md)