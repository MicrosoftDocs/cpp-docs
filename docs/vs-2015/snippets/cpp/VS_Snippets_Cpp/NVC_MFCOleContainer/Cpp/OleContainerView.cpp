// OleContainerView.cpp : implementation of the COleContainerView class
//

#include "stdafx.h"
#include <afxpriv.h>
#include "NVC_MFCOleContainer.h"

#include "OleContainerDoc.h"
#include "CntrItem.h"
#include "OleContainerView.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif

class IMyComObject : public COleDispatchDriver
{
public:
   CString GetString(DISPID dispid);
   void SetString(DISPID dispid, LPCTSTR pszVal);
};


// COleContainerView

IMPLEMENT_DYNCREATE(COleContainerView, CView)

BEGIN_MESSAGE_MAP(COleContainerView, CView)
	ON_WM_DESTROY()
	ON_WM_SETFOCUS()
	ON_WM_SIZE()
	ON_COMMAND(ID_OLE_INSERT_NEW, &COleContainerView::OnInsertObject)
	ON_COMMAND(ID_CANCEL_EDIT_CNTR, &COleContainerView::OnCancelEditCntr)
	ON_COMMAND(ID_FILE_PRINT, &COleContainerView::OnFilePrint)
   ON_COMMAND(ID_DISPATCH_ATTACHDISPATCH, &COleContainerView::OnAttachDispatch)
   ON_COMMAND(ID_DISPATCH_CREATEDISPATCH, &COleContainerView::OnCreateDispatch)
   ON_COMMAND(ID_DISPATCH_DETACHDISPATCH, &COleContainerView::OnDispatchDetachdispatch)
   ON_COMMAND(ID_DISPATCH_SETPROPERTY, &COleContainerView::OnDispatchSetproperty)
   ON_COMMAND(ID_DISPATCH_LPDISPATCH, &COleContainerView::OnDispatchLpdispatch)
   ON_COMMAND(ID_DISPATCH_M, &COleContainerView::OnDispatchM_bAutoRelease)
   ON_WM_CREATE()
END_MESSAGE_MAP()

// COleContainerView construction/destruction

COleContainerView::COleContainerView()
{
	m_pSelection = NULL;

}

COleContainerView::~COleContainerView()
{
}

BOOL COleContainerView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// COleContainerView drawing

void COleContainerView::OnDraw(CDC* /*pDC*/)
{
	COleContainerDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}
void COleContainerView::OnInitialUpdate()
{
	CView::OnInitialUpdate();


	// TODO: remove this code when final selection model code is written
	m_pSelection = NULL;    // initialize selection

}

void COleContainerView::OnDestroy()
{
	// Deactivate the item on destruction; this is important
	// when a splitter view is being used
   COleClientItem* pActiveItem = GetDocument()->GetInPlaceActiveItem(this);
   if (pActiveItem != NULL && pActiveItem->GetActiveView() == this)
   {
      pActiveItem->Deactivate();
      ASSERT(GetDocument()->GetInPlaceActiveItem(this) == NULL);
   }
   CView::OnDestroy();
}



// OLE Client support and commands

BOOL COleContainerView::IsSelected(const CObject* pDocItem) const
{
	// The implementation below is adequate if your selection consists of
	//  only COleContainerItem objects.  To handle different selection
	//  mechanisms, the implementation here should be replaced

	// TODO: implement this function that tests for a selected OLE client item

	return pDocItem == m_pSelection;
}

void COleContainerView::OnInsertObject()
{
	// Invoke the standard Insert Object dialog box to obtain information
	//  for new COleContainerItem object
	COleInsertDialog dlg;
	if (dlg.DoModal(COleInsertDialog::DocObjectsOnly) != IDOK)
		return;

	BeginWaitCursor();

	COleContainerItem* pItem = NULL;
	TRY
	{
		// Create new item connected to this document
		COleContainerDoc* pDoc = GetDocument();
		ASSERT_VALID(pDoc);
		pItem = new COleContainerItem(pDoc);
		ASSERT_VALID(pItem);

		// Initialize the item from the dialog data
		if (!dlg.CreateItem(pItem))
			AfxThrowMemoryException();  // any exception will do
		ASSERT_VALID(pItem);
		
		pItem->DoVerb(OLEIVERB_SHOW, this);

		ASSERT_VALID(pItem);
		// As an arbitrary user interface design, this sets the selection
		//  to the last item inserted

		// TODO: reimplement selection as appropriate for your application
		m_pSelection = pItem;   // set selection to last inserted item
		pDoc->UpdateAllViews(NULL);
	}
	CATCH(CException, e)
	{
		if (pItem != NULL)
		{
			ASSERT_VALID(pItem);
			pItem->Delete();
		}
		AfxMessageBox(IDP_FAILED_TO_CREATE);
	}
	END_CATCH

	EndWaitCursor();
}

// The following command handler provides the standard keyboard
//  user interface to cancel an in-place editing session.  Here,
//  the container (not the server) causes the deactivation
void COleContainerView::OnCancelEditCntr()
{
	// Close any in-place active item on this view.
	COleClientItem* pActiveItem = GetDocument()->GetInPlaceActiveItem(this);
	if (pActiveItem != NULL)
	{
		pActiveItem->Close();
	}
	ASSERT(GetDocument()->GetInPlaceActiveItem(this) == NULL);
}

// Special handling of OnSetFocus and OnSize are required for a container
//  when an object is being edited in-place
void COleContainerView::OnSetFocus(CWnd* pOldWnd)
{
	COleClientItem* pActiveItem = GetDocument()->GetInPlaceActiveItem(this);
	if (pActiveItem != NULL &&
		pActiveItem->GetItemState() == COleClientItem::activeUIState)
	{
		// need to set focus to this item if it is in the same view
		CWnd* pWnd = pActiveItem->GetInPlaceWindow();
		if (pWnd != NULL)
		{
			pWnd->SetFocus();   // don't call the base class
			return;
		}
	}

	CView::OnSetFocus(pOldWnd);
}

void COleContainerView::OnSize(UINT nType, int cx, int cy)
{
	CView::OnSize(nType, cx, cy);
	COleClientItem* pActiveItem = GetDocument()->GetInPlaceActiveItem(this);
	if (pActiveItem != NULL)
		pActiveItem->SetItemRects();
}

void COleContainerView::OnFilePrint()
{
	//By default, we ask the Active document to print itself
	//using IOleCommandTarget. If you don't want this behavior
	//remove the call to COleDocObjectItem::DoDefaultPrinting.
	//If the call fails for some reason, we will try printing
	//the docobject using the IPrint interface.
	CPrintInfo printInfo;
	ASSERT(printInfo.m_pPD != NULL); 
	if (S_OK == COleDocObjectItem::DoDefaultPrinting(this, &printInfo))
		return;
	
	CView::OnFilePrint();

}



// COleContainerView diagnostics

#ifdef _DEBUG
void COleContainerView::AssertValid() const
{
	CView::AssertValid();
}

void COleContainerView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

COleContainerDoc* COleContainerView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(COleContainerDoc)));
	return (COleContainerDoc*)m_pDocument;
}
#endif //_DEBUG


// COleContainerView message handlers

// <Snippet3>
void COleContainerView::OnAttachDispatch()
{
   CLSID clsidWMP;
   LPDISPATCH pWMPDispatch = NULL;
   COleDispatchDriver oddWMP;

   try
   {
      AfxCheckError(::CLSIDFromProgID(_T("WMPlayer.OCX"), &clsidWMP));

// <Snippet33>
      AfxCheckError(::CoCreateInstance(clsidWMP, NULL, CLSCTX_INPROC_SERVER, 
         IID_IDispatch, (LPVOID*)&pWMPDispatch));

      oddWMP.AttachDispatch(pWMPDispatch, TRUE);
// </Snippet33>
      pWMPDispatch = NULL; // our COleDispatchDriver now owns the interface

      CString strUIMode;
      oddWMP.GetProperty(23, VT_BSTR, (void*)&strUIMode);
      TRACE(_T("WMP uiMode is %s.\n"), strUIMode);
   }
   catch (COleException* pe)
   {
      pe->ReportError();
      pe->Delete();
   }
   catch (CMemoryException* pe)
   {
      pe->ReportError();
      pe->Delete();
   }

   // cleanup
   if (NULL != pWMPDispatch)
   {
      pWMPDispatch->Release();   
   }

   // COleDispatchDriver automatically releases the dispatch interface when
   // it goes out of scope if m_bAutoRelease is TRUE.
}
// </Snippet3>

// <Snippet4>
void COleContainerView::OnCreateDispatch()
{
   COleDispatchDriver disp;
   COleException* pe = new COleException;
   
   try 
   {
      // Create instance of Microsoft System Information Control 
      // by using ProgID.
      if (disp.CreateDispatch(_T("WMPlayer.OCX"), pe))
      {
         //Get uiMode.     
         CString strUIMode;
         disp.InvokeHelper(23, DISPATCH_PROPERTYGET, VT_BSTR, 
            (void*)&strUIMode, NULL);            

         CString strMsg;
         strMsg.Format(_T("WMP uiMode is %s."), strUIMode);
         AfxMessageBox(strMsg);
      }
      else
      {
         throw pe;
      }
   }
   //Catch control-specific exceptions.
    catch (COleDispatchException* pe) 
   {
      CString cStr;

      if (!pe->m_strSource.IsEmpty())
         cStr = pe->m_strSource + _T(" - ");
      if (!pe->m_strDescription.IsEmpty())
         cStr += pe->m_strDescription;
      else
         cStr += _T("unknown error");

      AfxMessageBox(cStr, MB_OK, 
         (pe->m_strHelpFile.IsEmpty()) ?  0 : pe->m_dwHelpContext);

      pe->Delete();
   }
   //Catch all MFC exceptions, including COleExceptions.
   // OS exceptions will not be caught.
   catch (CException* pe) 
   {
      TRACE(_T("%s(%d): OLE Execption caught: SCODE = %x"), 
         __FILE__, __LINE__, COleException::Process(pe));
      pe->Delete();
   }

   pe->Delete();
}
// </Snippet4>

// <Snippet5>
LPDISPATCH CreateLPDispatch(LPCTSTR lpszProgId)
{
    COleDispatchDriver disp;

    disp.CreateDispatch(lpszProgId);

    return disp.DetachDispatch();
}
// </Snippet5>

void COleContainerView::OnDispatchDetachdispatch()
{
   LPDISPATCH pDisp = CreateLPDispatch(_T("WMPlayer.OCX"));
   if (NULL != pDisp)
   {
      pDisp->Release();   
   }
   else
   {
      AfxMessageBox(_T("Couldn't create WMP."));
   }
}

// <Snippet6>
CString IMyComObject::GetString(DISPID dispid)
{
    CString result;
    GetProperty(dispid, VT_BSTR, (void*)&result);
    return result;
}
// </Snippet6>

// <Snippet7>
void IMyComObject::SetString(DISPID dispid, LPCTSTR propVal)
{
    SetProperty(dispid, VT_BSTR, propVal);
}
// </Snippet7>

void COleContainerView::OnDispatchSetproperty()
{
   IMyComObject mco;
   mco.CreateDispatch(_T("WMPlayer.OCX"));
   CString strOld = mco.GetString(23);
   mco.SetString(23, _T("mini"));
   CString strNew = mco.GetString(23);
   TRACE(_T("uiMode was %s, is now %s"), strOld, strNew);
}

void COleContainerView::OnDispatchLpdispatch()
{
// <Snippet8>
   COleDispatchDriver disp;
   if (disp.CreateDispatch(_T("WMPlayer.OCX")))
   {
      IDispatch* pDispatch = disp; //COleDispatchDriver::operator
                                   //LPDISPATCH is called here
      IUnknown* pUnkn = NULL;
      HRESULT hr = pDispatch->QueryInterface(IID_IUnknown ,(void**)&pUnkn);
      if (SUCCEEDED(hr))
      {
         //Do something...
         pUnkn->Release();
      }
   }
// </Snippet8>
}

void COleContainerView::OnDispatchM_bAutoRelease()
{
   COleDispatchDriver* pDisp = new COleDispatchDriver();
   COleException* pe = new COleException();
   pDisp->CreateDispatch(_T("WMPlayer.OCX"), pe);
   BOOL bError = TRUE;
// <Snippet9>
   // Clean up by forcing Release to be called
   // on COleDispatchDriver object and delete
   if (bError)
   {
      pDisp->m_bAutoRelease = TRUE;
      delete pDisp;
      pDisp = NULL;
   }
// </Snippet9>

   pe->Delete();
}

// <Snippet21>
DROPEFFECT COleContainerView::OnDragOver(COleDataObject* pDataObject, 
   DWORD dwKeyState, CPoint point)
{
   UNREFERENCED_PARAMETER(pDataObject);
   UNREFERENCED_PARAMETER(point);

   DROPEFFECT de = DROPEFFECT_NONE;
   //Determine the type of operation
   if((dwKeyState & MK_SHIFT) && (dwKeyState & MK_CONTROL))
      de = DROPEFFECT_LINK;
   else if(dwKeyState &  MK_CONTROL)
      de = DROPEFFECT_COPY;
   else if(dwKeyState & MK_SHIFT)
      de = DROPEFFECT_MOVE;
   return de;
}
// </Snippet21>

int COleContainerView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
   if (CView::OnCreate(lpCreateStruct) == -1)
      return -1;

   m_DropTarget.Register(this);

   return 0;
}

