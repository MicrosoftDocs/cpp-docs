// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "NVC_MFCOleContainer.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CMDIFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CMDIFrameWnd)
	ON_WM_CREATE()
   ON_COMMAND(ID_COLECURRENCY_COLECURRENCY, &CMainFrame::OnColecurrencyColecurrency)
   ON_COMMAND(ID_COLECURRENCY_FORMAT, &CMainFrame::OnColecurrencyFormat)
   ON_COMMAND(ID_COLECURRENCY_GETSTATUS, &CMainFrame::OnColecurrencyGetstatus)
   ON_COMMAND(ID_COLECURRENCY_PARSECURRENCY, &CMainFrame::OnColecurrencyParsecurrency)
   ON_COMMAND(ID_COLECURRENCY_SETCURRENCY, &CMainFrame::OnColecurrencySetcurrency)
   ON_COMMAND(ID_COLECURRENCY_EQUAL, &CMainFrame::OnColecurrencyEqual)
   ON_COMMAND(ID_COLECURRENCY_PLUSMINUS, &CMainFrame::OnColecurrencyPlusMinus)
   ON_COMMAND(ID_COLECURRENCY_PLUSMINUSEQUAL, &CMainFrame::OnColecurrencyPlusMinusEqual)
   ON_COMMAND(ID_COLECURRENCY_MULTDIV, &CMainFrame::OnColecurrencyMultDiv)
   ON_COMMAND(ID_COLECURRENCY_RELATIONALOPS, &CMainFrame::OnColecurrencyRelationalops)
   ON_COMMAND(ID_COLECURRENCY_MULTDIVEQUAL, &CMainFrame::OnColecurrencyMultdivequal)
   ON_COMMAND(ID_COLEEXCEPTION_M, &CMainFrame::OnColeexceptionM_sc)
   ON_COMMAND(ID_COLESAFEARRAY_ACCESSDATA, &CMainFrame::OnColesafearrayAccessdata)
   ON_COMMAND(ID_COLESAFEARRAY_CREATE, &CMainFrame::OnColesafearrayCreate)
   ON_COMMAND(ID_COLESAFEARRAY_CREATEONEDIM, &CMainFrame::OnColesafearrayCreateonedim)
   ON_COMMAND(ID_COLESAFEARRAY_GETELEMENT, &CMainFrame::OnColesafearrayGetelement)
   ON_COMMAND(ID_COLESAFEARRAY_GETLBOUND, &CMainFrame::OnColesafearrayGetlbound)
   ON_COMMAND(ID_COLESAFEARRAY_GETUBOUND, &CMainFrame::OnColesafearrayGetubound)
   ON_COMMAND(ID_COLESAFEARRAY_PUTELEMENT, &CMainFrame::OnColesafearrayPutelement)
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // status line indicator
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};


// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	// TODO: add member initialization code here
}

CMainFrame::~CMainFrame()
{
}


int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CMDIFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP
		| CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
		!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
	{
		TRACE0("Failed to create toolbar\n");
		return -1;      // fail to create
	}

	if (!m_wndStatusBar.Create(this) ||
		!m_wndStatusBar.SetIndicators(indicators,
		  sizeof(indicators)/sizeof(UINT)))
	{
		TRACE0("Failed to create status bar\n");
		return -1;      // fail to create
	}

	// TODO: Delete these three lines if you don't want the toolbar to be dockable
	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);

	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CMDIFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return TRUE;
}


// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CMDIFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CMDIFrameWnd::Dump(dc);
}

#endif //_DEBUG


// CMainFrame message handlers




void CMainFrame::OnColecurrencyColecurrency()
{
// <Snippet10>
   COleCurrency curZero;         // value: 0.0000
   COleCurrency curA(4, 500);    // value: 4.0500
   COleCurrency curB(2, 11000);  // value: 3.1000
   COleCurrency curC(2, -50);    // value: 1.9950
// </Snippet10>
}

void CMainFrame::OnColecurrencyFormat()
{
// <Snippet11>
   COleCurrency curA;           // value: 0.0000
   curA.SetCurrency(4, 500);    // value: 4.0500

   // value returned: 4.05
   curA.Format(0, MAKELCID(MAKELANGID(LANG_CHINESE,
      SUBLANG_CHINESE_SINGAPORE), SORT_DEFAULT));
   // value returned: 4,05
   curA.Format(0, MAKELCID(MAKELANGID(LANG_GERMAN,
      SUBLANG_GERMAN_AUSTRIAN), SORT_DEFAULT));
// </Snippet11>
}

void CMainFrame::OnColecurrencyGetstatus()
{
// <Snippet12>
   // even an empty COleCurrency is valid
   COleCurrency cy;
   ASSERT(cy.GetStatus() == COleCurrency::valid);

   // always valid after being set
   cy.SetCurrency(4, 500);
   ASSERT(cy.GetStatus() == COleCurrency::valid);

   // some conversions aren't possible and will
   // cause an invalid state, like this:
   CByteArray array;
   COleVariant varBogus(array);
   cy = varBogus;
   ASSERT(cy.GetStatus() == COleCurrency::invalid);
// </Snippet12>
}

void CMainFrame::OnColecurrencyParsecurrency()
{
// <Snippet13>
   // works if default locale has dot decimal point
   COleCurrency cur;
   cur.ParseCurrency(_T("$135.95"), 0);
   ASSERT(cur == COleCurrency(135, 9500));
// </Snippet13>
}

void CMainFrame::OnColecurrencySetcurrency()
{
// <Snippet14>
   COleCurrency curA;           // value: 0.0000
   curA.SetCurrency(4, 500);    // value: 4.0500
   curA.SetCurrency(2, 11000);  // value: 3.1000
   curA.SetCurrency(2, -50);    // value: 1.9950
// </Snippet14>
}

void CMainFrame::OnColecurrencyEqual()
{
// <Snippet15>
   // set to 35.0050
   COleCurrency cur1(35, 50);
   COleCurrency cur2;

   // operator= copies COleCurrency types
   cur2 = cur1;
   ASSERT(cur1 == cur2);

   // can be used to assign a CURRENCY type, as well
   CURRENCY cy;
   cy.Hi = 0;
   cy.Lo = 350050;
   cy.int64 = 350050;

   // perform assignment
   COleCurrency cur3;
   cur3 = cy;
   ASSERT(cur3 == cur1);
// </Snippet15>
}

void CMainFrame::OnColecurrencyPlusMinus()
{
// <Snippet16>
   // 35.0050
   COleCurrency cur1(35, 50);
   // 2.0075
   COleCurrency cur2(2, 75);
   COleCurrency cur3;

   // sum is 37.0125
   cur3 = cur1 + cur2;
   ASSERT(cur3 == COleCurrency(37, 125));

   // difference is 32.9975
   cur3 = cur1 - cur2;
   ASSERT(cur3 == COleCurrency(32, 9975));
// </Snippet16>
}

void CMainFrame::OnColecurrencyPlusMinusEqual()
{
// <Snippet17>
   // both set to 35.0050
   COleCurrency cur1(35, 50);
   COleCurrency cur2(35, 50);

   // adding 2.0075 results in 37.0125
   cur1 += COleCurrency(2, 75);
   ASSERT(cur1 == COleCurrency(37, 125));

   // subtracting 2.0075 results in 32.9975
   cur2 -= COleCurrency(2, 75);
   ASSERT(cur2 == COleCurrency(32, 9975));
// </Snippet17>
}

void CMainFrame::OnColecurrencyMultDiv()
{
// <Snippet18>
   // 35 units and 50/10000, or 35.0050
   COleCurrency cur1(35, 50);
   COleCurrency cur2;

   // divided by two is 17.5025
   cur2 = cur1 / 2;
   ASSERT(cur2 == COleCurrency(17, 5025));

   // multiplied by two is 70.0100
   cur2 = cur1 * 2;
   ASSERT(cur2 == COleCurrency(70, 100));
// </Snippet18>
}

void CMainFrame::OnColecurrencyMultdivequal()
{
// <Snippet19>
   // both set to 35.0050
   COleCurrency cur1(35, 50);
   COleCurrency cur2(35, 50);

   // divide in half
   cur1 /= 2;
   ASSERT(cur1 == COleCurrency(17, 5025));

   // multiply by two
   cur2 *= 2;
   ASSERT(cur2 == COleCurrency(70, 100));
// </Snippet19>
}

void CMainFrame::OnColecurrencyRelationalops()
{
// <Snippet20>
   COleCurrency curOne(3, 5000);             // 3.5
   COleCurrency curTwo(curOne);              // 3.5
   BOOL b = (curOne == curTwo);              // TRUE

   b = curOne < curTwo;                      // FALSE, same value
   b = curOne > curTwo;                      // FALSE, same value
   b = curOne <= curTwo;                     // TRUE, same value
   b = curOne >= curTwo;                     // TRUE, same value
   curTwo.SetStatus(COleCurrency::invalid);
   b = curOne == curTwo;                     // FALSE, different status
   b = curOne != curTwo;                     // TRUE, different status
// </Snippet20>
}

void SomeOleFunc()
{
   COleException* pe = new COleException();
   pe->m_sc = E_OUTOFMEMORY;
   throw pe;
}

void CMainFrame::OnColeexceptionM_sc()
{
// <Snippet22>
   try 
   {
      SomeOleFunc();
   }
   catch (COleException* pe) 
   {
      TRACE (_T("COleException caught. SCODE = %x\n"), pe->m_sc);
      pe->Delete();
   }
// </Snippet22>
}

// <Snippet26>
void CMainFrame::Sort(VARIANT* vArray)
{
   COleSafeArray sa;
   BSTR *pbstr;
   TCHAR buf[1024];
   LONG cElements, lLBound, lUBound;
  
   //needed for OLE2T macro below, include afxpriv.h
   USES_CONVERSION;

   // Type check VARIANT parameter. It should contain a BSTR array
   // passed by reference. The array must be passed by reference it is
   // an in-out-parameter.
   if (V_VT(vArray) != (VT_ARRAY | VT_BSTR))
   {
      AfxThrowOleDispatchException(1001, 
         _T("Type Mismatch in Parameter. Pass a string array by reference"));
   }

   // clears data in sa and copies the variant data into sa
   sa.Attach(*vArray);

   // Check that array is 1 dimensional
   if (sa.GetDim() != 1)
   {
      AfxThrowOleDispatchException(1002, 
         _T("Type Mismatch in Parameter. Pass a one-dimensional array"));
   }

   try 
   {
      // Get array bounds.
      sa.GetLBound(1, &lLBound);
      sa.GetUBound(1, &lUBound);

      // Get a pointer to the elements of the array
      // and increments the lock count on the array
      sa.AccessData((LPVOID*)&pbstr);

      //get no. of elements in array
      cElements = lUBound - lLBound + 1;
      for (int i = 0; i < cElements; i++)
      {
         //output the elements of the array
         _stprintf_s(buf, 1024, _T("[%s]\n"), OLE2T(pbstr[i]));
         OutputDebugString(buf);
      }
      
      //decrement lock count
      sa.UnaccessData();
   }
   catch (COleException *pEx)
   {
      AfxThrowOleDispatchException(1003, 
         _T("Unexpected Failure in FastSort method"));
      pEx->Delete();
   }
}
// </Snippet26>

void CMainFrame::OnColesafearrayAccessdata()
{
   COleSafeArray arr;
   arr.CreateOneDim(VT_BSTR, 5);
   WCHAR wszBuf[64];
   BSTR bstrEl;
   for (long i = 0; i < 5; i++)
   {
      swprintf_s(wszBuf, 64, L"Element %d", i);
      bstrEl = ::SysAllocString(wszBuf);
      arr.PutElement(&i, bstrEl);
   }
   VARIANT arrData = arr.Detach();
   Sort(&arrData); // this function destroys the array data
}

void CMainFrame::OnColesafearrayCreate()
{
// <Snippet27>
   COleSafeArray saMatrix;
   DWORD numElements[] = {10, 5};

   // creates a 2 dimensional safearray of type VT_I2 
   // with size 10x5 elements, with all indices starting at 0(default)
   saMatrix.Create(VT_I2, 2, numElements);

   ASSERT(saMatrix.GetDim() == 2);

   COleSafeArray saVector;
   SAFEARRAYBOUND rgsabounds[] = { {5, 2} };

   // creates a 1 dimensional safearray of type VT_I1 
   // with size 5 elements, with the index starting at 2
   saVector.Create(VT_I1, 1, rgsabounds);

   ASSERT(saVector.GetDim() == 1);
// </Snippet27>
}

void CMainFrame::OnColesafearrayCreateonedim()
{
// <Snippet28>
   VARIANT varColInfo[3];

   //initialize VARIANTs
   for (int i = 0; i < 3; i++)
      VariantInit(&varColInfo[i]);

   // Column Name
   varColInfo[0].vt = VT_BSTR;
   varColInfo[0].bstrVal = ::SysAllocString(L"Name");

   // Column Type
   varColInfo[1].vt = VT_UI4;
   varColInfo[1].lVal = 1;

   COleSafeArray sa;
   //create a 1 dimensional safearray of VARIANTs
   //& initialize it with varColInfo VARIANT array
   sa.CreateOneDim(VT_VARIANT, 2, varColInfo);

   //check that the dimension is 2
   ASSERT(sa.GetOneDimSize() == 2);

   //increase safearray size by 1
   sa.ResizeOneDim(3);

   // populate the last element of the safearray, (Column Size)
   varColInfo[2].vt = VT_I4;
   varColInfo[2].lVal = 30;
   long el = 2;
   sa.PutElement(&el, &varColInfo[2]);
// </Snippet28>
}

void CMainFrame::OnColesafearrayGetelement()
{
   COleSafeArray sa;
   DWORD numEls[] = {10, 5};
   sa.Create(VT_VARIANT, 2, numEls);

   long dex[2];
   for(dex[0] = 0; dex[0] < 10; dex[0]++)
   {
      for(dex[1] = 0; dex[1] < 5; dex[1]++)
      {
         VARIANT val;
         if ((dex[0] % 2) == 0)
         {
            val.vt = VT_R8;
            val.dblVal = dex[0] + dex[1]*10;
         }
         else
         {
            val.vt = VT_BSTR;
            WCHAR wsz[16];
            swprintf_s(wsz, 16, L"El %d", dex[0] + dex[1]*10);
            val.bstrVal = ::SysAllocString(wsz);
         }
            
         sa.PutElement(dex, &val);
      }
   }

// <Snippet29>
   //sa is of type COleSafeArray with 2 dimensions

   //Determine upper bounds for both dimensions
   long lNumRows;
   long lNumCols;
   sa.GetUBound(1, &lNumRows);
   sa.GetUBound(2, &lNumCols);

   //Display the elements in the SAFEARRAY.
   long index[2];
   VARIANT val;

   //Determine lower bounds for both dimensions
   long lowRow, lowCol;
   sa.GetLBound(1, &lowRow);
   sa.GetLBound(2, &lowCol);

   for(long r = lowRow; r <= lNumRows; r++ )
   {
      for(long c = lowCol; c <= lNumCols; c++ )
      {
         index[0] = r;
         index[1] = c;

         //retrieve each element of the safearray
         sa.GetElement(index, &val);

         switch(val.vt)
         {
         case VT_R8:
            TRACE(_T("%1.2f\n"), val.dblVal);
            break;

         case VT_BSTR:
            TRACE(_T("%s\n"),(CString)val.bstrVal);
            break;

         // other cases ommitted

         case VT_EMPTY:
            TRACE(_T("<empty>\n"));
            break;
         }
      }
   }
// </Snippet29>
}

void CMainFrame::OnColesafearrayGetlbound()
{
// <Snippet30>
   COleSafeArray saMatrix;
   DWORD numElements[] = {10, 5};

   // creates a 2 dimensional safearray of type VT_I2 
   // with size 10x5 elements, with all indices starting at 0(default)
   saMatrix.Create(VT_I2, 2, numElements);

   long lLBound;

   //get lower bound for 1st dimension
   saMatrix.GetLBound(1, &lLBound);

   ASSERT(lLBound == 0);

   //get lower for 2nd dimension
   saMatrix.GetLBound(2, &lLBound);

   ASSERT(lLBound == 0);

   COleSafeArray saVector;
   SAFEARRAYBOUND rgsabounds[] = { {5, 1} };

   // creates a 1 dimensional safearray of type VT_I1 
   // with size 5 elements, with the index starting at 1
   saVector.Create(VT_I1, 1, rgsabounds);

   //get lower bound for 1st dimension
   saVector.GetLBound(1, &lLBound);

   ASSERT(lLBound == 1);
// </Snippet30>
}

void CMainFrame::OnColesafearrayGetubound()
{
// <Snippet31>
   COleSafeArray saMatrix;
   DWORD numElements[] = {10, 5};

   // creates a 2 dimensional safearray of type VT_I2 
   // with size 10x5 elements, with all indices starting at 0(default)
   saMatrix.Create(VT_I2, 2, numElements);

   long lUBound;
   ASSERT(saMatrix.GetDim() == 2);

   //get upper bound for 1st dimension
   saMatrix.GetUBound(1, &lUBound);

   ASSERT(lUBound == 9);

   //get upper bound for 2nd dimension
   saMatrix.GetUBound(2, &lUBound);

   ASSERT(lUBound == 4);

   COleSafeArray saVector;
   SAFEARRAYBOUND rgsabounds[] = { {5, 1} };

   // creates a 1 dimensional safearray of type VT_I1 
   // with size 5 elements, with the index starting at 1
   saVector.Create(VT_I1, 1, rgsabounds);

   //get upper bound for 1st dimension
   saVector.GetUBound(1, &lUBound);

   ASSERT(lUBound == 5);
// </Snippet31>
}

// <Snippet32>
VARIANT retVariantArray() 
{
   COleSafeArray saRet;         
   DWORD numElements[] = {10, 10}; // 10x10

   // Create the 2 dimensional safe-array of type VT_R8 with size 10x10
   saRet.Create(VT_R8, 2, numElements);

   // Initialize safearray  with values...
   long index[2];
   for(index[0] = 0; index[0] < 10; index[0]++)
   {
      for(index[1] = 0; index[1] < 10; index[1]++)
      {
         double val = index[0] + index[1]*10;
         //populate the safearray elements with double values
         saRet.PutElement(index, &val);
      }
   }
   // Return the safe-array encapsulated in a VARIANT...
   return saRet.Detach();
}
// </Snippet32>

void CMainFrame::OnColesafearrayPutelement()
{
   VARIANT var = retVariantArray();
   COleSafeArray sa;
   sa.Attach(var);
}
