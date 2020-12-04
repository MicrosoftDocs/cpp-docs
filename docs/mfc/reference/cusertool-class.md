---
description: "Learn more about: CUserTool Class"
title: "CUserTool Class"
ms.date: "11/04/2016"
f1_keywords: ["CUserTool", "AFXUSERTOOL/CUserTool", "AFXUSERTOOL/CUserTool::CopyIconToClipboard", "AFXUSERTOOL/CUserTool::DrawToolIcon", "AFXUSERTOOL/CUserTool::GetCommand", "AFXUSERTOOL/CUserTool::GetCommandId", "AFXUSERTOOL/CUserTool::Invoke", "AFXUSERTOOL/CUserTool::Serialize", "AFXUSERTOOL/CUserTool::SetCommand", "AFXUSERTOOL/CUserTool::SetToolIcon", "AFXUSERTOOL/CUserTool::LoadDefaultIcon", "AFXUSERTOOL/CUserTool::m_strArguments", "AFXUSERTOOL/CUserTool::m_strInitialDirectory", "AFXUSERTOOL/CUserTool::m_strLabel"]
helpviewer_keywords: ["CUserTool [MFC], CopyIconToClipboard", "CUserTool [MFC], DrawToolIcon", "CUserTool [MFC], GetCommand", "CUserTool [MFC], GetCommandId", "CUserTool [MFC], Invoke", "CUserTool [MFC], Serialize", "CUserTool [MFC], SetCommand", "CUserTool [MFC], SetToolIcon", "CUserTool [MFC], LoadDefaultIcon", "CUserTool [MFC], m_strArguments", "CUserTool [MFC], m_strInitialDirectory", "CUserTool [MFC], m_strLabel"]
ms.assetid: 7c287d3e-d012-488d-b4e1-aa0f83f294bb
---
# CUserTool Class

A user tool is a menu item that runs an external application. The **Tools** tab of the **Customize** dialog box ( [CMFCToolBarsCustomizeDialog Class](../../mfc/reference/cmfctoolbarscustomizedialog-class.md)) enables the user to add user tools, and to specify the name, command, arguments, and initial directory for each user tool.

## Syntax

```
class CUserTool : public CObject
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CUserTool::CopyIconToClipboard](#copyicontoclipboard)||
|[CUserTool::DrawToolIcon](#drawtoolicon)|Draws the user tool icon in a specified rectangle.|
|[CUserTool::GetCommand](#getcommand)|Returns a string that contains the text of the command associated with the user tool.|
|[CUserTool::GetCommandId](#getcommandid)|Returns the command ID of the menu item of the user tool.|
|[CUserTool::Invoke](#invoke)|Executes the command associated with the user tool.|
|[CUserTool::Serialize](#serialize)|Reads or writes this object from or to an archive. (Overrides [CObject::Serialize](../../mfc/reference/cobject-class.md#serialize).)|
|[CUserTool::SetCommand](#setcommand)|Sets the command associated with the user tool.|
|[CUserTool::SetToolIcon](#settoolicon)|Loads the icon for the user tool from the application associated with the tool.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CUserTool::LoadDefaultIcon](#loaddefaulticon)|Loads the default icon for a user tool.|

### Data Members

|Name|Description|
|----------|-----------------|
|[CUserTool::m_strArguments](#m_strarguments)|The command-line arguments for the user tool.|
|[CUserTool::m_strInitialDirectory](#m_strinitialdirectory)|The initial directory for the user tool.|
|[CUserTool::m_strLabel](#m_strlabel)|The tool name that is displayed in the menu item for the tool.|

## Remarks

For more information about how to enable user tools in your application, see [CUserToolsManager Class](../../mfc/reference/cusertoolsmanager-class.md).

## Example

The following example demonstrates how to create a tool from a `CUserToolsManager` object, set the `m_strLabel` member variable, and set the application that the user tool runs. This code snippet is part of the [Visual Studio Demo sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#35](../../mfc/codesnippet/cpp/cusertool-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CUserTool](../../mfc/reference/cusertool-class.md)

## Requirements

**Header:** afxusertool.h

## <a name="copyicontoclipboard"></a> CUserTool::CopyIconToClipboard

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

```
BOOL CopyIconToClipboard();
```

### Return Value

### Remarks

## <a name="drawtoolicon"></a> CUserTool::DrawToolIcon

Draws the user tool icon at the center of a specified rectangle.

```cpp
void DrawToolIcon(
    CDC* pDC,
    const CRect& rectImage);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

*rectImage*<br/>
[in] Specifies the coordinates of the area to display the icon.

## <a name="getcommand"></a> CUserTool::GetCommand

Returns a string that contains the text of the command associated with the user tool.

```
const CString& GetCommand() const;
```

### Return Value

A reference to `CString` object that contains the text of the command associated with the user tool.

## <a name="getcommandid"></a> CUserTool::GetCommandId

Returns the command ID of the user tool.

```
UINT GetCommandId() const;
```

### Return Value

The command ID of this user tool.

## <a name="invoke"></a> CUserTool::Invoke

Executes the command associated with the user tool.

```
virtual BOOL Invoke();
```

### Return Value

Nonzero if the command was executed successfully; otherwise 0.

### Remarks

Calls [ShellExecute](/windows/win32/api/shellapi/nf-shellapi-shellexecutew) to execute a command associated with the user tool. The function fails if the command is empty or if [ShellExecute](/windows/win32/api/shellapi/nf-shellapi-shellexecutew) fails.

## <a name="loaddefaulticon"></a> CUserTool::LoadDefaultIcon

Loads the default icon for a user tool.

```
virtual HICON LoadDefaultIcon();
```

### Return Value

A handle to the loaded icon ( HICON), or NULL if the default icon cannot be loaded.

### Remarks

The framework calls this method when it is unable to load an icon for a user-defined tool from the executable file of the tool.

Override this method to supply your own default tool icon.

## <a name="m_strarguments"></a> CUserTool::m_strArguments

The command-line arguments for the user tool.

```
CString m_strArguments;
```

### Remarks

This string is passed to the tool when you call [CUserTool::Invoke](#invoke) or when a user clicks the command associated with this tool.

## <a name="m_strinitialdirectory"></a> CUserTool::m_strInitialDirectory

Specifies the initial directory for the user tool.

```
CString m_strInitialDirectory;
```

### Remarks

This variable specifies the initial directory that the tool executes in when you call [CUserTool::Invoke](#invoke) or when a user clicks the command associated with this tool.

## <a name="m_strlabel"></a> CUserTool::m_strLabel

The label that is displayed in the menu item for the tool.

```
CString m_strLabel;
```

## <a name="serialize"></a> CUserTool::Serialize

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

```
virtual void Serialize(CArchive& ar);
```

### Parameters

[in] *ar*<br/>

### Remarks

## <a name="setcommand"></a> CUserTool::SetCommand

Sets the application that the user tool runs.

```cpp
void SetCommand(LPCTSTR lpszCmd);
```

### Parameters

*lpszCmd*<br/>
[in] Specifies the new application to be associated with the user tool.

### Remarks

Call this method to set a new application that the user tool runs. The method destroys the old icon and loads a new icon from the given application. If it cannot load an icon from the application, it loads the default icon for a user tool by calling [CUserTool::LoadDefaultIcon](#loaddefaulticon).

## <a name="settoolicon"></a> CUserTool::SetToolIcon

Loads the icon for the user tool from the application that the tool uses.

```
virtual HICON SetToolIcon();
```

### Return Value

A handle to the loaded icon.

### Remarks

Call this method to load the icon to be displayed on the menu item. This method searches for the icon in the executable file that the tool uses. If it does not have a default icon, the icon provided by [CUserTool::LoadDefaultIcon](#loaddefaulticon) is used instead.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CWinAppEx Class](../../mfc/reference/cwinappex-class.md)<br/>
[CUserToolsManager Class](../../mfc/reference/cusertoolsmanager-class.md)
