// MyClass.cpp : implementation file
//

#include "stdafx.h"
#include "MFCConnectionPoints.h"
#define INITGUID
#include "guiddef.h"
#include "MyClass.h"


// CMyClass

IMPLEMENT_DYNAMIC(CMyClass, CCmdTarget)


// <Snippet3>
CMyClass::CMyClass()
{
   EnableConnections();
}
// </Snippet3>

CMyClass::~CMyClass()
{
}


BEGIN_MESSAGE_MAP(CMyClass, CCmdTarget)
END_MESSAGE_MAP()



// CMyClass message handlers

// <Snippet2>
BEGIN_CONNECTION_MAP(CMyClass, CCmdTarget)
    CONNECTION_PART(CMyClass, IID_ISampleSink, SampleConnPt)
END_CONNECTION_MAP()
// </Snippet2>

BEGIN_INTERFACE_MAP(CMyClass, CCmdTarget)
   INTERFACE_PART(CMyClass, IID_IConnectionPointContainer, ConnPtContainer)
END_INTERFACE_MAP()

// <Snippet4>
void CMyClass::CallSinkFunc()
{
    POSITION pos = m_xSampleConnPt.GetStartPosition();
    ISampleSink* pSampleSink;
    while( pos != NULL )
    {
        pSampleSink = (ISampleSink*)(m_xSampleConnPt.GetNextConnection(pos));
        if(pSampleSink != NULL)
            pSampleSink->SinkFunc();
    }
}
// </Snippet4>


BEGIN_INTERFACE_MAP(CMySink, CCmdTarget)
   INTERFACE_PART(CMySink, IID_ISampleSink, Sinky)
END_INTERFACE_MAP()

CMySink::CMySink()
{
}

// <Snippet5>
STDMETHODIMP_(ULONG) CMySink::XSinky::AddRef()
{
   METHOD_PROLOGUE(CMySink, Sinky);
   return pThis->InternalAddRef();
}
// </Snippet5>

STDMETHODIMP_(ULONG) CMySink::XSinky::Release()
{
   METHOD_PROLOGUE(CMySink, Sinky);
   return pThis->InternalRelease();
}

STDMETHODIMP CMySink::XSinky::QueryInterface(REFIID iid, void** ppObj)
{
   HRESULT hr = E_FAIL;
   *ppObj = NULL;

   if (IID_IUnknown == iid || IID_ISampleSink == iid)
   {
      *ppObj = this;
      AddRef();
      hr = S_OK;
   }
   else
   {
      hr = E_NOINTERFACE;
   }

   return hr;
}

HRESULT CMySink::XSinky::SinkFunc()
{
   METHOD_PROLOGUE(CMySink, Sinky);
   return S_OK;
}

void CMyClass::DummyFunc()
{
// <Snippet6>
   AFX_MANAGE_STATE(AfxGetStaticModuleState( ))
// </Snippet6>
}