---
description: "Learn more about: DAO Database Engine Initialization and Termination"
title: "DAO Database Engine Initialization and Termination"
ms.date: "09/17/2019"
helpviewer_keywords: ["DAO (Data Access Objects), termination", "DAO (Data Access Objects), initialization"]
ms.assetid: a7edf31c-e7c2-4f3e-aada-63c3e48781da
---
# DAO Database Engine Initialization and Termination

DAO is used with Access databases and is supported through Office 2013. DAO 3.6 is the final version, and it is considered obsolete. When using MFC DAO objects, the DAO database engine must first be initialized and then terminated before your application or DLL quits. Two functions, `AfxDaoInit` and `AfxDaoTerm`, perform these tasks.

### DAO Database Engine Initialization and Termination

|Name|Description|
|-|-|
|[AfxDaoInit](#afxdaoinit)|Initializes the DAO database engine.|
|[AfxDaoTerm](#afxdaoterm)|Terminates the DAO database engine.|

## <a name="afxdaoinit"></a> AfxDaoInit

This function initializes the DAO database engine.

```

void AfxDaoInit();

throw(CDaoException*);
```

### Remarks

In most cases, you don't need to call `AfxDaoInit` because the application automatically calls it when it is needed.

For related information, and for an example of calling `AfxDaoInit`, see [Technical Note 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).

### Requirements

  **Header** afxdao.h

## <a name="afxdaoterm"></a> AfxDaoTerm

This function terminates the DAO database engine.

```

void AfxDaoTerm();
```

### Remarks

Typically, you only need to call this function in a regular MFC DLL; an application will automatically call `AfxDaoTerm` when it is needed.

In regular MFC DLLs, call `AfxDaoTerm` before the `ExitInstance` function, but after all MFC DAO objects have been destroyed.

For related information, see [Technical Note 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).

### Requirements

  **Header** afxdao.h

## See also

[Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)
