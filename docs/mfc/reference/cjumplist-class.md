---
description: "Learn more about: CJumpList Class"
title: "CJumpList Class"
ms.date: "03/27/2019"
f1_keywords: ["CJumpList", "AFXADV/CJumpList", "AFXADV/CJumpList::CJumpList", "AFXADV/CJumpList::AbortList", "AFXADV/CJumpList::AddDestination", "AFXADV/CJumpList::AddKnownCategory", "AFXADV/CJumpList::AddTask", "AFXADV/CJumpList::AddTasks", "AFXADV/CJumpList::AddTaskSeparator", "AFXADV/CJumpList::ClearAll", "AFXADV/CJumpList::ClearAllDestinations", "AFXADV/CJumpList::CommitList", "AFXADV/CJumpList::GetDestinationList", "AFXADV/CJumpList::GetMaxSlots", "AFXADV/CJumpList::GetRemovedItems", "AFXADV/CJumpList::InitializeList", "AFXADV/CJumpList::SetAppID"]
helpviewer_keywords: ["CJumpList [MFC], CJumpList", "CJumpList [MFC], AbortList", "CJumpList [MFC], AddDestination", "CJumpList [MFC], AddKnownCategory", "CJumpList [MFC], AddTask", "CJumpList [MFC], AddTasks", "CJumpList [MFC], AddTaskSeparator", "CJumpList [MFC], ClearAll", "CJumpList [MFC], ClearAllDestinations", "CJumpList [MFC], CommitList", "CJumpList [MFC], GetDestinationList", "CJumpList [MFC], GetMaxSlots", "CJumpList [MFC], GetRemovedItems", "CJumpList [MFC], InitializeList", "CJumpList [MFC], SetAppID"]
ms.assetid: d364d27e-f512-4b12-9872-c2a17c78ab1f
---
# CJumpList Class

A `CJumpList` is the list of shortcuts revealed when you right-click on an icon in the task bar.

## Syntax

```
class CJumpList;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CJumpList::CJumpList](#cjumplist)|Constructs a `CJumpList` object.|
|[CJumpList::~CJumpList](#_dtorcjumplist)|Destroys a `CJumpList` object.|

|Name|Description|
|----------|-----------------|
|[CJumpList::AbortList](#abortlist)|Aborts a list-building transaction without committing.|
|[CJumpList::AddDestination](#adddestination)|Overloaded. Adds destination to the list.|
|[CJumpList::AddKnownCategory](#addknowncategory)|Appends a Known Category to the list.|
|[CJumpList::AddTask](#addtask)|Overloaded. Adds items to the canonical Tasks category.|
|[CJumpList::AddTasks](#addtasks)|Adds items to the canonical Tasks category.|
|[CJumpList::AddTaskSeparator](#addtaskseparator)|Adds a separator between tasks.|
|[CJumpList::ClearAll](#clearall)|Removes all tasks and destinations that have been added to the current instance of `CJumpList` so far.|
|[CJumpList::ClearAllDestinations](#clearalldestinations)|Removes all destinations that have been added to the current instance of `CJumpList` so far.|
|[CJumpList::CommitList](#commitlist)|Ends a list-building transaction and commits the reported list to the associated store (the registry in this case.)|
|[CJumpList::GetDestinationList](#getdestinationlist)|Retrieves an interface pointer to destination list.|
|[CJumpList::GetMaxSlots](#getmaxslots)|Retrieves the maximum number of items, including category headers that can display in the calling application's destination menu.|
|[CJumpList::GetRemovedItems](#getremoveditems)|Returns array of items that represent removed destinations.|
|[CJumpList::InitializeList](#initializelist)|Begins a list-building transaction.|
|[CJumpList::SetAppID](#setappid)|Sets the Application User Model ID for the list that will be built.|

## Inheritance Hierarchy

[CJumpList](../../mfc/reference/cjumplist-class.md)

## Requirements

**Header:** afxadv.h

## <a name="_dtorcjumplist"></a> CJumpList::~CJumpList

Destroys a `CJumpList` object.

```
~CJumpList();
```

## <a name="abortlist"></a> CJumpList::AbortList

Aborts a list-building transaction without committing.

```cpp
void AbortList();
```

### Remarks

Calling this method has the same effect as destroying `CJumpList` without calling `CommitList`.

## <a name="adddestination"></a> CJumpList::AddDestination

Adds destination to the list.

```
BOOL AddDestination(
    LPCTSTR lpcszCategoryName,
    LPCTSTR strDestinationPath);

BOOL AddDestination(
    LPCTSTR strCategoryName,
    IShellItem* pShellItem);

BOOL AddDestination(
    LPCTSTR strCategoryName,
    IShellLink* pShellLink);
```

### Parameters

*lpcszCategoryName*<br/>
Specifies a category name. If the specified category does not exist, it will be created.

*strDestinationPath*<br/>
Specifies a path to destination file.

*strCategoryName*<br/>
Specifies a category name. If the specified category does not exist, it will be created.

*pShellItem*<br/>
Specifies a Shell Item representing the destination being added.

*pShellLink*<br/>
Specifies a Shell Link representing the destination being added.

### Return Value

### Remarks

The instance of `CJumpList` internally accumulates added destinations and then commits them in `CommitList`.

## <a name="addknowncategory"></a> CJumpList::AddKnownCategory

Appends a Known Category to the list.

```
BOOL AddKnownCategory(KNOWNDESTCATEGORY category);
```

### Parameters

*category*<br/>
Specifies a known category type. Can be either KDC_RECENT, or KDC_KNOWN.

### Return Value

### Remarks

Known Categories are the Frequent and Recent categories that we will automatically calculate for every application that utilizes `SHAddToRecentDocs` (or indirectly uses it as the shell will call it on the application's behalf in some scenarios).

## <a name="addtask"></a> CJumpList::AddTask

Adds items to the canonical Tasks category.

```
BOOL AddTask(
    LPCTSTR strTargetExecutablePath,
    LPCTSTR strCommandLineArgs,
    LPCTSTR strTitle,
    LPCTSTR strIconLocation,
    int iIconIndex);

BOOL AddTask(IShellLink* pShellLink);
```

### Parameters

*strTargetExecutablePath*<br/>
Specifies the target task path.

*strCommandLineArgs*<br/>
Specifies command-line arguments of the executable specified by *strTargetExecutablePath*.

*strTitle*<br/>
Task name that will be displayed in the Destination List.

*strIconLocation*<br/>
Location of icon that will be displayed in the Destination List along with the title.

*iIconIndex*<br/>
Icon index.

*pShellLink*<br/>
Shell Link that represents a task to be added.

### Return Value

### Remarks

The instance of `CJumpList` accumulates specified tasks and adds them to the Destination List during `CommitList`. Task items will appear in a category at the bottom of the application's destination menu. This category takes precedence over all other categories when it is filled in the UI.

## <a name="addtasks"></a> CJumpList::AddTasks

Adds items to the canonical Tasks category.

```
BOOL AddTasks(IObjectArray* pObjectCollection);
```

### Parameters

*pObjectCollection*<br/>
A collection of tasks to be added.

### Return Value

### Remarks

The instance of CJumpList accumulates specified tasks and adds them to the Destination List during `CommitList`. Task items will appear in a category at the bottom of the application's destination menu. This category takes precedence over all other categories when it is filled in the UI.

## <a name="addtaskseparator"></a> CJumpList::AddTaskSeparator

Adds a separator between tasks.

```
BOOL AddTaskSeparator();
```

### Return Value

Nonzero if it is successful, 0 if it is not.

## <a name="cjumplist"></a> CJumpList::CJumpList

Constructs a `CJumpList` object.

```
CJumpList(BOOL bAutoCommit = TRUE);
```

### Parameters

*bAutoCommit*<br/>
If this parameter is FALSE the list is not automatically committed in  destructor.

## <a name="clearall"></a> CJumpList::ClearAll

Removes all tasks and destinations that have been added to the current instance of `CJumpList` so far.

```cpp
void ClearAll();
```

### Remarks

This method clears and releases all data and internal interfaces.

## <a name="clearalldestinations"></a> CJumpList::ClearAllDestinations

Removes all destinations that have been added to the current instance of CJumpList so far.

```cpp
void ClearAllDestinations();
```

### Remarks

Call this function if you need to remove all destinations that have been added so far in the current session of destination list building and add other destinations again. If the internal `ICustomDestinationList` has been initialized, it's left alive.

## <a name="commitlist"></a> CJumpList::CommitList

Ends a list-building transaction and commits the reported list to the associated store (the registry in this case).

```
BOOL CommitList();
```

### Return Value

### Remarks

The commit is atomic. An error will be returned if the commit fails.  When `CommitList` is called, the current list of removed items will be cleaned up. Calling this method resets the object so that it does not have an active list-building transaction. To update the list, `BeginList` needs to be called again.

## <a name="getdestinationlist"></a> CJumpList::GetDestinationList

Retrieves an interface pointer to destination list.

```
ICustomDestinationList* GetDestinationList();
```

### Return Value

### Remarks

If the jump list has not been initialized, or has been committed or aborted, the returned value will be NULL.

## <a name="getmaxslots"></a> CJumpList::GetMaxSlots

Retrieves the maximum number of items, including category headers that can display in the calling application's destination menu.

```
UINT GetMaxSlots() const;
```

### Return Value

### Remarks

Applications may only report a number of items and category headers combined up to this value. If calls to `AppendCategory`, `AppendKnownCategory`, or `AddUserTasks` exceed this number, they will return failure.

## <a name="getremoveditems"></a> CJumpList::GetRemovedItems

Returns array of items that represent removed destinations.

```
IObjectArray* GetRemovedItems();
```

### Return Value

### Remarks

The removed destinations are retrieved during initialization of jump list. When generating a new destination list, applications are expected to first process the removed destinations list, clearing their tracking data for any item returned by the removed list enumerator. If an application attempts to provide an item that was just removed in the transaction that the current call to `BeginList` started, the method call that re-added that item will fail, to ensure that applications are respecting the removed list.

## <a name="initializelist"></a> CJumpList::InitializeList

Begins a list-building transaction.

```
BOOL InitializeList();
```

### Return Value

### Remarks

You don't need to call this method explicitly unless you wish to retrieve a pointer to `ICustomDestinationList` using `GetDestinationList`, the number of available slots using `GetMaxSlots`, or list of removed items using `GetRemovedItems`.

## <a name="setappid"></a> CJumpList::SetAppID

Sets the Application User Model ID for the list that will be built.

```cpp
void SetAppID(LPCTSTR strAppID);
```

### Parameters

*strAppID*<br/>
A string that specifies the Application User Model ID.

## See also

[Classes](../../mfc/reference/mfc-classes.md)
