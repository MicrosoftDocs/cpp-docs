// MyControl.cpp : Implementation of CMyControl
#include "stdafx.h"
#include "MyControl.h"
#include "Words.h"
#include "VariantArrayCollection.h"
#include "VariantCollection.h"
#include "MyAutoCritClass.h"
#include "MyCircle.h"
#include "MyClass.h"
#include "MyService.h"

// CMyControl

STDMETHODIMP CMyControl::GetIOleObject(void)
{
// <Snippet15>
   // Retrieve the control's IOleObject interface. Note interface 
   // is automatically released when pOleObject goes out of scope

   CComPtr<IOleObject> pOleObject;
   ControlQueryInterface(IID_IOleObject, (void**)&pOleObject);
// </Snippet15>

   return S_OK;
}

STDMETHODIMP CMyControl::CComControlCreateControlWindow(void)
{
// <Snippet16>
   RECT rc = {10,10,210,110};
   HWND hwndParent, hwndControl;

   // get HWND of control's parent window from IOleInPlaceSite interface
   m_spInPlaceSite->GetWindow(&hwndParent);
   hwndControl = CreateControlWindow(hwndParent, rc);
// </Snippet16>

   return S_OK;
}

// <Snippet17>
STDMETHODIMP CMyControl::put_MyText(BSTR newVal)
{
   // store newVal in CComBstr member
   m_bstrMyText = newVal;

   // note the DISPID for the MyText property is 3 in this example
   FireOnChanged(3);

   return S_OK;
}
// </Snippet17>

// <Snippet18>
STDMETHODIMP CMyControl::put_MyTitle(BSTR newVal)
{
   // the DISPID for MyTitle in this example is 4
   DISPID dispID = 4;

   // make sure we can change the property
   if (FireOnRequestEdit(dispID) == S_FALSE)
      return S_FALSE;

   // store newVal in CComBstr member
   m_bstrMyTitle = newVal;

   // signal that the property has been changed
   FireOnChanged(dispID);

   return S_OK;
}
// </Snippet18>

// <Snippet21>
STDMETHODIMP CMyControl::put_Shape(int newVal)
{
   // store newVal in m_nShape user-defined member
   m_nShape = newVal;

   // notify container to redraw control
   FireViewChange();
   return S_OK;
}
// </Snippet21>

STDMETHODIMP CMyControl::TestCWords(void)
{
   CComObject<CWords>* pWords;
   CComObject<CWords>::CreateInstance(&pWords);

   return S_OK;
}

STDMETHODIMP CMyControl::TestVAC(void)
{
   CComObject<CVariantArrayCollection>* pVAC;
   CComObject<CVariantArrayCollection>::CreateInstance(&pVAC);

   IUnknown* pUnk = NULL;
   pVAC->get__NewEnum(&pUnk);

   pUnk->Release();

   return S_OK;
}

STDMETHODIMP CMyControl::TestVC(void)
{
   CComObject<CVariantCollection>* pVC;
   CComObject<CVariantCollection>::CreateInstance(&pVC);

   IUnknown* pUnk = NULL;
   pVC->get__NewEnum(&pUnk);

   pUnk->Release();

   return S_OK;
}

STDMETHODIMP CMyControl::TestMyAutoCrit(void)
{
   CMyAutoCritClass< CComMultiThreadModel > macc;
   macc.InternalAddRef();
   macc.Lock();
   macc.Unlock();
   macc.InternalRelease();

   return S_OK;
}

STDMETHODIMP CMyControl::TestMyCircle(void)
{
// <Snippet39>
   // Create a local instance of COM object CMyCircle.
   double x;
   CComObject<CMyCircle>* pCircle;
   HRESULT hRes = CComObject<CMyCircle>::CreateInstance(&pCircle);
   ATLASSERT(SUCCEEDED(hRes));

   // Increment reference count immediately
   pCircle->AddRef();

   // Access method of COM object
   hRes = pCircle->get_XCenter(&x);

   // Decrement reference count when done
   pCircle->Release();
   pCircle = NULL;
// </Snippet39>

   return S_OK;
}

STDMETHODIMP CMyControl::TestMyAggObject(void)
{
   IMyAggObject* pMAO;
   CoCreateInstance(CLSID_MyAggObject, NULL, CLSCTX_ALL, IID_IMyAggObject, (void**)&pMAO);
   pMAO->Release();

   return S_OK;
}

// <Snippet42>
void MyFunc()
{
   CComObjectStack<CMyClass2> Tempobj;
   //...
}
// </Snippet42>

STDMETHODIMP CMyControl::UseCComObjectStack(void)
{
   MyFunc();

   return S_OK;
}

// This is here because of an RTM bug that causes CComUnkArray::Add to not compile.
// It's been fixed in a current build but Parsnip is not yet updated to that build,
// so we'll fake CComUnkArray until Parsnip is updated.
template <unsigned int nMaxSize>
class CComFakeArray
{
public:
   CComFakeArray() {}
   void Add(IUnknown* pUnk) { pUnk; }
   IUnknown** begin() { return NULL; }
   IUnknown** end() { return NULL; }
};

STDMETHODIMP CMyControl::CComUnkArrayEnd(void)
{
//    CComUnkArray<2> m_vec;
   CComFakeArray<2> m_vec;
   m_vec.Add(GetUnknown());
   m_vec.Add(GetUnknown());

// <Snippet44>
   IUnknown** p = m_vec.begin();
   while(p != m_vec.end())
   {
      // Do something with *p
      p++;
   }
// </Snippet44>

   return S_OK;
}

STDMETHODIMP CMyControl::DoAtlHiMetricToPixel(void)
{
   SIZE sz;
// <Snippet49>
   // m_sizeExtent is a member of CComControlBase that holds the 
   // control's extents in HIMETRIC units.
   // Use AtlHiMetricToPixel to find the extent of the control in pixels.
   AtlHiMetricToPixel(&m_sizeExtent, &sz);
   ATLTRACE("Width = %d, Height = %d\n", sz.cx, sz.cy);
// </Snippet49>

   return S_OK;
}

DWORD m_dwThreadID;
// <Snippet50>
//marshaling interface from one thread to another

//IStream ptr to hold serialized presentation of interface ptr
IStream* g_pStm;

//forward declaration
DWORD WINAPI ThreadProc(LPVOID lpParameter);

HRESULT WriteInterfacePtrToStream(IMyCircle *pCirc)
{
   //marshal the interface ptr to another thread
   //pCirc has to be pointer to actual object & not a proxy
   HRESULT hr = AtlMarshalPtrInProc(pCirc, IID_IMyCircle, &g_pStm);

   //m_dwThreadID is a DWORD holding thread ID of thread being created.
   CreateThread(NULL, 0, ThreadProc, NULL, 0, &m_dwThreadID);
   return hr;
}

DWORD WINAPI ThreadProc(LPVOID /*lpParameter*/)
{
   // CoInitializeEx is per thread, so initialize COM on this thread
   // (required by AtlUnmarshalPtr)
   HRESULT hr = CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);
   if (SUCCEEDED(hr))
   {
      IMyCircle* pCirc;

      //unmarshal IMyCircle ptr from the stream
      hr = AtlUnmarshalPtr(g_pStm, IID_IMyCircle, (IUnknown**)&pCirc);

      // use IMyCircle ptr to call its methods
      double center;
      pCirc->get_XCenter(&center);

      //release the stream if no other thread requires it 
      //to unmarshal the IMyCircle interface pointer
      hr = AtlFreeMarshalStream(g_pStm);

      CoUninitialize();
   }

   return hr;
}
// </Snippet50>

STDMETHODIMP CMyControl::DoAtlMarshalPtrInProc(void)
{
   CComObject<CMyCircle>* pCirc;
   CComObject<CMyCircle>::CreateInstance(&pCirc);
   pCirc->AddRef();
   WriteInterfacePtrToStream(pCirc);
   pCirc->Release();

   return S_OK;
}

// <Snippet51>
// Initialize our control's default size to 100 by 25 pixels
CMyControl::CMyControl()
{
    // width = 100 pixels, height = 25 pixels
    SIZE sz = { 100, 25 };
    // convert pixels to himetric
    AtlPixelToHiMetric(&sz, &m_sizeExtent);
    // store natural extent
    m_sizeNatural = m_sizeExtent;
}
// </Snippet51>

BOOL ErrorProneFunc()
{
   return FALSE;
}

// <Snippet52>
STDMETHODIMP CMyControl::MyErrorProneMethod()
{
   BOOL bSucceeded = ErrorProneFunc();
   if (bSucceeded)
      return S_OK;
   else
      // hRes is set to DISP_E_EXCEPTION
      return AtlReportError(GetObjectCLSID(), L"My error message");
}
// </Snippet52>

STDMETHODIMP CMyControl::TestMyService(void)
{
   CComObject<CMyService>* pms;
   CComObject<CMyService>::CreateInstance(&pms);
   IBindHost* pbh = NULL;
   HRESULT hr = pms->QueryService(SID_SBindHost, IID_IBindHost, (void**)&pbh);
   hr;
   pbh->Release();

   return S_OK;
}
