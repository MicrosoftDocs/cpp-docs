---
title: "CMFCToolBarImages Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCToolBarImages"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCToolBarImages class"
ms.assetid: d4e50518-9ffc-406f-9996-f79e5cd38155
caps.latest.revision: 31
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
# CMFCToolBarImages Class
The images on a toolbar. The `CMFCToolBarImages` class manages toolbar images loaded from application resources or from files.  
  
## Syntax  
  
```  
class CMFCToolBarImages : public CObject  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCToolBarImages::CMFCToolBarImages](#cmfctoolbarimages__cmfctoolbarimages)|Constructs a `CMFCToolBarImages` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCToolBarImages::AdaptColors](#cmfctoolbarimages__adaptcolors)||  
|[CMFCToolBarImages::AddIcon](#cmfctoolbarimages__addicon)|Adds an icon to the toolbar images.|  
|[CMFCToolBarImages::AddImage](#cmfctoolbarimages__addimage)|Adds a bitmap to the toolbar images.|  
|[CMFCToolBarImages::CleanUp](#cmfctoolbarimages__cleanup)||  
|[CMFCToolBarImages::Clear](#cmfctoolbarimages__clear)|Frees the system resources that were allocated to this object.|  
|[CMFCToolBarImages::ConvertTo32Bits](#cmfctoolbarimages__convertto32bits)|Converts underlined bitmaps to 32 bpp images.|  
|[CMFCToolBarImages::CopyImageToClipboard](#cmfctoolbarimages__copyimagetoclipboard)||  
|[CMFCToolBarImages::CopyTo](#cmfctoolbarimages__copyto)||  
|[CMFCToolBarImages::CreateFromImageList](#cmfctoolbarimages__createfromimagelist)|Initializes the toolbar images from an image list ( [CImageList Class](../../mfc/reference/cimagelist-class.md)).|  
|[CMFCToolBarImages::CreateRegionFromImage](#cmfctoolbarimages__createregionfromimage)||  
|[CMFCToolBarImages::DeleteImage](#cmfctoolbarimages__deleteimage)|Deletes the image that has a specified index from the toolbar images if this set of toolbar images contains user-defined images.|  
|[CMFCToolBarImages::Draw](#cmfctoolbarimages__draw)|Draws a single toolbar image (button).|  
|[CMFCToolBarImages::DrawEx](#cmfctoolbarimages__drawex)||  
|[CMFCToolBarImages::EnableRTL](#cmfctoolbarimages__enablertl)||  
|[CMFCToolBarImages::EndDrawImage](#cmfctoolbarimages__enddrawimage)|Frees system resources after a toolbar image is drawn.|  
|[CMFCToolBarImages::ExtractIcon](#cmfctoolbarimages__extracticon)|Returns the icon that has a specified image index from the toolbar images.|  
|[CMFCToolBarImages::FillDitheredRect](#cmfctoolbarimages__fillditheredrect)|Fills a rectangle by using a brush that has the toolbar background colors.|  
|[CMFCToolBarImages::GetAlwaysLight](#cmfctoolbarimages__getalwayslight)||  
|[CMFCToolBarImages::GetBitsPerPixel](#cmfctoolbarimages__getbitsperpixel)|Returns current resolution of underlined images.|  
|[CMFCToolBarImages::GetCount](#cmfctoolbarimages__getcount)|Returns the number of images on the toolbar.|  
|[CMFCToolBarImages::GetDisabledImageAlpha](#cmfctoolbarimages__getdisabledimagealpha)|Returns the alpha channel value that is used for disabled images.|  
|[CMFCToolBarImages::GetFadedImageAlpha](#cmfctoolbarimages__getfadedimagealpha)||  
|[CMFCToolBarImages::GetImageSize](#cmfctoolbarimages__getimagesize)|Retrieves either the size of the toolbar images that are stored in memory (source size), or the size of the toolbar images that are drawn on the screen (destination size).|  
|[CMFCToolBarImages::GetImageWell](#cmfctoolbarimages__getimagewell)|Returns the handle to the bitmap that contains all the toolbar images.|  
|[CMFCToolBarImages::GetImageWellLight](#cmfctoolbarimages__getimagewelllight)||  
|[CMFCToolBarImages::GetLastImageRect](#cmfctoolbarimages__getlastimagerect)||  
|[CMFCToolBarImages::GetLightPercentage](#cmfctoolbarimages__getlightpercentage)||  
|[CMFCToolBarImages::GetMapTo3DColors](#cmfctoolbarimages__getmapto3dcolors)||  
|[CMFCToolBarImages::GetMask](#cmfctoolbarimages__getmask)||  
|[CMFCToolBarImages::GetResourceOffset](#cmfctoolbarimages__getresourceoffset)|Returns the image index for a specified resource ID.|  
|[CMFCToolBarImages::GetScale](#cmfctoolbarimages__getscale)|Returns current scale ratio of underlined images.|  
|[CMFCToolBarImages::GetTransparentColor](#cmfctoolbarimages__gettransparentcolor)||  
|[CMFCToolBarImages::GrayImages](#cmfctoolbarimages__grayimages)|Grays the toolbar images to make them look disabled.|  
|[CMFCToolBarImages::Is32BitTransparencySupported](#cmfctoolbarimages__is32bittransparencysupported)|Determines whether the operating system supports 32-bit alpha blending.|  
|[CMFCToolBarImages::IsPreMultiplyAutoCheck](#cmfctoolbarimages__ispremultiplyautocheck)||  
|[CMFCToolBarImages::IsRTL](#cmfctoolbarimages__isrtl)|Determines whether right-to-left (RTL) support is enabled.|  
|[CMFCToolBarImages::IsReadOnly](#cmfctoolbarimages__isreadonly)|Determines whether the toolbar images are read-only.|  
|[CMFCToolBarImages::IsScaled](#cmfctoolbarimages__isscaled)|Tells whether the underlined images are scaled or not.|  
|[CMFCToolBarImages::IsUserImagesList](#cmfctoolbarimages__isuserimageslist)|Determines whether this set of toolbar images contains user-defined images.|  
|[CMFCToolBarImages::IsValid](#cmfctoolbarimages__isvalid)|Determines whether this set of toolbar images contains a valid toolbar image.|  
|[CMFCToolBarImages::Load](#cmfctoolbarimages__load)|Loads toolbar images from system resources or from a file.|  
|[CMFCToolBarImages::LoadStr](#cmfctoolbarimages__loadstr)||  
|[CMFCToolBarImages::MapFromSysColor](#cmfctoolbarimages__mapfromsyscolor)||  
|[CMFCToolBarImages::MapTo3dColors](#cmfctoolbarimages__mapto3dcolors)||  
|[CMFCToolBarImages::MapToSysColor](#cmfctoolbarimages__maptosyscolor)||  
|[CMFCToolBarImages::MapToSysColorAlpha](#cmfctoolbarimages__maptosyscoloralpha)||  
|[CMFCToolBarImages::Mirror](#cmfctoolbarimages__mirror)|Horizontally mirrors all of the toolbar images.|  
|[CMFCToolBarImages::MirrorBitmap](#cmfctoolbarimages__mirrorbitmap)|Horizontally mirrors a bitmap.|  
|[CMFCToolBarImages::MirrorBitmapVert](#cmfctoolbarimages__mirrorbitmapvert)||  
|[CMFCToolBarImages::MirrorVert](#cmfctoolbarimages__mirrorvert)||  
|[CMFCToolBarImages::OnSysColorChange](#cmfctoolbarimages__onsyscolorchange)||  
|[CMFCToolBarImages::PrepareDrawImage](#cmfctoolbarimages__preparedrawimage)|Allocates the resources that are required to draw a toolbar image at a specified size.|  
|[CMFCToolBarImages::Save](#cmfctoolbarimages__save)|Stores the toolbar images in a file if this set of toolbar images contains user-defined images.|  
|[CMFCToolBarImages::SetAlwaysLight](#cmfctoolbarimages__setalwayslight)||  
|[CMFCToolBarImages::SetDisabledImageAlpha](#cmfctoolbarimages__setdisabledimagealpha)|Sets the alpha channel value that is used for disabled images.|  
|[CMFCToolBarImages::SetFadedImageAlpha](#cmfctoolbarimages__setfadedimagealpha)||  
|[CMFCToolBarImages::SetImageSize](#cmfctoolbarimages__setimagesize)|Sets the size of a toolbar image (source size).|  
|[CMFCToolBarImages::SetLightPercentage](#cmfctoolbarimages__setlightpercentage)||  
|[CMFCToolBarImages::SetMapTo3DColors](#cmfctoolbarimages__setmapto3dcolors)||  
|[CMFCToolBarImages::SetPreMultiplyAutoCheck](#cmfctoolbarimages__setpremultiplyautocheck)||  
|[CMFCToolBarImages::SetSingleImage](#cmfctoolbarimages__setsingleimage)||  
|[CMFCToolBarImages::SetTransparentColor](#cmfctoolbarimages__settransparentcolor)|Sets the transparent color of the toolbar images.|  
|[CMFCToolBarImages::SmoothResize](#cmfctoolbarimages__smoothresize)|Smoothly resizes underlined images.|  
|[CMFCToolBarImages::UpdateImage](#cmfctoolbarimages__updateimage)|Updates a user-defined toolbar image from a bitmap.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCToolBarImages::PreMultiplyAlpha](#cmfctoolbarimages__premultiplyalpha)||  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCToolBarImages::m_bDisableTrueColorAlpha](#cmfctoolbarimages__m_bdisabletruecoloralpha)|`TRUE` if truecolor alpha blending (32-bit color) is disabled.|  
  
## Remarks  
 The full bitmap of toolbar images managed by `CMFCToolbarImages` consists of one or more small toolbar images (buttons) of a fixed size.  
  
## Example  
 The following example demonstrates how to configure a `CMFCToolBarImages` object by using various methods in the `CMFCToolBarImages` class. The example shows how to set the size of the toolbar image, load an image, and set the transparent color of the image. This code snippet is part of the [Visual Studio Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#32](../../mfc/codesnippet/cpp/cmfctoolbarimages-class_1.h)]  
[!code-cpp[NVC_MFC_VisualStudioDemo#33](../../mfc/codesnippet/cpp/cmfctoolbarimages-class_2.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCToolBarImages](../../mfc/reference/cmfctoolbarimages-class.md)  
  
## Requirements  
 **Header:** afxtoolbarimages.h  
  
##  <a name="cmfctoolbarimages__adaptcolors"></a>  CMFCToolBarImages::AdaptColors  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void AdaptColors(
    COLORREF clrBase,  
    COLORREF clrTone);
```  
  
### Parameters  
 [in] `clrBase`  
 [in] `clrTone`  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__addicon"></a>  CMFCToolBarImages::AddIcon  
 Adds an icon to the list of toolbar images.  
  
```  
int AddIcon(
    HICON hIcon,  
    BOOL bAlphaBlend=FALSE);
```  
  
### Parameters  
 [in] `hIcon`  
 A handle to the icon to be added.  
  
 [in] `bAlphaBlend`  
 `TRUE` if this icon is used with alpha blending; otherwise `FALSE`.  
  
### Return Value  
 The zero-based index of the toolbar image that was added if the method is successful; otherwise -1.  
  
##  <a name="cmfctoolbarimages__addimage"></a>  CMFCToolBarImages::AddImage  
 Adds a bitmap to the toolbar images.  
  
```  
int AddImage(
    HBITMAP hbmp,  
    BOOL bSetBitPerPixel=FALSE);

int AddImage(
    const CMFCToolBarImages& imageList,  
    int nIndex);
```  
  
### Parameters  
 [in] `hbmp`  
 The handle to the bitmap to add.  
  
 [in] `bSetBitPerPixel`  
 `TRUE` if the [CMFCToolBarImages](../../mfc/reference/cmfctoolbarimages-class.md) object uses the color depth (bits per pixel) of the new image; `FALSE` if the `CMFCToolbarImages` object keeps the current color depth.  
  
 [in] `imageList`  
 A reference to a `CMFCToolbarImages` object that contains the image to add.  
  
 [in] `nIndex`  
 The index in the source `CMFCToolbarImages` object of the image to add.  
  
### Return Value  
 The number of toolbar images that the [CMFCToolBarImages](../../mfc/reference/cmfctoolbarimages-class.md) object maintains after the new bitmap was added successfully; -1 if the operation failed.  
  
##  <a name="cmfctoolbarimages__cleanup"></a>  CMFCToolBarImages::CleanUp  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
static void __stdcall CleanUp();
```  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__clear"></a>  CMFCToolBarImages::Clear  
 Frees the system resources that the [CMFCToolbarImages](../../mfc/reference/cmfctoolbarimages-class.md) object allocated.  
  
```  
void Clear();
```  
  
##  <a name="cmfctoolbarimages__cmfctoolbarimages"></a>  CMFCToolBarImages::CMFCToolBarImages  
 Constructs a `CMFCToolBarImages` object.  
  
```  
CMFCToolBarImages();
```  
  
### Remarks  
 Constructs a `CMFCToolBarImages` object, initializes its rendering engine and sets the image size to its default value 16x15 pixels. Use [CMFCToolBarImages::SetImageSize](#cmfctoolbarimages__setimagesize) to change the image size before you add images.  
  
##  <a name="cmfctoolbarimages__copyimagetoclipboard"></a>  CMFCToolBarImages::CopyImageToClipboard  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL CopyImageToClipboard(int iImage);
```  
  
### Parameters  
 [in] `iImage`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__copyto"></a>  CMFCToolBarImages::CopyTo  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL CopyTo(CMFCToolBarImages& imageList);
```  
  
### Parameters  
 [in] `imageList`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__createfromimagelist"></a>  CMFCToolBarImages::CreateFromImageList  
 Initializes the toolbar images from a [CImageList Class](../../mfc/reference/cimagelist-class.md) object.  
  
```  
BOOL CreateFromImageList(const CImageList& imageList);
```  
  
### Parameters  
 [in] `imageList`  
 The image list to be used as a source for toolbar images.  
  
### Return Value  
 Always returns `TRUE`.  
  
### Remarks  
 Use this function to quickly initialize the toolbar images list from an external image list.  
  
##  <a name="cmfctoolbarimages__createregionfromimage"></a>  CMFCToolBarImages::CreateRegionFromImage  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
static HRGN __stdcall CreateRegionFromImage(
    HBITMAP bmp,  
    COLORREF clrTransparent);
```  
  
### Parameters  
 [in] `bmp`  
 [in] `clrTransparent`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__deleteimage"></a>  CMFCToolBarImages::DeleteImage  
 Deletes the user-defined image that has a specified index from the toolbar images.  
  
```  
BOOL DeleteImage(int iImage);
```  
  
### Parameters  
 [in] `iImage`  
 Specifies the zero-based index of the image to delete.  
  
### Return Value  
 `TRUE` if the image was deleted successfully; `FALSE` if the image index is invalid, the `CMFCToolbarImages` object is temporary, the `CMFCToolbarImages` object does not contain user-defined images, or if some other error occurred.  
  
##  <a name="cmfctoolbarimages__draw"></a>  CMFCToolBarImages::Draw  
 Draws a single toolbar image.  
  
```  
BOOL Draw(
    CDC* pDC,  
    int x,  
    int y,  
    int iImageIndex,  
    BOOL bHilite=FALSE,  
    BOOL bDisabled=FALSE,  
    BOOL bIndeterminate=FALSE,  
    BOOL bShadow=FALSE,  
    BOOL bInactive=FALSE,  
    BYTE alphaSrc=255);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `x`  
 The X coordinate of the left side of the rectangle where the image is to be drawn.  
  
 [in] `y`  
 The Y coordinate of the top of the rectangle where the image is to be drawn.  
  
 [in] `iImageIndex`  
 The zero-based index of the image to be displayed.  
  
 [in] `bHilite`  
 `TRUE` if the image is to be highlighted; otherwise `FALSE`.  
  
 [in] `bDisabled`  
 `TRUE` if the image is to be drawn in the disabled style; otherwise `FALSE`.  
  
 [in] `bIndeterminate`  
 `TRUE` if the image is to be drawn in the indeterminate state style; otherwise `FALSE`.  
  
 [in] `bShadow`  
 `TRUE` if the image is to be drawn with a drop shadow; otherwise `FALSE`.  
  
 [in] `bInactive`  
 `TRUE` if the image is to be drawn in the inactive state style; otherwise `FALSE`.  
  
 [in] `alphaSrc`  
 The alpha channel (opacity) value. A value of 255 means the image is drawn opaque. A value of 0 means the image is drawn transparent. This value is used only for 32 bit color images and for images that displayed a Windows Vista glass style.  
  
### Return Value  
 `TRUE` if the specified image was displayed successfully; `FALSE` if the image index was invalid or some other error occurred.  
  
##  <a name="cmfctoolbarimages__drawex"></a>  CMFCToolBarImages::DrawEx  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL DrawEx(
    CDC* pDC,  
    CRect rect,  
    int iImageIndex,  
    ImageAlignHorz horzAlign = ImageAlignHorzLeft,  
    ImageAlignVert vertAlign = ImageAlignVertTop,  
    CRect rectSrc = CRect(0,
    0,
    0,
    0),  
    BYTE alphaSrc = 255);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `rect`  
 [in] `iImageIndex`  
 [in] `horzAlign`  
 [in] `vertAlign`  
 [in] `rectSrc`  
 [in] `0`  
 [in] `0)`  
 [in] `alphaSrc`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__enablertl"></a>  CMFCToolBarImages::EnableRTL  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
static void __stdcall EnableRTL(BOOL bIsRTL = TRUE);
```  
  
### Parameters  
 [in] `bIsRTL`  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__enddrawimage"></a>  CMFCToolBarImages::EndDrawImage  
 Frees system resources that [CMFCToolBarImages::PrepareDrawImage](#cmfctoolbarimages__preparedrawimage) allocated after you draw a toolbar image by calling [CMFCToolBarImages::Draw](#cmfctoolbarimages__draw).  
  
```  
void EndDrawImage(CAfxDrawState& ds);
```  
  
### Parameters  
 [in] `ds`  
 A reference to the `CAfxDrawState` object that was passed to the `PrepareDrawImage` method.  
  
##  <a name="cmfctoolbarimages__extracticon"></a>  CMFCToolBarImages::ExtractIcon  
 Returns the icon that has a specified image index from the toolbar images.  
  
```  
HICON ExtractIcon(int nIndex);
```  
  
### Parameters  
 [in] `nIndex`  
 The zero-based index in the image list at which the image to be extracted as an icon is located.  
  
### Return Value  
 A handle to the extracted icon, or `NULL` if `nIndex` is out of range.  
  
##  <a name="cmfctoolbarimages__fillditheredrect"></a>  CMFCToolBarImages::FillDitheredRect  
 Fills a rectangle with the toolbar background colors.  
  
```  
static void FillDitheredRect(
    CDC* pDC,  
    const CRect& rect);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 The coordinates of a rectangle to fill.  
  
### Remarks  
 Use this method to fill a rectangle with a color that is the average of the system colors COLOR_BTNFACE and COLOR_BTNHIGHLIGHT. If the system is using 256 or fewer colors, the rectangle will be filled with a dithered pattern of those two colors instead.  
  
##  <a name="cmfctoolbarimages__getalwayslight"></a>  CMFCToolBarImages::GetAlwaysLight  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL GetAlwaysLight() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__getcount"></a>  CMFCToolBarImages::GetCount  
 Returns the number of images in the toolbar images list.  
  
```  
int GetCount() const;

 
```  
  
### Return Value  
 The number of images in the [CMFCToolbarImages](../../mfc/reference/cmfctoolbarimages-class.md) object.  
  
##  <a name="cmfctoolbarimages__getdisabledimagealpha"></a>  CMFCToolBarImages::GetDisabledImageAlpha  
 Returns the alpha channel (opacity) value that is used for disabled images.  
  
```  
static BYTE GetDisabledImageAlpha();
```  
  
### Return Value  
 The current alpha channel value.  
  
### Remarks  
 You can call [CMFCToolBarImages::SetDisabledImageAlpha](#cmfctoolbarimages__setdisabledimagealpha) to change the alpha channel value.  
  
##  <a name="cmfctoolbarimages__getfadedimagealpha"></a>  CMFCToolBarImages::GetFadedImageAlpha  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
static BYTE __stdcall GetFadedImageAlpha();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__getimagesize"></a>  CMFCToolBarImages::GetImageSize  
 Retrieves either the size of the toolbar images that are stored in memory (source size), or the size of the toolbar images that are drawn on the screen (destination size).  
  
```  
SIZE GetImageSize(BOOL bDest=FALSE) const;

 
```  
  
### Parameters  
 [in] `bDest`  
 `TRUE` to retrieve the destination size; `FALSE` to retrieve the source image size.  
  
### Return Value  
 A `SIZE` structure, which specifies the size of an image in pixels.  
  
### Remarks  
 The size of the source image is the size of the images that are stored in the [CMFCToolbarImages](../../mfc/reference/cmfctoolbarimages-class.md) object. You can call [CMFCToolBarImages::SetImageSize](#cmfctoolbarimages__setimagesize) to set the source size. The default value is 16x15 pixels.  
  
 By default, the destination image size is 0x0. You specify the destination size when you call [CMFCToolBarImages::PrepareDrawImage](#cmfctoolbarimages__preparedrawimage). The [CMFCToolBarImages::EndDrawImage](#cmfctoolbarimages__enddrawimage) method resets the destination size to the default value.  
  
##  <a name="cmfctoolbarimages__getimagewell"></a>  CMFCToolBarImages::GetImageWell  
 Returns the handle to the bitmap that contains all the toolbar images.  
  
```  
HBITMAP GetImageWell() const;

 
```  
  
### Return Value  
 A handle to a bitmap that contains toolbar images.  
  
### Remarks  
 The toolbar images are stored in a row in a single bitmap that is known as an *image well*. To find a toolbar image in the image well, multiply the index of the image by the width of the toolbar images (see [CMFCToolBarImages::GetImageSize](#cmfctoolbarimages__getimagesize)) to obtain the horizontal offset of the image inside the image well.  
  
##  <a name="cmfctoolbarimages__getimagewelllight"></a>  CMFCToolBarImages::GetImageWellLight  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
HBITMAP GetImageWellLight() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__getlastimagerect"></a>  CMFCToolBarImages::GetLastImageRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CRect GetLastImageRect() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__getlightpercentage"></a>  CMFCToolBarImages::GetLightPercentage  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetLightPercentage() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__getmapto3dcolors"></a>  CMFCToolBarImages::GetMapTo3DColors  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL GetMapTo3DColors() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__getmask"></a>  CMFCToolBarImages::GetMask  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
HBITMAP GetMask(int iImage);
```  
  
### Parameters  
 [in] `iImage`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__getresourceoffset"></a>  CMFCToolBarImages::GetResourceOffset  
 Returns the image index for a specified resource ID.  
  
```  
int GetResourceOffset(UINT uiResId) const;

 
```  
  
### Parameters  
 [in] `uiResId`  
 An image resource ID.  
  
### Return Value  
 An image index if the method was successful; -1 if the image with the specified resource ID does not exist.  
  
##  <a name="cmfctoolbarimages__gettransparentcolor"></a>  CMFCToolBarImages::GetTransparentColor  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
COLORREF GetTransparentColor() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__grayimages"></a>  CMFCToolBarImages::GrayImages  
 Grays the toolbar images to make them look disabled.  
  
```  
BOOL GrayImages(int nGrayImageLuminancePercentage);
```  
  
### Parameters  
 [in] `nGrayImageLuminancePercentage`  
 Luminance percentage.  
  
### Return Value  
 `TRUE` if images in the collection were grayed successfully; otherwise `FALSE`.  
  
### Remarks  
 This method modifies the toolbar images by averaging the red, green, and blue components of each pixel and multiplying the result by `nGrayImageLuminancePercentage` divided by 100. If `nGrayImageLuminancePercentage` is zero or negative, the default value of 130 is used instead.  
  
> [!NOTE]
>  If you want to undo the change, you must reload the images from the source. You can do this by calling [CMFCToolBarImages::Load](#cmfctoolbarimages__load) or [CMFCToolBarImages::UpdateImage](#cmfctoolbarimages__updateimage) (only for user-defined images), or by calling [CMFCToolBarImages::Clear](#cmfctoolbarimages__clear) and adding the images again by calling [CMFCToolBarImages::AddIcon](#cmfctoolbarimages__addicon) or [CMFCToolBarImages::AddImage](#cmfctoolbarimages__addimage).  
  
##  <a name="cmfctoolbarimages__is32bittransparencysupported"></a>  CMFCToolBarImages::Is32BitTransparencySupported  
 Specifies whether the operating system supports 32-bit alpha blending.  
  
```  
static BOOL Is32BitTransparencySupported();
```  
  
### Return Value  
 `TRUE` if 32-bit alpha blending is supported; otherwise `FALSE`.  
  
### Remarks  
 Use this static method to determine at runtime whether the operating system supports 32-bit alpha blending. This feature is supported on [!INCLUDE[Win2kFamily](../../c-runtime-library/includes/win2kfamily_md.md)] and later versions.  
  
##  <a name="cmfctoolbarimages__ispremultiplyautocheck"></a>  CMFCToolBarImages::IsPreMultiplyAutoCheck  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsPreMultiplyAutoCheck() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__isreadonly"></a>  CMFCToolBarImages::IsReadOnly  
 Specifies whether the toolbar images are read-only.  
  
```  
BOOL IsReadOnly() const;

 
```  
  
### Return Value  
 `TRUE` if the toolbar images are read-only, otherwise `FALSE`.  
  
### Remarks  
 The `CMFCToolbarImages` object is read-only when the bitmap with toolbar images was loaded from a read-only file, or when the bitmap was copied in using the `CMFCToolBarImages::CopyTemp` method.  
  
##  <a name="cmfctoolbarimages__isrtl"></a>  CMFCToolBarImages::IsRTL  
 Specifies whether right-to-left (RTL) support is enabled.  
  
```  
static BOOL IsRTL();
```  
  
### Return Value  
 `TRUE` if RTL support is enabled; otherwise `FALSE`.  
  
### Remarks  
 RTL support is used when the application is localized to a language that is read from right to left, such as Arabic, Hebrew, Persian, or Urdu.  
  
##  <a name="cmfctoolbarimages__isuserimageslist"></a>  CMFCToolBarImages::IsUserImagesList  
 Specifies whether this set of toolbar images contains user-defined images.  
  
```  
BOOL IsUserImagesList() const;

 
```  
  
### Return Value  
 `TRUE` if the [CMFCToolbarImages](../../mfc/reference/cmfctoolbarimages-class.md) object contains user-defined toolbar images; otherwise `FALSE`.  
  
##  <a name="cmfctoolbarimages__isvalid"></a>  CMFCToolBarImages::IsValid  
 Indicates whether this set of toolbar images contains a valid toolbar image.  
  
```  
BOOL IsValid() const;

 
```  
  
### Return Value  
 `TRUE` if a [CMFCToolbarImages](../../mfc/reference/cmfctoolbarimages-class.md) object is valid; otherwise `FALSE`.  
  
### Remarks  
 The `CMFCToolBarImages` object is not valid when its handle to a bitmap with toolbar images is `NULL`.  
  
##  <a name="cmfctoolbarimages__load"></a>  CMFCToolBarImages::Load  
 Loads toolbar images from system resources or from a file.  
  
```  
BOOL Load(
    UINT uiResID,  
    HINSTANCE hinstRes=NULL,  
    BOOL bAdd=FALSE);

BOOL Load(
    LPCTSTR lpszBmpFileName,   
    DWORD nMaxFileSize = 819200);
```  
  
### Parameters  
 [in] `uiResID`  
 The ID of a bitmap resource.  
  
 [in] `hinstRes`  
 An instance of the resource DLL.  
  
 [in] `bAdd`  
 `TRUE` to add the loaded bitmap to the existing bitmap, or `FALSE` to replace the existing bitmap.  
  
 [in] `lpszBmpFileName`  
 A path to a disk file from which to load the bitmap.  
  
 [in] `nMaxFileSize`  
 Maximum number of bytes in the bitmap file; or 0 to load the bitmap regardless of file size. If the size of the file exceeds this maximum size, the method returns `FALSE` and does not load the bitmap.  
  
### Return Value  
 `TRUE` if the bitmap was loaded successfully; otherwise `FALSE`.  
  
### Remarks  
 If the file has the read-only attribute, the image list is marked as read-only.  
  
##  <a name="cmfctoolbarimages__loadstr"></a>  CMFCToolBarImages::LoadStr  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL LoadStr(
    LPCTSTR lpszResourceName,  
    HINSTANCE hinstRes = NULL,  
    BOOL bAdd = FALSE);
```  
  
### Parameters  
 [in] `lpszResourceName`  
 [in] `hinstRes`  
 [in] `bAdd`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__mapfromsyscolor"></a>  CMFCToolBarImages::MapFromSysColor  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
static COLORREF __stdcall MapFromSysColor(
    COLORREF color,  
    BOOL bUseRGBQUAD = TRUE);
```  
  
### Parameters  
 [in] `color`  
 [in] `bUseRGBQUAD`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__mapto3dcolors"></a>  CMFCToolBarImages::MapTo3dColors  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL MapTo3dColors(
    BOOL bUseRGBQUAD = TRUE,  
    COLORREF clrSrc = (COLORREF)-1,  
    COLORREF clrDest = (COLORREF)-1);
```  
  
### Parameters  
 [in] `bUseRGBQUAD`  
 [in] `clrSrc`  
 [in] `clrDest`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__maptosyscolor"></a>  CMFCToolBarImages::MapToSysColor  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
static COLORREF __stdcall MapToSysColor(
    COLORREF color,  
    BOOL bUseRGBQUAD = TRUE);
```  
  
### Parameters  
 [in] `color`  
 [in] `bUseRGBQUAD`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__maptosyscoloralpha"></a>  CMFCToolBarImages::MapToSysColorAlpha  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
static COLORREF __stdcall MapToSysColorAlpha(COLORREF color);
```  
  
### Parameters  
 [in] `color`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__mirror"></a>  CMFCToolBarImages::Mirror  
 Replaces the toolbar images with their horizontal mirror image.  
  
```  
BOOL Mirror();
```  
  
### Return Value  
 `TRUE` if the images were successfully mirrored; otherwise `FALSE`.  
  
### Remarks  
 This method is used to support right-to-left writing systems.  
  
##  <a name="cmfctoolbarimages__mirrorbitmap"></a>  CMFCToolBarImages::MirrorBitmap  
 Replaces a bitmap with its horizontal mirror image.  
  
```  
static BOOL MirrorBitmap(
    HBITMAP& hbmp,  
    int cxImage);
```  
  
### Parameters  
 [in, out] `hbmp`  
 A handle to bitmap to mirror.  
  
 [in] `cxImage`  
 Width of the image in pixels.  
  
### Return Value  
 `TRUE` if the image was successfully mirrored; otherwise `FALSE`.  
  
### Remarks  
 This function is used to support right-to-left writing systems.  
  
##  <a name="cmfctoolbarimages__mirrorbitmapvert"></a>  CMFCToolBarImages::MirrorBitmapVert  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
static BOOL __stdcall MirrorBitmapVert(
    HBITMAP& hbmp,  
    int cyImage);
```  
  
### Parameters  
 [in] `hbmp`  
 [in] `cyImage`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__mirrorvert"></a>  CMFCToolBarImages::MirrorVert  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL MirrorVert();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__onsyscolorchange"></a>  CMFCToolBarImages::OnSysColorChange  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void OnSysColorChange();
```  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__premultiplyalpha"></a>  CMFCToolBarImages::PreMultiplyAlpha  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
static BOOL __stdcall PreMultiplyAlpha(
    HBITMAP hbmp,  
    BOOL bAutoCheckPremlt);

BOOL PreMultiplyAlpha(
    HBITMAP hbmp);
```  
  
### Parameters  
 [in] `hbmp`  
 [in] `bAutoCheckPremlt`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__m_bdisabletruecoloralpha"></a>  CMFCToolBarImages::m_bDisableTrueColorAlpha  
 `TRUE` if truecolor alpha blending (32-bit color) is disabled.  
  
```  
static BOOL m_bDisableTrueColorAlpha;  
```  
  
### Remarks  
 Set this member variable to `FALSE` to enable truecolor alpha-blending for toolbar images.  
  
 The default value is `TRUE` for backward compatibility.  
  
##  <a name="cmfctoolbarimages__preparedrawimage"></a>  CMFCToolBarImages::PrepareDrawImage  
 Allocates the resources that are required to draw a toolbar image at a specified size.  
  
```  
BOOL PrepareDrawImage(
    CAfxDrawState& ds,  
    CSize sizeImageDest=CSize(0,
    0)  
    BOOL bFadeInactive=FALSE);
```  
  
### Parameters  
 [in] `ds`  
 A reference to `CAfxDrawState` structure, which stores the allocated resources between image rendering stages.  
  
 [in] `sizeImageDest`  
 Specifies the size of a destination image.  
  
 [in] `bFadeInactive`  
 `TRUE` if you want inactive images to be drawn faded.  
  
### Return Value  
 `TRUE` if the resources required to draw the toolbar image were allocated successfully, otherwise `FALSE`.  
  
### Remarks  
 After you call this method, you can call [CMFCToolBarImages::Draw](#cmfctoolbarimages__draw) any number of times. After you finished drawing, you must call [CMFCToolBarImages::EndDrawImage](#cmfctoolbarimages__enddrawimage) to release the resources allocated by `PrepareDrawImage`.  
  
##  <a name="cmfctoolbarimages__save"></a>  CMFCToolBarImages::Save  
 Stores the toolbar images in a file if this set of toolbar images contains user-defined images.  
  
```  
BOOL Save(LPCTSTR lpszBmpFileName=NULL);
```  
  
### Parameters  
 `lpszBmpFileName`  
 A path to a disk file.  
  
### Return Value  
 `TRUE` if the toolbar images were saved successfully; otherwise `FALSE`.  
  
### Remarks  
 Call this method to store the user-defined images into a disk file. If `lpszBmpFileName` is `NULL`, the method stores the bitmap into the file from which the bitmap was loaded by the [CMFCToolBarImages::Load](#cmfctoolbarimages__load) method.  
  
##  <a name="cmfctoolbarimages__setalwayslight"></a>  CMFCToolBarImages::SetAlwaysLight  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetAlwaysLight(BOOL bAlwaysLight = TRUE);
```  
  
### Parameters  
 [in] `bAlwaysLight`  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__setdisabledimagealpha"></a>  CMFCToolBarImages::SetDisabledImageAlpha  
 Sets the alpha channel (opacity) value that is used for disabled images.  
  
```  
static void SetDisabledImageAlpha(BYTE nValue);
```  
  
### Parameters  
 [in] `nValue`  
 The new value of the alpha channel.  
  
### Remarks  
 Use this method to set a custom alpha value for disabled images. The default value is 127, which causes disabled button images to be semitransparent. If you set a value of 0, disabled images will be completely transparent. If you set a value of 255, disabled images will be completely opaque.  
  
##  <a name="cmfctoolbarimages__setfadedimagealpha"></a>  CMFCToolBarImages::SetFadedImageAlpha  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
static void __stdcall SetFadedImageAlpha(BYTE nValue);
```  
  
### Parameters  
 [in] `nValue`  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__setimagesize"></a>  CMFCToolBarImages::SetImageSize  
 Sets the size of each toolbar image (source size).  
  
```  
void SetImageSize(
    SIZE sizeImage,  
    BOOL bUpdateCount=FALSE);
```  
  
### Parameters  
 [in] `sizeImage`  
 The new size of toolbar images.  
  
### Remarks  
 By default the size of the toolbar image is 16x15 pixels. Call this method if you want to use toolbar images of a different size.  
  
##  <a name="cmfctoolbarimages__setlightpercentage"></a>  CMFCToolBarImages::SetLightPercentage  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetLightPercentage(int nValue);
```  
  
### Parameters  
 [in] `nValue`  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__setmapto3dcolors"></a>  CMFCToolBarImages::SetMapTo3DColors  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetMapTo3DColors(BOOL bMapTo3DColors);
```  
  
### Parameters  
 [in] `bMapTo3DColors`  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__setpremultiplyautocheck"></a>  CMFCToolBarImages::SetPreMultiplyAutoCheck  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetPreMultiplyAutoCheck(BOOL bAuto = TRUE);
```  
  
### Parameters  
 [in] `bAuto`  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__setsingleimage"></a>  CMFCToolBarImages::SetSingleImage  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetSingleImage();
```  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__settransparentcolor"></a>  CMFCToolBarImages::SetTransparentColor  
 Sets the transparent color of the toolbar images.  
  
```  
COLORREF SetTransparentColor(COLORREF clrTransparent);
```  
  
### Parameters  
 [in] `clrTransparent`  
 An RGB value.  
  
### Return Value  
 The previous transparent color.  
  
### Remarks  
 When you or the framework call [CMFCToolBarImages::Draw](#cmfctoolbarimages__draw), the method does not draw any pixel that matches the color specified by `clrTransparent`.  
  
##  <a name="cmfctoolbarimages__updateimage"></a>  CMFCToolBarImages::UpdateImage  
 Updates a user-defined toolbar image from a bitmap.  
  
```  
BOOL UpdateImage(
    int iImage,  
    HBITMAP hbmp);
```  
  
### Parameters  
 [in] `iImage`  
 The zero-based index of the image to update.  
  
 [in] `hbmp`  
 A handle to the bitmap from which to update the image.  
  
### Return Value  
 `TRUE` if the image was updated successfully; `FALSE` if the image list is not user-defined or temporary.  
  
##  <a name="cmfctoolbarimages__convertto32bits"></a>  CMFCToolBarImages::ConvertTo32Bits  
 Converts underlined bitmaps to 32 bpp images.  
  
```  
BOOL ConvertTo32Bits(COLORREF clrTransparent = (COLORREF)-1);
```  
  
### Parameters  
 `clrTransparent`  
 Specifies transparent color of underlined bitmaps.  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__getbitsperpixel"></a>  CMFCToolBarImages::GetBitsPerPixel  
 Returns current resolution of underlined images.  
  
```  
int GetBitsPerPixel() const;

 
```  
  
### Return Value  
 An integer value representing the current resolution of underlined images, in bits per pixel (bpp).  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__getscale"></a>  CMFCToolBarImages::GetScale  
 Returns the current scale ratio of underlined images.  
  
```  
double GetScale() const;

 
```  
  
### Return Value  
 A value representing the current scale ratio.  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__isscaled"></a>  CMFCToolBarImages::IsScaled  
 Tells whether the underlined images are scaled or not.  
  
```  
BOOL IsScaled () const;

 
```  
  
### Return Value  
 `TRUE` if underlined images are scaled; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfctoolbarimages__smoothresize"></a>  CMFCToolBarImages::SmoothResize  
 Smoothly resizes underlined images.  
  
```  
BOOL SmoothResize(double dblImageScale);
```  
  
### Parameters  
 `dblImageScale`  
 Scale ratio.  
  
### Return Value  
 `TRUE` if resize succeeds; otherwise `FALSE`.  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)   
 [CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md)
