---
description: "Learn more about: DHTML Editing Command Maps"
title: "DHTML Editing Command Maps"
ms.date: "11/04/2016"
ms.assetid: c1b49876-039e-4a26-bb24-ea98ccf254a1
---
# DHTML Editing Command Maps

The following macros can be used to map DHTML editing commands in [CHtmlEditView](../../mfc/reference/chtmleditview-class.md)-derived classes. For an example of their use, see [HTMLEdit Sample](../../overview/visual-cpp-samples.md).

### DHTML Editing Command Map Macros

|Name|Description|
|-|-|
|[DECLARE_DHTMLEDITING_CMDMAP](#declare_dhtmlediting_cmdmap)|Declares a DHTML editing command map in a class.|
|[BEGIN_DHTMLEDITING_CMDMAP](#begin_dhtmlediting_cmdmap)|Starts the definition of a DHTML editing command map within a class.|
|[END_DHTMLEDITING_CMDMAP](#end_dhtmlediting_cmdmap)|Marks the end of a DHTML editing command map.|
|[DHTMLEDITING_CMD_ENTRY](#dhtmlediting_cmd_entry)|Maps a command ID to an HTML editing command.|
|[DHTMLEDITING_CMD_ENTRY_FUNC](#dhtmlediting_cmd_entry_func)|Maps a command ID to an HTML editing command and message handler.|
|[DHTMLEDITING_CMD_ENTRY_TYPE](#dhtmlediting_cmd_entry_type)|Maps a command ID to an HTML editing command and user interface element.|
|[DHTMLEDITING_CMD_ENTRY_FUNC_TYPE](#dhtmlediting_cmd_entry_func_type)|Maps a command ID to an HTML editing command, message handler, and user interface element.|

## <a name="declare_dhtmlediting_cmdmap"></a> DECLARE_DHTMLEDITING_CMDMAP

Declares a DHTML editing command map in a class.

```
DECLARE_DHTMLEDITING_CMDMAP(className)
```

### Parameters

*className*<br/>
The name of the class.

### Remarks

This macro is to be used in the definition of [CHtmlEditView](../../mfc/reference/chtmleditview-class.md)-derived classes.

Use [BEGIN_DHTMLEDITING_CMDMAP](#begin_dhtmlediting_cmdmap) to implement the map.

### Example

See [HTMLEdit Sample](../../overview/visual-cpp-samples.md).

### Requirements

  **Header** afxhtml.h

## <a name="begin_dhtmlediting_cmdmap"></a> BEGIN_DHTMLEDITING_CMDMAP

Starts the definition of a DHTML editing command map within a class.

```
BEGIN_DHTMLEDITING_CMDMAP(className)
```

### Parameters

*className*<br/>
The name of the class containing the DHTML editing command map. This class should derive directly or indirectly from [CHtmlEditView](../../mfc/reference/chtmleditview-class.md) and include the [DECLARE_DHTMLEDITING_CMDMAP](#declare_dhtmlediting_cmdmap) macro within its class definition.

### Remarks

Add a DHTML editing command map to your class to map user interface commands to HTML editing commands.

Place the BEGIN_DHTMLEDITING_CMDMAP macro in the class's implementation (.cpp) file followed by [DHTMLEDITING_CMD_ENTRY](#dhtmlediting_cmd_entry) macros for the commands the class is to map (for example, from ID_EDIT_CUT to IDM_CUT). Use the [END_DHTMLEDITING_CMDMAP](#end_dhtmlediting_cmdmap) macro to mark the end of the event map.

### Requirements

  **Header** afxhtml.h

## <a name="end_dhtmlediting_cmdmap"></a> END_DHTMLEDITING_CMDMAP

Marks the end of a DHTML editing command map.

```
END_DHTMLEDITING_CMDMAP()
```

### Remarks

Use in conjunction with [BEGIN_DHTMLEDITING_CMDMAP](#begin_dhtmlediting_cmdmap).

### Example

See [HTMLEdit Sample](../../overview/visual-cpp-samples.md).

### Requirements

  **Header** afxhtml.h

## <a name="dhtmlediting_cmd_entry"></a> DHTMLEDITING_CMD_ENTRY

Maps a command ID to an HTML editing command.

```
DHTMLEDITING_CMD_ENTRY(cmdID,  dhtmlcmdID)
```

### Parameters

*cmdID*<br/>
The command ID (such as ID_EDIT_COPY).

*dhtmlcmdID*<br/>
The HTML editing command to which *cmdID* maps (such as IDM_COPY).

### Example

See [HTMLEdit Sample](../../overview/visual-cpp-samples.md).

### Requirements

  **Header** afxhtml.h

## <a name="dhtmlediting_cmd_entry_func"></a> DHTMLEDITING_CMD_ENTRY_FUNC

Maps a command ID to an HTML editing command and message handler.

```
DHTMLEDITING_CMD_ENTRY_FUNC(cmdID, dhtmlcmdID,  member_func_name)
```

### Parameters

*cmdID*<br/>
The command ID (such as ID_EDIT_COPY).

*dhtmlcmdID*<br/>
The HTML editing command to which *cmdID* maps (such as IDM_COPY).

*member_func_name*<br/>
The name of the message-handler function to which the command is mapped.

### Example

See [HTMLEdit Sample](../../overview/visual-cpp-samples.md).

### Requirements

  **Header** afxhtml.h

## <a name="dhtmlediting_cmd_entry_type"></a> DHTMLEDITING_CMD_ENTRY_TYPE

Maps a command ID to an HTML editing command and user interface element.

```
DHTMLEDITING_CMD_ENTRY_TYPE(cmdID  ,   dhtmlcmdID  ,    elemType)
```

### Parameters

*cmdID*<br/>
The command ID (such as ID_EDIT_COPY).

*dhtmlcmdID*<br/>
The HTML editing command to which *cmdID* maps (such as IDM_COPY).

*elemType*<br/>
The user interface element type; one of AFX_UI_ELEMTYPE_NORMAL, AFX_UI_ELEMTYPE_CHECKBOX, or AFX_UI_ELEMTYPE_RADIO.

### Example

See [HTMLEdit Sample](../../overview/visual-cpp-samples.md).

### Requirements

  **Header** afxhtml.h

## <a name="dhtmlediting_cmd_entry_func_type"></a> DHTMLEDITING_CMD_ENTRY_FUNC_TYPE

Maps a command ID to an HTML editing command, message handler, and user interface element.

```
DHTMLEDITING_CMD_ENTRY_FUNC_TYPE(cmdID, dhtmlcmdID, member_func_name,  elemType)
```

### Parameters

*cmdID*<br/>
The command ID (such as ID_EDIT_COPY).

*dhtmlcmdID*<br/>
The HTML editing command to which *cmdID* maps (such as IDM_COPY).

*member_func_name*<br/>
The name of the message-handler function to which the command is mapped.

*elemType*<br/>
The user interface element type; one of AFX_UI_ELEMTYPE_NORMAL, AFX_UI_ELEMTYPE_CHECKBOX, or AFX_UI_ELEMTYPE_RADIO.

### Example

See [HTMLEdit Sample](../../overview/visual-cpp-samples.md).

### Requirements

  **Header** afxhtml.h

## See also

[Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)
