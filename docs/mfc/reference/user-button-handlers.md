---
description: "Learn more about: User Button Handlers"
title: "User Button Handlers"
ms.date: "11/04/2016"
f1_keywords: ["ON_BN_HILITE", "ON_BN_DOUBLECLICKED", "ON_BN_CLICKED", "ON_BN_PAINT", "ON_BN_DISABLE", "ON_BN_UNHILITE"]
helpviewer_keywords: ["ON_BN_PAINT", "user buttons [MFC]", "ON_BN_DOUBLECLICKED [MFC]", "ON_BN_DISABLE [MFC]", "ON_BN_UNHILITE [MFC]", "ON_BN_HILITE [MFC]", "ON_BN_CLICKED [MFC]"]
---
# User Button Handlers

>[!NOTE]
> The Microsoft Foundation Classes (MFC) library continues to be supported. However, we're no longer adding features or updating the documentation.

The following map entries correspond to the function prototypes.

|Map entry|Function prototype|
|---------------|------------------------|
|ON_BN_CLICKED( \<id>, \<memberFxn> )|afx_msg void memberFxn( );|
|ON_BN_DISABLE( \<id>, \<memberFxn> )|afx_msg void memberFxn( );|
|ON_BN_DOUBLECLICKED( \<id>, \<memberFxn> )|afx_msg void memberFxn( );|
|ON_BN_HILITE( \<id>, \<memberFxn> )|afx_msg void memberFxn( );|
|ON_BN_PAINT( \<id>, \<memberFxn> )|afx_msg void memberFxn( );|
|ON_BN_UNHILITE( \<id>, \<memberFxn> )|afx_msg void memberFxn( );|

## See also

[Message Maps](../../mfc/reference/message-maps-mfc.md)
