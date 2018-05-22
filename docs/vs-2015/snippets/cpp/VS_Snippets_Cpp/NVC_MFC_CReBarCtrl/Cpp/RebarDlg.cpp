// RebarDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFC_CReBarCtrl.h"
#include "RebarDlg.h"


// CRebarDlg dialog

IMPLEMENT_DYNAMIC(CRebarDlg, CDialog)

CRebarDlg::CRebarDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CRebarDlg::IDD, pParent)
{

}

CRebarDlg::~CRebarDlg()
{
}

void CRebarDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CRebarDlg, CDialog)
END_MESSAGE_MAP()


// CRebarDlg message handlers

BOOL CRebarDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

   {
// <Snippet1>
      // Define a CRebar in your class definition,
      // such as: CReBar m_wndReBar;
      m_wndReBar.Create(this);
      m_wndDlgBar.Create(this, IDD_DIALOGBAR, CBRS_ALIGN_TOP,
          IDD_DIALOGBAR);
      m_wndReBar.AddBar(&m_wndDlgBar);   
// </Snippet1>
// <Snippet2>
      CReBarCtrl& refReBarCtrl = m_wndReBar.GetReBarCtrl();

      UINT nBandCount = refReBarCtrl.GetBandCount();
      CString msg;
      msg.Format(_T("Band Count is: %u"), nBandCount);
      AfxMessageBox(msg);
// </Snippet2>
   }

   {
// <Snippet3>
      CReBarCtrl* pReBarCtrl = new CReBarCtrl();
      CRect rect;
      GetWindowRect(rect);
      pReBarCtrl->Create(RBS_BANDBORDERS, rect, this, AFX_IDW_REBAR);

      // Use ReBar Control.

      delete pReBarCtrl;   
// </Snippet3>
   }

   {
      CPalette pal;
      pal.CreateStockObject(DEFAULT_PALETTE);
      m_wndReBar.GetReBarCtrl().SetPalette(pal);
// <Snippet5>
      CPalette* pPalette = m_wndReBar.GetReBarCtrl().GetPalette();
      if (pPalette)
      {
         int nEntries = pPalette->GetEntryCount();
         CString msg;
         msg.Format(_T("Number of palette entries: %d"), nEntries);
         AfxMessageBox(msg);
      }
      else
      {
         AfxMessageBox(_T("No palette!"));   
      }
// </Snippet5>
   }

   {
// <Snippet6>
      CRect rc;
      m_wndReBar.GetReBarCtrl().GetRect(0, &rc);
      CString msg;
      msg.Format(_T("rect.left = %d, rect.top = %d, ")
          _T("rect.right = %d, rect.bottom = %d"), rc.left,
          rc.top, rc.right, rc.bottom);
      AfxMessageBox(msg);   
// </Snippet6>
   }

   {
// <Snippet7>
      UINT nRowCount = m_wndReBar.GetReBarCtrl().GetRowCount();
      CString msg;
      msg.Format(_T("Row Count is %d"), nRowCount);
      AfxMessageBox(msg);   
// </Snippet7>
   }

   {
// <Snippet8>
      int nCount = m_wndReBar.GetReBarCtrl().GetRowCount();
      for (int i = 0; i < nCount; i++)
      {
         UINT nHeight = m_wndReBar.GetReBarCtrl().GetRowHeight(i);
         CString msg;
         msg.Format(_T("Height of row %d is %u"), i, nHeight);
         AfxMessageBox(msg);
      }   
// </Snippet8>
   }

   {
// <Snippet9>
      REBARBANDINFO rbbi = {0};
      rbbi.cbSize = sizeof(rbbi);

      TCHAR szText[80];
      rbbi.lpText = szText;
      rbbi.cch = sizeof(szText) / sizeof(szText[0]);

      rbbi.fMask = RBBIM_BACKGROUND | RBBIM_CHILD |
          RBBIM_CHILDSIZE | RBBIM_COLORS | RBBIM_HEADERSIZE |
          RBBIM_IDEALSIZE | RBBIM_ID | RBBIM_IMAGE |
          RBBIM_LPARAM | RBBIM_SIZE | RBBIM_STYLE | RBBIM_TEXT;

      m_wndReBar.GetReBarCtrl().GetBandInfo(0, &rbbi);

      m_wndReBar.GetReBarCtrl().InsertBand(1, &rbbi);      
// </Snippet9>
   }

   {
// <Snippet10>
      CReBarCtrl& refReBarCtrl = m_wndReBar.GetReBarCtrl();
      UINT nCount = refReBarCtrl.GetBandCount();

      for (UINT i = 0; i < nCount; i++)
         refReBarCtrl.MaximizeBand(i);   
// </Snippet10>
   }

   {
// <Snippet11>
      CReBarCtrl& refReBarCtrl = m_wndReBar.GetReBarCtrl();
      UINT nCount = refReBarCtrl.GetBandCount();

      for (UINT i = 0; i < nCount; i++)
         refReBarCtrl.MinimizeBand(i);   
// </Snippet11>
   }

   {
// <Snippet12>
      CReBarCtrl& refReBarCtrl = m_wndReBar.GetReBarCtrl();
      UINT nCount = refReBarCtrl.GetBandCount();

      for (UINT i = 0; i < nCount; i++)
         refReBarCtrl.RestoreBand(i);   
// </Snippet12>
   }

   {
// <Snippet13>
      int nCount = m_wndReBar.GetReBarCtrl().GetBandCount();
      CString strText;
      REBARBANDINFO rbbi = {0};
      rbbi.cbSize = sizeof(rbbi);
      for (int i = 0; i < nCount; i++)
      {
         strText.Format(_T("Band #: %d"), i);
         rbbi.lpText = strText.GetBuffer();
         rbbi.cch = strText.GetLength() + 1;
         rbbi.fMask = RBBIM_TEXT;

         m_wndReBar.GetReBarCtrl().SetBandInfo(i, &rbbi);

         strText.ReleaseBuffer();
      }   
// </Snippet13>
   }

   {
// <Snippet14>
      REBARINFO rbi = {0};
      rbi.cbSize = sizeof(REBARINFO);
      rbi.fMask = 0;
      rbi.himl = 0;
      m_wndReBar.GetReBarCtrl().SetBarInfo(&rbi);   
// </Snippet14>
   }

   {
// <Snippet4>
      UINT nCount = m_wndReBar.GetReBarCtrl().GetBandCount();

      if (nCount > 0)
         m_wndReBar.GetReBarCtrl().DeleteBand(nCount - 1);   
// </Snippet4>
   }

   return TRUE;  // return TRUE unless you set the focus to a control
}
