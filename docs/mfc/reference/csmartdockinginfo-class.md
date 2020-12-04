---
description: "Learn more about: CSmartDockingInfo Class"
title: "CSmartDockingInfo Class"
ms.date: "11/19/2018"
f1_keywords: ["CSmartDockingInfo", "AFXDOCKINGMANAGER/CSmartDockingInfo", "AFXDOCKINGMANAGER/CSmartDockingInfo::CopyTo", "AFXDOCKINGMANAGER/CSmartDockingInfo::m_bUseThemeColorInShading", "AFXDOCKINGMANAGER/CSmartDockingInfo::m_clrBaseBackground", "AFXDOCKINGMANAGER/CSmartDockingInfo::m_clrToneDest", "AFXDOCKINGMANAGER/CSmartDockingInfo::m_clrToneSrc", "AFXDOCKINGMANAGER/CSmartDockingInfo::m_clrTransparent", "AFXDOCKINGMANAGER/CSmartDockingInfo::m_nCentralGroupOffset", "AFXDOCKINGMANAGER/CSmartDockingInfo::m_sizeTotal", "AFXDOCKINGMANAGER/CSmartDockingInfo::m_uiMarkerBmpResID", "AFXDOCKINGMANAGER/CSmartDockingInfo::m_uiMarkerLightBmpResID"]
helpviewer_keywords: ["CSmartDockingInfo [MFC], CopyTo", "CSmartDockingInfo [MFC], m_bUseThemeColorInShading", "CSmartDockingInfo [MFC], m_clrBaseBackground", "CSmartDockingInfo [MFC], m_clrToneDest", "CSmartDockingInfo [MFC], m_clrToneSrc", "CSmartDockingInfo [MFC], m_clrTransparent", "CSmartDockingInfo [MFC], m_nCentralGroupOffset", "CSmartDockingInfo [MFC], m_sizeTotal", "CSmartDockingInfo [MFC], m_uiMarkerBmpResID", "CSmartDockingInfo [MFC], m_uiMarkerLightBmpResID"]
ms.assetid: cab04f38-4bc1-4378-9337-c56fc87fbd68
---
# CSmartDockingInfo Class

Defines the appearance of smart docking markers.

## Syntax

```
class CSmartDockingInfo : public CObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|`CSmartDockingInfo::CSmartDockingInfo`|Default constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CSmartDockingInfo::CopyTo](#copyto)|Copies the current smart docking info parameters into the provided [CSmartDockingInfo](../../mfc/reference/csmartdockinginfo-class.md) object.|

### Data Members

|Name|Description|
|----------|-----------------|
|[CSmartDockingInfo::m_bUseThemeColorInShading](#m_busethemecolorinshading)|Specifies whether to use the current theme color when the framework displays smart docking markers.|
|[CSmartDockingInfo::m_clrBaseBackground](#m_clrbasebackground)|Specifies the base background color of smart docking markers.|
|[CSmartDockingInfo::m_clrToneDest](#m_clrtonedest)|Specifies the color that replaces `m_clrToneSrc` in smart docking marker bitmaps.|
|[CSmartDockingInfo::m_clrToneSrc](#m_clrtonesrc)|Specifies the color of smart docking marker bitmaps.|
|[CSmartDockingInfo::m_clrTransparent](#m_clrtransparent)|Specifies the color of smart docking marker bitmaps when they are transparent.|
|[CSmartDockingInfo::m_nCentralGroupOffset](#m_ncentralgroupoffset)|Specifies the offset of the central group of smart docking markers from the boundaries of the central group rectangle.|
|[CSmartDockingInfo::m_sizeTotal](#m_sizetotal)|Specifies the total size of all smart docking markers in a group.|
|[CSmartDockingInfo::m_uiMarkerBmpResID](#m_uimarkerbmpresid)|Defines the resource IDs of the bitmaps that the framework uses for smart docking markers that are not highlighted.|
|[CSmartDockingInfo::m_uiMarkerLightBmpResID](#m_uimarkerlightbmpresid)|Defines the resource IDs of the bitmaps that the framework uses for smart docking markers that are highlighted.|

## Remarks

The framework handles smart docking markers internally. The following illustration shows the standard smart docking markers:

![Standard markers for smart docking](../../mfc/reference/media/nextsdmarkers.png "Standard markers for smart docking")

In this figure, the image on the left shows a central group smart docking marker that does not have docking to a tab enabled. The image in the middle shows a right edge smart docking marker. The image on the right shows a central group smart docking marker that does have docking to a tab enabled. The central group smart docking marker has a main bitmap and five smart docking marker bitmaps.

You can customize the following parameters of smart docking markers:

- Color. For example, you can replace the blue color of the markers in the figure with any user-defined color.

- Transparency color.

- Offset of a smart docking marker in the central group from the border of the bounding rectangle.

- The main bitmap that represents the central group.

- The bitmaps that represents the regular and highlighted smart docking markers.

The following illustration shows an example of smart docking markers that have been customized:

![Custom markers for smart docking](../../mfc/reference/media/nextsdmarkerscustom.png "Custom markers for smart docking")

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CSmartDockingInfo](../../mfc/reference/csmartdockinginfo-class.md)

## Requirements

**Header:** afxDockingManager.h

## <a name="copyto"></a> CSmartDockingInfo::CopyTo

Copies the current smart docking parameters into the provided [CSmartDockingInfo](../../mfc/reference/csmartdockinginfo-class.md) object.

```cpp
void CopyTo(CSmartDockingInfo& params);
```

### Parameters

*params*<br/>
[out] An object of type `CSmartDockingInfo` that is populated with the current smart docking parameters.

## <a name="m_busethemecolorinshading"></a> CSmartDockingInfo::m_bUseThemeColorInShading

Specifies whether to use the current theme color when the framework displays smart docking markers.

```
BOOL m_bUseThemeColorInShading;
```

### Remarks

If TRUE, the markers are drawn using the current theme color; otherwise the markers are drawn with a light blue color.

The default value is FALSE.

## <a name="m_clrbasebackground"></a> CSmartDockingInfo::m_clrBaseBackground

Specifies the base background color of smart docking markers.

```
COLORREF m_clrBaseBackground;
```

## <a name="m_clrtonedest"></a> CSmartDockingInfo::m_clrToneDest

Specifies the color that will replace `m_clrToneSrc` in smart docking marker bitmaps.

```
COLORREF m_clrToneDest;
```

### Remarks

Set this value to change the color of marker bitmaps programmatically. For example, if you want to change the color of the standard markers provided with the framework, set this value to the desired color. By default, [CSmartDockingInfo::m_clrToneSrc](#m_clrtonesrc) is set to RGB (61, 123, 241) (a bluish color).

To change the color of custom markers, you must specify both `m_clrToneDest` and `m_clrToneSrc`.

## <a name="m_clrtonesrc"></a> CSmartDockingInfo::m_clrToneSrc

Specifies the color of smart docking marker bitmaps.

```
COLORREF m_clrToneSrc;
```

### Remarks

Set this value only when you want to replace the color of a custom bitmap with another color. You do not have to set this value if you are changing the color of a standard (framework provided) marker.

Use `(COLORREF)-1` to leave a member of the smart docking group empty.

## <a name="m_clrtransparent"></a> CSmartDockingInfo::m_clrTransparent

Specifies the color of smart docking marker bitmaps when they are transparent.

```
COLORREF m_clrTransparent;
```

### Remarks

You must set this value when you display custom markers and custom bitmaps in the docking group.

## <a name="m_ncentralgroupoffset"></a> CSmartDockingInfo::m_nCentralGroupOffset

Specifies the offset between the central group of smart docking markers and the boundaries of the central group rectangle.

```
int m_nCentralGroupOffset;
```

### Remarks

Specify this value if you want to change the default offset between custom markers and the bounds of the central group of smart docking markers. The default offset is 5 pixels.

## <a name="m_sizetotal"></a> CSmartDockingInfo::m_sizeTotal

Specifies the total size of a bounding rectangle that encloses all smart docking markers in the central group.

```
CSize m_sizeTotal;
```

### Remarks

Set `m_sizeTotal` to the size of the bounding rectangle of the central group marker. You are required to specify this value if you are using custom bitmaps for markers.

## <a name="m_uimarkerbmpresid"></a> CSmartDockingInfo::m_uiMarkerBmpResID

Defines the resource IDs of the bitmaps that are used for non-highlighted custom smart docking markers.

```
UINT m_uiMarkerBmpResID[AFX_SD_MARKERS_NUM];
```

### Remarks

Fill this array with the resource IDs of the bitmaps representing the smart docking markers. AFX_SD_MARKERS_NUM is currently defined as 5. You fill the array as follows:

```cpp
params.m_uiMarkerBmpResID[0] = IDB_MARKER_LEFT;
params.m_uiMarkerBmpResID[1] = IDB_MARKER_RIGHT;
params.m_uiMarkerBmpResID[2] = IDB_MARKER_TOP;
params.m_uiMarkerBmpResID[3] = IDB_MARKER_BOTTOM;
params.m_uiMarkerBmpResID[4] = IDB_MARKER_CENTER;
```

## <a name="m_uimarkerlightbmpresid"></a> CSmartDockingInfo::m_uiMarkerLightBmpResID

Defines the resource IDs of the bitmaps that are used for highlighted custom smart docking markers.

```
UINT m_uiMarkerLightBmpResID[AFX_SD_MARKERS_NUM];
```

### Remarks

Fill this array with the resource IDs of the bitmaps representing the highlighted smart docking markers. AFX_SD_MARKERS_NUM is currently defined as 5. You fill the array as follows:

```cpp
params.m_uiMarkerLightBmpResID[0] = IDB_MARKER_LEFT_LIGHT;
params.m_uiMarkerLightBmpResID[1] = IDB_MARKER_RIGHT_LIGHT;
params.m_uiMarkerLightBmpResID[2] = IDB_MARKER_TOP_LIGHT;
params.m_uiMarkerLightBmpResID[3] = IDB_MARKER_BOTTOM_LIGHT;
params.m_uiMarkerLightBmpResID[4] = IDB_MARKER_CENTER_LIGHT;
```

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CObject Class](../../mfc/reference/cobject-class.md)
