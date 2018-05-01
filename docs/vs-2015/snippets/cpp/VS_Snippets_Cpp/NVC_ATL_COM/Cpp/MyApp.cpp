// MyApp.cpp : Implementation of CMyApp

#include "stdafx.h"
#include "MyApp.h"
#include "MyDoc.h"


// CMyApp

// <Snippet11>
STDMETHODIMP CMyApp::CreateDocument( /* [out, retval] */ IDocument** ppDoc)
{
   *ppDoc = NULL;
   return CMyDoc::CreateInstance(ppDoc);
}
// </Snippet11>