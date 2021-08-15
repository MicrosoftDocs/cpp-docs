---
description: "Learn more about: Variant Parameter Type Constants"
title: "Variant Parameter Type Constants"
ms.date: "11/04/2016"
f1_keywords: ["VTS_YPOS_HIMETRIC", "VTS_PICTURE", "VTS_FONT", "VTS_XPOS_HIMETRIC", "VTS_XPOS_PIXELS", "VTS_XSIZE_HIMETRIC", "VTS_YPOS_PIXELS", "VTS_TRISTATE", "VTS_HANDLE", "VTS_YSIZE_HIMETRIC", "VTS_COLOR", "VTS_OPTEXCLUSIVE", "VTS_YSIZE_PIXELS", "VTS_XSIZE_PIXELS"]
helpviewer_keywords: ["VTS_XPOS_HIMETRIC constant [MFC]", "VTS_FONT constant [MFC]", "VTS_XPOS_PIXELS constant [MFC]", "VTS_COLOR constant [MFC]", "Variants [MFC]", "VTS_YPOS_PIXELS constant [MFC]", "VTS_YSIZE_HIMETRIC constant [MFC]", "VTS_YPOS_HIMETRIC constant [MFC]", "Variants, parameter type constants", "Variant data constants [MFC]", "VTS_PICTURE constant [MFC]", "VTS_TRISTATE constant [MFC]", "VTS_XSIZE_HIMETRIC constant [MFC]", "VTS_HANDLE constant [MFC]", "VTS_XSIZE_PIXELS constant [MFC]", "VTS_OPTEXCLUSIVE constant [MFC]", "VTS_YSIZE_PIXELS constant [MFC]"]
ms.assetid: de99c7a9-7aae-4dc4-b723-40c6380543ab
---
# Variant Parameter Type Constants

This topic lists new constants that indicate variant parameter types designed for use with the OLE control classes of the Microsoft Foundation Class Library.

The following is a list of class constants:

## <a name="_mfc_variant_data_constants"></a> Variant Data Constants

- VTS_COLOR A 32-bit integer used to represent a RGB color value.

- VTS_FONT A pointer to the `IFontDisp` interface of an OLE font object.

- VTS_HANDLE A Windows handle value.

- VTS_PICTURE A pointer to the `IPictureDisp` interface of an OLE picture object.

- VTS_OPTEXCLUSIVE A 16-bit value used for a control that is intended to be used in a group of controls, such as radio buttons. This type tells the container that if one control in a group has a TRUE value, all others must be FALSE.

- VTS_TRISTATE A 16-bit signed integer used for properties that can have one of three possible values (selected, cleared, unavailable), for example, a check box.

- VTS_XPOS_HIMETRIC A 32-bit unsigned integer used to represent a position along the x-axis in HIMETRIC units.

- VTS_YPOS_HIMETRIC A 32-bit unsigned integer used to represent a position along the y-axis in HIMETRIC units.

- VTS_XPOS_PIXELS A 32-bit unsigned integer used to represent a position along the x-axis in pixels.

- VTS_YPOS_PIXELS A 32-bit unsigned integer used to represent a position along the y-axis in pixels.

- VTS_XSIZE_PIXELS A 32-bit unsigned integer used to represent the width of a screen object in pixels.

- VTS_YSIZE_PIXELS A 32-bit unsigned integer used to represent the height of a screen object in pixels.

- VTS_XSIZE_HIMETRIC A 32-bit unsigned integer used to represent the width of a screen object in HIMETRIC units.

- VTS_YSIZE_HIMETRIC A 32-bit unsigned integer used to represent the height of a screen object in HIMETRIC units.

    > [!NOTE]
    >  Additional variant constants have been defined for all variant types, with the exception of VTS_FONT and VTS_PICTURE, that provide a pointer to the variant data constant. These constants are named using the VTS_P`constantname` convention. For example, VTS_PCOLOR is a pointer to a VTS_COLOR constant.

## Requirements

**Header:** afxdisp.h

## See also

[Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)
