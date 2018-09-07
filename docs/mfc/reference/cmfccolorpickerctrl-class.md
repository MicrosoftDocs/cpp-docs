---
title: "CMFCColorPickerCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CMFCColorPickerCtrl", "AFXCOLORPICKERCTRL/CMFCColorPickerCtrl", "AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::CMFCColorPickerCtrl", "AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::GetColor", "AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::GetHLS", "AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::GetHue", "AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::GetLuminance", "AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::GetSaturation", "AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::SelectCellHexagon", "AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::SetColor", "AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::SetHLS", "AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::SetHue", "AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::SetLuminance", "AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::SetLuminanceBarWidth", "AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::SetOriginalColor", "AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::SetPalette", "AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::SetSaturation", "AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::SetType", "AFXCOLORPICKERCTRL/CMFCColorPickerCtrl::DrawCursor"]
dev_langs: ["C++"]
helpviewer_keywords: ["CMFCColorPickerCtrl [MFC], CMFCColorPickerCtrl", "CMFCColorPickerCtrl [MFC], GetColor", "CMFCColorPickerCtrl [MFC], GetHLS", "CMFCColorPickerCtrl [MFC], GetHue", "CMFCColorPickerCtrl [MFC], GetLuminance", "CMFCColorPickerCtrl [MFC], GetSaturation", "CMFCColorPickerCtrl [MFC], SelectCellHexagon", "CMFCColorPickerCtrl [MFC], SetColor", "CMFCColorPickerCtrl [MFC], SetHLS", "CMFCColorPickerCtrl [MFC], SetHue", "CMFCColorPickerCtrl [MFC], SetLuminance", "CMFCColorPickerCtrl [MFC], SetLuminanceBarWidth", "CMFCColorPickerCtrl [MFC], SetOriginalColor", "CMFCColorPickerCtrl [MFC], SetPalette", "CMFCColorPickerCtrl [MFC], SetSaturation", "CMFCColorPickerCtrl [MFC], SetType", "CMFCColorPickerCtrl [MFC], DrawCursor"]
ms.assetid: b9bbd03c-beb0-4b55-9765-9985fd05e5dc
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CMFCColorPickerCtrl Class
The `CMFCColorPickerCtrl` class provides functionality for a control that is used to select colors.  
  
## Syntax  
  
```  
class CMFCColorPickerCtrl : public CButton  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCColorPickerCtrl::CMFCColorPickerCtrl](#cmfccolorpickerctrl)|Constructs a `CMFCColorPickerCtrl` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCColorPickerCtrl::GetColor](#getcolor)|Retrieves the color that the user selects.|  
|[CMFCColorPickerCtrl::GetHLS](#gethls)|Retrieves the hue, luminance and saturation values of the color that the user selects.|  
|[CMFCColorPickerCtrl::GetHue](#gethue)|Retrieves the hue component of the color that the user selects.|  
|[CMFCColorPickerCtrl::GetLuminance](#getluminance)|Retrieves the luminance component of the color that the user selects.|  
|[CMFCColorPickerCtrl::GetSaturation](#getsaturation)|Retrieves the saturation component of the color that the user selects.|  
|[CMFCColorPickerCtrl::SelectCellHexagon](#selectcellhexagon)|Sets the current color to the color defined by the specified RGB color components or the specified cell hexagon.|  
|[CMFCColorPickerCtrl::SetColor](#setcolor)|Sets the current color to the specified RGB color value.|  
|[CMFCColorPickerCtrl::SetHLS](#sethls)|Sets the current color to the specified HLS color value.|  
|[CMFCColorPickerCtrl::SetHue](#sethue)|Changes the hue component of the currently selected color.|  
|[CMFCColorPickerCtrl::SetLuminance](#setluminance)|Changes the luminance component of the currently selected color.|  
|[CMFCColorPickerCtrl::SetLuminanceBarWidth](#setluminancebarwidth)|Sets the width of the luminance bar in the color picker control.|  
|[CMFCColorPickerCtrl::SetOriginalColor](#setoriginalcolor)|Sets the initial selected color.|  
|[CMFCColorPickerCtrl::SetPalette](#setpalette)|Sets the current color palette.|  
|[CMFCColorPickerCtrl::SetSaturation](#setsaturation)|Changes the saturation component of the currently selected color.|  
|[CMFCColorPickerCtrl::SetType](#settype)|Sets the type of color picker control to display.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCColorPickerCtrl::DrawCursor](#drawcursor)|Called by the framework before a cursor that points to the selected color is displayed.|  
  
## Remarks  
 Standard colors are selected from a hexagonal color palette, and custom colors are selected from a luminance bar where colors are specified using either red/green/blue notation or hue/satuaration/luminance notation.  
  
 The following illustration depicts several `CMFCColorPickerCtrl` objects.  
  
 ![CMFCColorPickerCtrl dialog box](../../mfc/reference/media/colorpicker.png "colorpicker")  
  
 The `CMFCColorPickerCtrl` supports two pairs of styles. The HEX and HEX_GREYSCALE styles are appropriate for standard color selection. The PICKER and LUMINANCE styles are appropriate for custom color selection.  
  
 Perform the following steps to incorporate the `CMFCColorPickerCtrl` control into your dialog box:  
  
1.  If you use the **ClassWizard**, insert a new button control into your dialog box template (because the `CMFCColorPickerCtrl` class is inherited from the `CButton` class).  
  
2.  Insert a member variable that is associated with the new button control into your dialog box class. Then change the variable type from `CButton` to `CMFCColorPickerCtrl`.  
  
3.  Insert the `WM_INITDIALOG` message handler for the dialog box class. In the handler, set the type, palette, and initial selected color of the `CMFCColorPickerCtrl` control.  
  
## Example  
 The following example demonstrates how to configure a `CMFCColorPickerCtrl` object by using various methods in the `CMFCColorPickerCtrl` class. The example demonstrates how to set the type of the picker control, and how to set its color, hue, luminance, and saturation. The example is part of the [New Controls sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#4](../../mfc/reference/codesnippet/cpp/cmfccolorpickerctrl-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls#5](../../mfc/reference/codesnippet/cpp/cmfccolorpickerctrl-class_2.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CButton](../../mfc/reference/cbutton-class.md)  
  
 [CMFCColorPickerCtrl](../../mfc/reference/cmfccolorpickerctrl-class.md)  
  
## Requirements  
 **Header:** afxcolorpickerctrl.h  
  
##  <a name="cmfccolorpickerctrl"></a>  CMFCColorPickerCtrl::CMFCColorPickerCtrl  
 Constructs a `CMFCColorPickerCtrl` object.  
  
```  
CMFCColorPickerCtrl();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="drawcursor"></a>  CMFCColorPickerCtrl::DrawCursor  
 Called by the framework before a cursor that points to the selected color is displayed.  
  
```  
virtual void DrawCursor(
    CDC* pDC,  
    const CRect& rect);
```  
  
### Parameters  
 [in] *pDC*  
 Pointer to a device context.  
  
 [in] *rect*  
 Specifies a rectangular area around the selected color.  
  
### Remarks  
 Override this method when you need to change the shape of the cursor that points to the selected color.  
  
##  <a name="getcolor"></a>  CMFCColorPickerCtrl::GetColor  
 Retrieves the color that the user selects.  
  
```  
COLORREF GetColor() const;  
```  
  
### Return Value  
 The RGB value of the selected color.  
  
### Remarks  
  
##  <a name="gethls"></a>  CMFCColorPickerCtrl::GetHLS  
 Retrieves the hue, luminance and saturation values of the color that the user selects.  
  
```  
void GetHLS(
    double* hue,  
    double* luminance,  
    double* saturation);
```  
  
### Parameters  
 [out] *hue*  
 Pointer to a variable of type double that receives hue information.  
  
 [out] *luminance*  
 Pointer to a variable of type double that receives luminance information.  
  
 [out] *saturation*  
 Pointer to a variable of type double that receives saturation information.  
  
### Remarks  
  
##  <a name="gethue"></a>  CMFCColorPickerCtrl::GetHue  
 Retrieves the hue component of the color that the user selects.  
  
```  
double GetHue() const;  
```  
  
### Return Value  
 The hue component of the selected color.  
  
### Remarks  
  
##  <a name="getluminance"></a>  CMFCColorPickerCtrl::GetLuminance  
 Retrieves the luminance component of the color that the user selects.  
  
```  
double GetLuminance() const;  
```  
  
### Return Value  
 The luminance component of the selected color.  
  
### Remarks  
  
##  <a name="getsaturation"></a>  CMFCColorPickerCtrl::GetSaturation  
 Retrieves the saturation value of the color that the user selects.  
  
```  
double GetSaturation() const;  
```  
  
### Return Value  
 The saturation component of the selected color.  
  
### Remarks  
  
##  <a name="selectcellhexagon"></a>  CMFCColorPickerCtrl::SelectCellHexagon  
 Sets the current color to the color defined by the specified RGB color components or the specified cell hexagon.  
  
```  
void SelectCellHexagon(
    BYTE R,  
    BYTE G,  
    BYTE B);

 
BOOL SelectCellHexagon(
    int x,  
    int y);
```  
  
### Parameters  
 [in] *R*  
 The red color component.  
  
 [in] *G*  
 The green color component.  
  
 [in] *B*  
 The blue color component.  
  
 [in] *x*  
 The x-coordinate of the cursor, which points to a cell hexagon.  
  
 [in] *y*  
 The y-coordinate of the cursor, which points to a cell hexagon.  
  
### Return Value  
 The second overload of this method always returns FALSE.  
  
### Remarks  
 The first overload of this method sets the current color to the color that corresponds to the color selection control's specified red, green, and blue color components.  
  
 The second overload of this method sets the current color to the color of the cell hexagon that is pointed to by the specified cursor location.  
  
##  <a name="setcolor"></a>  CMFCColorPickerCtrl::SetColor  
 Sets the current color to the specified RGB color value.  
  
```  
void SetColor(COLORREF Color);
```  
  
### Parameters  
 [in] *Color*  
 An RGB color value.  
  
### Remarks  
  
##  <a name="sethls"></a>  CMFCColorPickerCtrl::SetHLS  
 Sets the current color to the specified HLS color value.  
  
```  
void SetHLS(
    double hue,  
    double luminance,  
    double saturation,  
    BOOL bInvalidate=TRUE);
```  
  
### Parameters  
 [in] *hue*  
 A hue value.  
  
 [in] *luminance*  
 A luminance value.  
  
 [in] *saturation*  
 A saturation value.  
  
 [in] *bInvalidate*  
 TRUE to force the window to immediately update to the new color; otherwise, FALSE. The default is TRUE.  
  
### Remarks  
  
##  <a name="sethue"></a>  CMFCColorPickerCtrl::SetHue  
 Changes the hue of the currently selected color.  
  
```  
void SetHue(double Hue);
```  
  
### Parameters  
 [in] *Hue*  
 A hue value.  
  
### Remarks  
  
##  <a name="setluminance"></a>  CMFCColorPickerCtrl::SetLuminance  
 Changes the luminance of the currently selected color.  
  
```  
void SetLuminance(double Luminance);
```  
  
### Parameters  
 [in] *Luminance*  
 A luminance value.  
  
### Remarks  
  
##  <a name="setluminancebarwidth"></a>  CMFCColorPickerCtrl::SetLuminanceBarWidth  
 Sets the width of the luminance bar in the color picker control.  
  
```  
void SetLuminanceBarWidth(int w);
```  
  
### Parameters  
 [in] *w*  
 The width of the luminance bar measured in pixels.  
  
### Remarks  
 Use this method to resize the luminance bar, which is on the **Custom** tab of the color picker control. The *w* parameter specifies the new width of the luminance bar. The width value is ignored if it exceeds three-fourths of the client area width.  
  
##  <a name="setoriginalcolor"></a>  CMFCColorPickerCtrl::SetOriginalColor  
 Sets the initial selected color.  
  
```  
void SetOriginalColor(COLORREF ref);
```  
  
### Parameters  
 [in] *ref*  
 An RGB color value.  
  
### Remarks  
 Call this method when the color picker control is initialized.  
  
##  <a name="setpalette"></a>  CMFCColorPickerCtrl::SetPalette  
 Sets the current color palette.  
  
```  
void SetPalette(CPalette* pPalette);
```  
  
### Parameters  
 [in] *pPalette*  
 Pointer to a color palette.  
  
### Remarks  
 The color palette defines the array of colors that is presented in the color picker control.  
  
##  <a name="setsaturation"></a>  CMFCColorPickerCtrl::SetSaturation  
 Changes the saturation of the currently selected color.  
  
```  
void SetSaturation(double Saturation);
```  
  
### Parameters  
 [in] *Saturation*  
 A saturation value.  
  
### Remarks  
  
##  <a name="settype"></a>  CMFCColorPickerCtrl::SetType  
 Sets the type of color picker control to display.  
  
```  
void SetType(COLORTYPE colorType);
```  
  
### Parameters  
 [in] *colorType*  
 A color picker control type.  
  
 The types are defined by the `CMFCColorPickerCtrl::COLORTYPE` enumeration. The possible types are LUMINANCE, PICKER, HEX and HEX_GREYSCALE. The default type is PICKER.  
  
### Remarks  
 To specify a color picker control type, call this method before the Windows control is created.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCColorDialog Class](../../mfc/reference/cmfccolordialog-class.md)
