---
description: "Learn more about: CMFCCmdUsageCount Class"
title: "CMFCCmdUsageCount Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCCmdUsageCount", "AFXCMDUSAGECOUNT/CMFCCmdUsageCount", "AFXCMDUSAGECOUNT/CMFCCmdUsageCount::AddCmd", "AFXCMDUSAGECOUNT/CMFCCmdUsageCount::GetCount", "AFXCMDUSAGECOUNT/CMFCCmdUsageCount::HasEnoughInformation", "AFXCMDUSAGECOUNT/CMFCCmdUsageCount::IsFreqeuntlyUsedCmd", "AFXCMDUSAGECOUNT/CMFCCmdUsageCount::Reset", "AFXCMDUSAGECOUNT/CMFCCmdUsageCount::Serialize", "AFXCMDUSAGECOUNT/CMFCCmdUsageCount::SetOptions"]
helpviewer_keywords: ["CMFCCmdUsageCount [MFC], AddCmd", "CMFCCmdUsageCount [MFC], GetCount", "CMFCCmdUsageCount [MFC], HasEnoughInformation", "CMFCCmdUsageCount [MFC], IsFreqeuntlyUsedCmd", "CMFCCmdUsageCount [MFC], Reset", "CMFCCmdUsageCount [MFC], Serialize", "CMFCCmdUsageCount [MFC], SetOptions"]
ms.assetid: 9c33b783-37c0-43ea-9f31-3c75e246c841
---
# CMFCCmdUsageCount Class

Tracks the usage count of Windows messages, such as when the user selects an item from a menu.

## Syntax

```
class CMFCCmdUsageCount : public CObject
```

## Members

### Public Constructors

|Name|Description|
|-|-|
|`CMFCCmdUsageCount::CMFCCmdUsageCount`|Default constructor.|
|`CMFCCmdUsageCount::~CMFCCmdUsageCount`|Destructor.|

### Public Methods

|Name|Description|
|-|-|
|[CMFCCmdUsageCount::AddCmd](#addcmd)|Increments by one the counter that is associated with the given command.|
|[CMFCCmdUsageCount::GetCount](#getcount)|Retrieves the usage count that is associated with the given command ID.|
|[CMFCCmdUsageCount::HasEnoughInformation](#hasenoughinformation)|Determines whether this object has collected the minimum amount of tracking data.|
|[CMFCCmdUsageCount::IsFreqeuntlyUsedCmd](#isfreqeuntlyusedcmd)|Determines whether the given command is frequently used.|
|[CMFCCmdUsageCount::Reset](#reset)|Clears the usage count of all commands.|
|[CMFCCmdUsageCount::Serialize](#serialize)|Reads this object from an archive or writes it to an archive. (Overrides [CObject::Serialize](../../mfc/reference/cobject-class.md#serialize).)|
|[CMFCCmdUsageCount::SetOptions](#setoptions)|Sets the values of shared `CMFCCmdUsageCount` class data members.|

### Data Members

|Name|Description|
|-|-|
|`m_CmdUsage`|A `CMap` object that maps commands to their usage counts.|
|`m_nMinUsagePercentage`|The minimum usage percentage for a command to be frequently used.|
|`m_nStartCount`|The start counter that is used to determine whether this object has collected the minimum amount of tracking data.|
|`m_nTotalUsage`|The count of all tracked commands.|

### Remarks

The `CMFCCmdUsageCount` class maps each numeric Windows message identifier to a 32-bit unsigned integer counter. `CMFCToolBar` uses this class to display frequently-used toolbar items. For more information about `CMFCToolBar`, see [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md).

You can persist `CMFCCmdUsageCount` class data between runs of your program. Use the [CMFCCmdUsageCount::Serialize](#serialize) method to serialize class member data and the [CMFCCmdUsageCount::SetOptions](#setoptions) method to set shared member data.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CMFCCmdUsageCount](../../mfc/reference/cmfccmdusagecount-class.md)

## Requirements

**Header:** afxcmdusagecount.h

## <a name="addcmd"></a> CMFCCmdUsageCount::AddCmd

Increments by one the counter that is associated with the given command.

```cpp
void AddCmd(UINT uiCmd);
```

### Parameters

*uiCmd*\
[in] Specifies the command counter to increment.

### Remarks

This method adds a new entry to the map structure of command counts, `m_CmdUsage`, if the entry does not already exist.

This method does nothing in the following cases:

- The toolbar framework is in customization mode (the [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode) method returns a nonzero value).

- The command refers to a submenu or menu separator ( *uiCmd* equals 0 or -1).

- *uiCmd* refers to a standard command (the global `IsStandardCommand` function returns a nonzero value).

## <a name="getcount"></a> CMFCCmdUsageCount::GetCount

Retrieves the usage count that is associated with the given command ID.

```
UINT GetCount(UINT uiCmd) const;
```

### Parameters

*uiCmd*\
[in] The ID of the command counter to retrieve.

### Return Value

The usage count that is associated with the given command ID.

## <a name="hasenoughinformation"></a> CMFCCmdUsageCount::HasEnoughInformation

Determines whether this object has received the minimum amount of tracking data.

```
BOOL HasEnoughInformation() const;
```

### Return Value

Nonzero if this object has received the minimum amount of tracking data; otherwise 0.

### Remarks

This method returns a nonzero value if the total count, `m_nTotalUsage`, of all tracked commands is equal to or larger than the initial count, `m_nStartCount`. By default, the framework sets the initial count 0. You can override this value by using the [CMFCCmdUsageCount::SetOptions](#setoptions) method.

This method is used by [CMFCMenuBar::IsShowAllCommands](../../mfc/reference/cmfcmenubar-class.md#isshowallcommands) to determine whether to show all available menu commands.

## <a name="isfreqeuntlyusedcmd"></a> CMFCCmdUsageCount::IsFreqeuntlyUsedCmd

Determines whether the given command is frequently used.

```
BOOL IsFreqeuntlyUsedCmd(UINT uiCmd) const;
```

### Parameters

*uiCmd*\
[in] Specifies the command to check.

### Return Value

Nonzero if the command is frequently used; otherwise 0.

### Remarks

This method returns 0 if the total command usage, `m_nTotalUsage`, is 0. Otherwise, this method returns nonzero if the percentage of which the specified command is used is larger than the minimum percentage, `m_nMinUsagePercentage`. By default, the framework sets the minimum percentage to 5. You can override this value by using the [CMFCCmdUsageCount::SetOptions](#setoptions) method. If the minimum percentage is 0, this method returns nonzero if the specified command count is larger than 0.

[CMFCToolBar::IsCommandRarelyUsed](../../mfc/reference/cmfctoolbar-class.md#iscommandrarelyused) uses this method to determine whether a command is rarely used.

## <a name="reset"></a> CMFCCmdUsageCount::Reset

Clears the usage count of all commands.

```cpp
void Reset();
```

### Remarks

Call this method to clear all entries from the map structure of command counts, `m_CmdUsage`, and to reset the total command usage, `m_nTotalUsage`, counter to 0.

## <a name="serialize"></a> CMFCCmdUsageCount::Serialize

Reads this object from an archive, or writes it to an archive.

```
virtual void Serialize(CArchive& ar);
```

### Parameters

*ar*\
[in] A `CArchive` object to serialize from or to.

### Remarks

This method serializes the map structure of command counts, `m_CmdUsage`, and the total command usage, `m_nTotalUsage`, counter from or to the specified archive.

For serialization examples, see [Serialization: Serializing an Object](../../mfc/serialization-serializing-an-object.md).

## <a name="setoptions"></a> CMFCCmdUsageCount::SetOptions

Sets the values of shared `CMFCCmdUsageCount` class data members.

```
static BOOL __stdcall SetOptions(
    UINT nStartCount,
    UINT nMinUsagePercentage);
```

### Parameters

*nStartCount*\
[in] The new initial count of all tracked commands.

*nMinUsagePercentage*\
[in] The new minimum usage percentage.

### Return Value

TRUE if the method succeeds, FALSE if the *nMinUsagePercentage* parameter is larger than or equal to 100.

### Remarks

This method sets the shared `CMFCCmdUsageCount` class data members `m_nStartCount` and `m_nMinUsagePercentage` to *nStartCount* and *nMinUsagePercentage*, respectively. `m_nStartCount` is used by the [CMFCCmdUsageCount::HasEnoughInformation](#hasenoughinformation) method to determine whether this object has collected the minimum amount of tracking data. `m_nMinUsagePercentage` is used by the [CMFCCmdUsageCount::IsFreqeuntlyUsedCmd](#isfreqeuntlyusedcmd) method to determine whether a given command is frequently used.

In Debug builds this method generates an assertion failure if the *nMinUsagePercentage* parameter is larger than or equal to 100.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)
