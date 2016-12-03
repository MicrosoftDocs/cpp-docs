---
title: "CUserTool Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CUserTool"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CUserTool class"
ms.assetid: 7c287d3e-d012-488d-b4e1-aa0f83f294bb
caps.latest.revision: 25
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
|[CUserTool::CopyIconToClipboard](#cusertool__copyicontoclipboard)||  
|[CUserTool::DrawToolIcon](#cusertool__drawtoolicon)|Draws the user tool icon in a specified rectangle.|  
|[CUserTool::GetCommand](#cusertool__getcommand)|Returns a string that contains the text of the command associated with the user tool.|  
|[CUserTool::GetCommandId](#cusertool__getcommandid)|Returns the command ID of the menu item of the user tool.|  
|[CUserTool::Invoke](#cusertool__invoke)|Executes the command associated with the user tool.|  
|[CUserTool::Serialize](#cusertool__serialize)|Reads or writes this object from or to an archive. (Overrides [CObject::Serialize](../../mfc/reference/cobject-class.md#cobject__serialize).)|  
|[CUserTool::SetCommand](#cusertool__setcommand)|Sets the command associated with the user tool.|  
|[CUserTool::SetToolIcon](#cusertool__settoolicon)|Loads the icon for the user tool from the application associated with the tool.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CUserTool::LoadDefaultIcon](#cusertool__loaddefaulticon)|Loads the default icon for a user tool.|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CUserTool::m_strArguments](#cusertool__m_strarguments)|The command-line arguments for the user tool.|  
|[CUserTool::m_strInitialDirectory](#cusertool__m_strinitialdirectory)|The initial directory for the user tool.|  
|[CUserTool::m_strLabel](#cusertool__m_strlabel)|The tool name that is displayed in the menu item for the tool.|  
  
## Remarks  
 For more information about how to enable user tools in your application, see [CUserToolsManager Class](../../mfc/reference/cusertoolsmanager-class.md).  
  
## Example  
 The following example demonstrates how to create a tool from a `CUserToolsManager` object, set the `m_strLabel` member variable, and set the application that the user tool runs. This code snippet is part of the [Visual Studio Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#35](../../mfc/codesnippet/cpp/cusertool-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CUserTool](../../mfc/reference/cusertool-class.md)  
  
## Requirements  
 **Header:** afxusertool.h  
  
##  <a name="cusertool__copyicontoclipboard"></a>  CUserTool::CopyIconToClipboard  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL CopyIconToClipboard();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cusertool__drawtoolicon"></a>  CUserTool::DrawToolIcon  
 Draws the user tool icon at the center of a specified rectangle.  
  
```  
void DrawToolIcon(
    CDC* pDC,  
    const CRect& rectImage);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rectImage`  
 Specifies the coordinates of the area to display the icon.  
  
##  <a name="cusertool__getcommand"></a>  CUserTool::GetCommand  
 Returns a string that contains the text of the command associated with the user tool.  
  
```  
const CString& GetCommand() const;

 
```  
  
### Return Value  
 A reference to `CString` object that contains the text of the command associated with the user tool.  
  
##  <a name="cusertool__getcommandid"></a>  CUserTool::GetCommandId  
 Returns the command ID of the user tool.  
  
```  
UINT GetCommandId() const;

 
```  
  
### Return Value  
 The command ID of this user tool.  
  
##  <a name="cusertool__invoke"></a>  CUserTool::Invoke  
 Executes the command associated with the user tool.  
  
```  
virtual BOOL Invoke();
```  
  
### Return Value  
 Nonzero if the command was executed successfully; otherwise 0.  
  
### Remarks  
 Calls [ShellExecute](http://msdn.microsoft.com/library/windows/desktop/bb762153) to execute a command associated with the user tool. The function fails if the command is empty or if [ShellExecute](http://msdn.microsoft.com/library/windows/desktop/bb762153) fails.  
  
##  <a name="cusertool__loaddefaulticon"></a>  CUserTool::LoadDefaultIcon  
 Loads the default icon for a user tool.  
  
```  
virtual HICON LoadDefaultIcon();
```  
  
### Return Value  
 A handle to the loaded icon ( `HICON`), or `NULL` if the default icon cannot be loaded.  
  
### Remarks  
 The framework calls this method when it is unable to load an icon for a user-defined tool from the executable file of the tool.  
  
 Override this method to supply your own default tool icon.  
  
##  <a name="cusertool__m_strarguments"></a>  CUserTool::m_strArguments  
 The command-line arguments for the user tool.  
  
```  
CString m_strArguments;  
```  
  
### Remarks  
 This string is passed to the tool when you call [CUserTool::Invoke](#cusertool__invoke) or when a user clicks the command associated with this tool.  
  
##  <a name="cusertool__m_strinitialdirectory"></a>  CUserTool::m_strInitialDirectory  
 Specifies the initial directory for the user tool.  
  
```  
CString m_strInitialDirectory;  
```  
  
### Remarks  
 This variable specifies the initial directory that the tool executes in when you call [CUserTool::Invoke](#cusertool__invoke) or when a user clicks the command associated with this tool.  
  
##  <a name="cusertool__m_strlabel"></a>  CUserTool::m_strLabel  
 The label that is displayed in the menu item for the tool.  
  
```  
CString m_strLabel;  
```  
  
##  <a name="cusertool__serialize"></a>  CUserTool::Serialize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void Serialize(CArchive& ar);
```  
  
### Parameters  
 [in] `ar`  
  
### Remarks  
  
##  <a name="cusertool__setcommand"></a>  CUserTool::SetCommand  
 Sets the application that the user tool runs.  
  
```  
void SetCommand(LPCTSTR lpszCmd);
```  
  
### Parameters  
 [in] `lpszCmd`  
 Specifies the new application to be associated with the user tool.  
  
### Remarks  
 Call this method to set a new application that the user tool runs. The method destroys the old icon and loads a new icon from the given application. If it cannot load an icon from the application, it loads the default icon for a user tool by calling [CUserTool::LoadDefaultIcon](#cusertool__loaddefaulticon).  
  
##  <a name="cusertool__settoolicon"></a>  CUserTool::SetToolIcon  
 Loads the icon for the user tool from the application that the tool uses.  
  
```  
virtual HICON SetToolIcon();
```  
  
### Return Value  
 A handle to the loaded icon.  
  
### Remarks  
 Call this method to load the icon to be displayed on the menu item. This method searches for the icon in the executable file that the tool uses. If it does not have a default icon, the icon provided by [CUserTool::LoadDefaultIcon](#cusertool__loaddefaulticon) is used instead.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CWinAppEx Class](../../mfc/reference/cwinappex-class.md)   
 [CUserToolsManager Class](../../mfc/reference/cusertoolsmanager-class.md)
