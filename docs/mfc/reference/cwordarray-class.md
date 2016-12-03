---
title: "CWordArray Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CWordArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "INT"
  - "UINT"
  - "indexed arrays"
  - "arrays [C++], indexed"
  - "WORD data type"
  - "CWordArray class"
ms.assetid: 2ba2c194-2c6c-40ff-9db4-e9dbe57e1f57
caps.latest.revision: 26
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
# CWordArray Class
Supports arrays of 16-bit words.  
  
## Syntax  
  
```  
class CWordArray : public CObject  
```  
  
## Members  
 The member functions of `CWordArray` are similar to the member functions of class [CObArray](../../mfc/reference/cobarray-class.md). Because of this similarity, you can use the `CObArray` reference documentation for member function specifics. Wherever you see a [CObject](../../mfc/reference/cobject-class.md) pointer as a function parameter or return value, substitute a **WORD**.  
  
 `CObject* CObArray::GetAt( int <nIndex> ) const;`  
  
 for example, translates to  
  
 `WORD CWordArray::GetAt( int <nIndex> ) const;`  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CObArray::CObArray](../../mfc/reference/cobarray-class.md#cobarray__cobarray)|Constructs an empty array.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CObArray::Add](../../mfc/reference/cobarray-class.md#cobarray__add)|Adds an element to the end of the array; grows the array if necessary.|  
|[CObArray::Append](../../mfc/reference/cobarray-class.md#cobarray__append)|Appends another array to the array; grows the array if necessary.|  
|[CObArray::Copy](../../mfc/reference/cobarray-class.md#cobarray__copy)|Copies another array to the array; grows the array if necessary.|  
|[CObArray::ElementAt](../../mfc/reference/cobarray-class.md#cobarray__elementat)|Returns a temporary reference to the element pointer within the array.|  
|[CObArray::FreeExtra](../../mfc/reference/cobarray-class.md#cobarray__freeextra)|Frees all unused memory above the current upper bound.|  
|[CObArray::GetAt](../../mfc/reference/cobarray-class.md#cobarray__getat)|Returns the value at a given index.|  
|[CObArray::GetCount](../../mfc/reference/cobarray-class.md#cobarray__getcount)|Gets the number of elements in this array.|  
|[CObArray::GetData](../../mfc/reference/cobarray-class.md#cobarray__getdata)|Allows access to elements in the array. Can be **NULL**.|  
|[CObArray::GetSize](../../mfc/reference/cobarray-class.md#cobarray__getsize)|Gets the number of elements in this array.|  
|[CObArray::GetUpperBound](../../mfc/reference/cobarray-class.md#cobarray__getupperbound)|Returns the largest valid index.|  
|[CObArray::InsertAt](../../mfc/reference/cobarray-class.md#cobarray__insertat)|Inserts an element (or all the elements in another array) at a specified index.|  
|[CObArray::IsEmpty](../../mfc/reference/cobarray-class.md#cobarray__isempty)|Determines if the array is empty.|  
|[CObArray::RemoveAll](../../mfc/reference/cobarray-class.md#cobarray__removeall)|Removes all the elements from this array.|  
|[CObArray::RemoveAt](../../mfc/reference/cobarray-class.md#cobarray__removeat)|Removes an element at a specific index.|  
|[CObArray::SetAt](../../mfc/reference/cobarray-class.md#cobarray__setat)|Sets the value for a given index; array not allowed to grow.|  
|[CObArray::SetAtGrow](../../mfc/reference/cobarray-class.md#cobarray__setatgrow)|Sets the value for a given index; grows the array if necessary.|  
|[CObArray::SetSize](../../mfc/reference/cobarray-class.md#cobarray__setsize)|Sets the number of elements to be contained in this array.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CObArray::operator &#91;&#93;](../../mfc/reference/cobarray-class.md#cobarray__operator_at)|Sets or gets the element at the specified index.|  
  
## Remarks  
 `CWordArray` incorporates the [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) macro to support serialization and dumping of its elements. If an array of words is stored to an archive, either with an overloaded insertion operator or with the [CObject::Serialize](../../mfc/reference/cobject-class.md#cobject__serialize) member function, each element is, in turn, serialized.  
  
> [!NOTE]
>  Before using an array, use `SetSize` to establish its size and allocate memory for it. If you do not use `SetSize`, adding elements to your array causes it to be frequently reallocated and copied. Frequent reallocation and copying are inefficient and can fragment memory.  
  
 If you need a dump of individual elements in the array, you must set the depth of the dump context to 1 or greater.  
  
 For more information on using `CWordArray`, see the article [Collections](../../mfc/collections.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CWordArray`  
  
## Requirements  
 **Header:** afxcoll.h  
  
##  <a name="icommandsource_interface"></a>  ICommandSource Interface  
 Manages commands sent from a command source object to a user control.  
  
```  
interface class ICommandSource  
```  
  
### Remarks  
 When you host a user control in an MFC View, [CWinFormsView Class](../../mfc/reference/cwinformsview-class.md) routes commands and update command UI messages to the user control to allow it to handle MFC commands (for example, frame menu items and toolbar buttons). By implementing  , you give the user control a reference to the `ICommandSource` object.  
  
 See [How to: Add Command Routing to the Windows Forms Control](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) for an example of how to use `ICommandTarget`.  
  
 For more information on using Windows Forms, see [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
##  <a name="icommandsource__addcommandhandler"></a>  ICommandSource::AddCommandHandler  
 Adds a command handler to a command source object.  
  
```  
void AddCommandHandler(
    unsigned int cmdID,  
    CommandHandler^ cmdHandler);
```  
  
### Parameters  
 `cmdID`  
 The command ID.  
  
 `cmdHandler`  
 A handle to the command handler method.  
  
### Remarks  
 This method adds the command handler `cmdHandler` to the command source object and maps the handler to `cmdID`.  
  
 See [How to: Add Command Routing to the Windows Forms Control](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) for an example of how to use `AddCommandHandler`.  
  
##  <a name="icommandsource__addcommandrangehandler"></a>  ICommandSource::AddCommandRangeHandler  
 Adds a group of command handlers to a command source object.  
  
```  
void AddCommandRangeHandler(
    unsigned int cmdIDMin,  
    unsigned int cmdIDMax,  
    CommandHandler^ cmdHandler);
```  
  
### Parameters  
 `cmdIDMin`  
 The beginning index of the command ID range.  
  
 `cmdIDMax`  
 The ending index of the command ID range.  
  
 `cmdHandler`  
 A handle to the message handler method to which the commands are mapped.  
  
### Remarks  
 This method maps a contiguous range of command IDs to a single message handler and adds it to the command source object. This is used for handling a group of related buttons with one method.  
  
##  <a name="icommandsource__addcommandrangeuihandler"></a>  ICommandSource::AddCommandRangeUIHandler  
 Adds a group of user interface command message handlers to a command source object.  
  
```  
void AddCommandRangeUIHandler(
    unsigned int cmdIDMin,   
    unsigned int cmdIDMax,   
    CommandUIHandler^ cmdUIHandler);
```  
  
### Parameters  
 `cmdIDMin`  
 The beginning index of the command ID range.  
  
 `cmdIDMax`  
 The ending index of the command ID range.  
  
 `cmdHandler`  
 A handle to the message handler method to which the commands are mapped.  
  
### Remarks  
 This method maps a contiguous range of command IDs to a single user interface command message handler and adds it to the command source object. This is used for handling a group of related buttons with one method.  
  
##  <a name="icommandsource__addcommanduihandler"></a>  ICommandSource::AddCommandUIHandler  
 Adds a user interface command message handler to a command source object.  
  
```  
void AddCommandUIHandler(
    unsigned int cmdID,   
    CommandUIHandler^ cmdUIHandler);
```  
  
### Parameters  
 `cmdID`  
 The command ID.  
  
 `cmdUIHandler`  
 A handle to the user interface command message handler method.  
  
### Remarks  
 This method adds the user interface command message handler `cmdHandler` to the command source object and maps the handler to `cmdID`.  
  
##  <a name="icommandsource__postcommand"></a>  ICommandSource::PostCommand  
 Posts a message without waiting for it to be processed.  
  
```  
void PostCommand(unsigned int command);
```  
  
### Parameters  
 `command`  
 The command ID of the message to be posted.  
  
### Remarks  
 This method asynchronously posts the message mapped to the ID specified by `command`. It calls [CWnd::PostMessage](../../mfc/reference/cwnd-class.md#cwnd__postmessage) to place the message in the window's message queue and then returns without waiting for the corresponding window to process the message.  
  
##  <a name="icommandsource__removecommandhandler"></a>  ICommandSource::RemoveCommandHandler  
 Removes a command handler from a command source object.  
  
```  
void RemoveCommandHandler(unsigned int cmdID);
```  
  
### Parameters  
 `cmdID`  
 The command ID.  
  
### Remarks  
 This method removes the command handler mapped to `cmdID` from the command source object.  
  
##  <a name="icommandsource__removecommandrangehandler"></a>  ICommandSource::RemoveCommandRangeHandler  
 Removes a group of command handlers from a command source object.  
  
```  
void RemoveCommandRangeUIHandler(
    unsigned int cmdIDMin,  
    unsigned int cmdIDMax);
```  
  
### Parameters  
 `cmdIDMin`  
 The beginning index of the command ID range.  
  
 `cmdIDMax`  
 The ending index of the command ID range.  
  
### Remarks  
 This method removes a group of message handlers, mapped to the command IDs specifed by `cmdIDMin` and `cmdIDMax`, from the command source object.  
  
##  <a name="icommandsource__removecommandrangeuihandler"></a>  ICommandSource::RemoveCommandRangeUIHandler  
 Removes a group of user interface command message handlers from a command source object.  
  
```  
void RemoveCommandRangeUIHandler(
    unsigned int cmdIDMin,  
    unsigned int cmdIDMax);
```  
  
### Parameters  
 `cmdIDMin`  
 The beginning index of the command ID range.  
  
 `cmdIDMax`  
 The ending index of the command ID range.  
  
### Remarks  
 This method removes a group of user interface command message handlers, mapped to the command IDs specifed by `cmdIDMin` and `cmdIDMax`, from the command source object.  
  
##  <a name="icommandsource__removecommanduihandler"></a>  ICommandSource::RemoveCommandUIHandler  
 Removes a user interface command message handler from a command source object.  
  
```  
void RemoveCommandUIHandler(unsigned int cmdID);
```  
  
### Parameters  
 `cmdID`  
 The command ID.  
  
### Remarks  
 This method removes the user interface command message handler mapped to `cmdID` from the command source object.  
  
##  <a name="icommandsource__sendcommand"></a>  ICommandSource::SendCommand  
 Sends a message and waits for it to be processed before returning.  
  
```  
void SendCommand(unsigned int command);
```  
  
### Parameters  
 `command`  
 The command ID of the message to be sent.  
  
### Remarks  
 This method synchronously sends the message mapped to the ID specified by `command`. It calls [CWnd::SendMessage](../../mfc/reference/cwnd-class.md#cwnd__sendmessage) to place the message in the window's message queue and waits until that window procedure has processed the message before returning.  
  
##  <a name="icommandtarget_interface"></a>  ICommandTarget Interface  
 Provides a user control with an interface to receive commands from a command source object.  
  
```  
interface class ICommandTarget  
```  
  
### Remarks  
 When you host a user control in an MFC View, [CWinFormsView](../../mfc/reference/cwinformsview-class.md) routes commands and update command UI messages to the user control to allow it to handle MFC commands (for example, frame menu items and toolbar buttons). By implementing `ICommandTarget`, you give the user control a reference to the  object.  
  
 See [How to: Add Command Routing to the Windows Forms Control](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) for an example of how to use `ICommandTarget`.  
  
 For more information on using Windows Forms, see [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
##  <a name="icommandtarget__initialize"></a>  ICommandTarget::Initialize  
 Initializes the command target object.  
  
```  
void Initialize(ICommandSource^ cmdSource);
```  
  
### Parameters  
 `cmdSource`  
 A handle to the command source object.  
  
### Remarks  
 When you host a user control in an MFC View, [CWinFormsView](../../mfc/reference/cwinformsview-class.md) routes commands and update command UI messages to the user control to allow it to handle MFC commands.  
  
 This method initializes the command target object and associates it with the specified command source object `cmdSource`. It should be called in the user control class implementation. At initialization, you should register command handlers with the command source object by calling [ICommandSource::AddCommandHandler](../../mfc/reference/icommandsource-interface.md) in the `Initialize` implementation. See [How to: Add Command Routing to the Windows Forms Control](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) for an example of how to use `Initialize` to do this.  
  
##  <a name="icommandui_interface"></a>  ICommandUI Interface  
 Manages user interface commands.  
  
```  
interface class ICommandUI  
```  
  
### Remarks  
 This interface provides methods and properties that manage user interface commands. `ICommandUI` is similar to [CCmdUI Class](../../mfc/reference/ccmdui-class.md), except that `ICommandUI` is used for MFC applications that interoperate with .NET components.  
  
 `ICommandUI` is used within an `ON_UPDATE_COMMAND_UI` handler in an  -derived class. When a user of an application activates (selects or clicks) a menu, each menu item is displayed as enabled or disabled. The target of each menu command provides this information by implementing an `ON_UPDATE_COMMAND_UI` handler. For each of the command user interface objects in your application, use the Properties window to create a message-map entry and function prototype for each handler.  
  
 For more information on how the `ICommandUI` interface is used in command routing, see [How to: Add Command Routing to the Windows Forms Control](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md).  
  
 For more information on using Windows Forms, see [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
 For more information on how user interface commands are managed in MFC, see [CCmdUI Class](../../mfc/reference/ccmdui-class.md).  
  
##  <a name="icommandui__check"></a>  ICommandUI::Check  
 Sets the user interface item for this command to the appropriate check state.  
  
```  
property UICheckState Check;  
```  
  
### Remarks  
 This property sets the user interface item for this command to the appropriate check state. Set `Check` to the following values:  
  
|Term|Definition|  
|----------|----------------|  
|0|Uncheck|  
|1|Check|  
|2|Set indeterminate|  
  
##  <a name="icommandui__continuerouting"></a>  ICommandUI::ContinueRouting  
 Tells the command routing mechanism to continue routing the current message down the chain of handlers.  
  
```  
void ContinueRouting();
```  
  
### Remarks  
 This is an advanced member function that should be used in conjunction with an [ON_COMMAND_EX](http://msdn.microsoft.com/library/0bb49090-aee8-4203-87c8-dd001d3dd26e) handler that returns `FALSE`. For more information, see Technical Note [TN006: Message Maps](../../mfc/tn006-message-maps.md).  
  
##  <a name="icommandui__enabled"></a>  ICommandUI::Enabled  
 Enables or disables the user interface item for this command.  
  
```  
property bool Enabled;  
```  
  
### Remarks  
 This property enables or disables the user interface item for this command. Set `Enabled` to `TRUE` to enable the item, `FALSE` to disable it.  
  
##  <a name="icommandui__id"></a>  ICommandUI::ID  
 Gets the ID of the user interface object represented by the `ICommandUI` object.  
  
```  
property unsigned int ID;  
```  
  
### Remarks  
 This property gets the ID (a handle) of the menu item, toolbar button, or other user interface object represented by the `ICommandUI` object.  
  
##  <a name="icommandui__index"></a>  ICommandUI::Index  
 Gets the index of the user interface object represented by the `ICommandUI` object.  
  
```  
property unsigned int Index;  
```  
  
### Remarks  
 This property gets the index (a handle) of the menu item, toolbar button, or other user interface object represented by the `ICommandUI` object.  
  
##  <a name="icommandui__radio"></a>  ICommandUI::Radio  
 Sets the user interface item for this command to the appropriate check state.  
  
```  
property bool Radio;  
```  
  
### Remarks  
 This property sets the user interface item for this command to the appropriate check state. Set `Radio` to `TRUE` to enable the item; otherwise `FALSE`.  
  
##  <a name="icommandui__text"></a>  ICommandUI::Text  
 Sets the text of the user interface item for this command.  
  
```  
property String^ Text;  
```  
  
### Remarks  
 This property sets the text of the user interface item for this command. Set `Text` to a text string handle.  
  
##  <a name="iview_interface"></a>  IView Interface  
 Implements several methods that [CWinFormsView](../../mfc/reference/cwinformsview-class.md) uses to send view notifications to a managed control.  
  
```  
interface class IView  
```  
  
### Remarks  
 `IView` implements several methods that `CWinFormsView` uses to forward common view notifications to a hosted managed control. These are [OnInitialUpdate](../../mfc/reference/iview-interface.md), [OnUpdate](../../mfc/reference/iview-interface.md) and [OnActivateView](../../mfc/reference/iview-interface.md).  
  
 `IView` is similar to [CView](../../mfc/reference/cview-class.md), but is used only with managed views and controls.  
  
 For more information on using Windows Forms, see [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
##  <a name="iview__onactivateview"></a>  IView::OnActivateView  
 Called by MFC when a view is activated or deactivated.  
  
```  
void OnActivateView(bool activate);
```  
  
### Parameters  
 `activate`  
 Indicates whether the view is being activated or deactivated.  
  
##  <a name="iview__oninitialupdate"></a>  IView::OnInitialUpdate  
 Called by the framework after the view is first attached to the document, but before the view is initially displayed.  
  
```  
void OnInitialUpdate();
```  
  
##  <a name="iview__onupdate"></a>  IView::OnUpdate  
 Called by MFC after the view's document has been modified.  
  
```  
void OnUpdate();
```  
  
### Remarks  
 This function allows the view to update its display to reflect modifications.  
  
## See Also  
 [MFC Sample COLLECT](../../visual-cpp-samples.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)



