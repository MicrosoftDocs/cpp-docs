// ImageListDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFC_CImageList.h"
#include "ImageListDlg.h"

// <Snippet2>
void AddQuestion(HIMAGELIST hmyImageList)
{
   CImageList imgList;

   // Attach the image list handle to the CImageList object.
   imgList.Attach(hmyImageList);

   // Add a new icon to the image list.
   imgList.Add(AfxGetApp()->LoadStandardIcon(IDI_QUESTION));

   // Detach the handle from the CImageList object.
   imgList.Detach();
}
// </Snippet2>

// <Snippet13>
CImageList* ConvertHandle(HIMAGELIST hmyImageList)
{
   // Convert the HIMAGELIST to a CImageList*.
   ASSERT(hmyImageList != NULL);
   CImageList* pmyImageList = CImageList::FromHandle(hmyImageList);
   ASSERT(pmyImageList != NULL);

   return pmyImageList;
}
// </Snippet13>

// <Snippet14>
CImageList* ConvertHandlePermanent(HIMAGELIST hmyImageList)
{
   // Convert the HIMAGELIST to a CImageList*.
   ASSERT(hmyImageList != NULL);
   CImageList* pmyImageList = CImageList::FromHandlePermanent(hmyImageList);
   ASSERT(pmyImageList != NULL);

   return pmyImageList;
}
// </Snippet14>

// CImageListDlg dialog

IMPLEMENT_DYNAMIC(CImageListDlg, CDialog)

CImageListDlg::CImageListDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CImageListDlg::IDD, pParent)
   , m_PaintStyle(psDrawEx)
{

}

CImageListDlg::~CImageListDlg()
{
}

void CImageListDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CImageListDlg, CDialog)
   ON_WM_LBUTTONDOWN()
   ON_WM_MOUSEMOVE()
   ON_WM_LBUTTONUP()
   ON_WM_PAINT()
   ON_WM_RBUTTONDOWN()
   ON_WM_MBUTTONDOWN()
END_MESSAGE_MAP()


// CImageListDlg message handlers

BOOL CImageListDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

// <Snippet7>
   m_myImageList.Create(32, 32, ILC_COLOR8, 0, 4);
// </Snippet7>

// <Snippet1>
   // Add my icons.
   m_myImageList.Add(AfxGetApp()->LoadIcon(IDI_ICON1));
   m_myImageList.Add(AfxGetApp()->LoadIcon(IDI_ICON2));

   // Add my bitmap, make all black pixels transparent.
   CBitmap bm;
   bm.LoadBitmap(IDB_BITMAP1);
   m_myImageList.Add(&bm, RGB(0, 0, 0));
// </Snippet1>

   HIMAGELIST hil = m_myImageList.Detach();
   AddQuestion(hil);
   m_myImageList.Attach(hil);

// <Snippet6>
   CImageList myImageList2;
   myImageList2.Create(32, 32, ILC_COLOR8, 0, 4);

   // Copy the first image from myImageList2 and make it
   // the first image of m_myImageList.
   m_myImageList.Copy(0, &myImageList2, 0, ILCF_MOVE);

   // Recopy the image to make it also the last image in m_myImageList.
   m_myImageList.Copy(m_myImageList.GetImageCount() - 1, (int)0, 
      (UINT)ILCF_MOVE);
// </Snippet6>

// <Snippet8>
   // Delete the image list and verify.
   myImageList2.DeleteImageList();
   ASSERT(myImageList2.GetSafeHandle() == NULL);
// </Snippet8>

// <Snippet9>
   // Note that this is a static member so an instantiated CImageList 
   // object is unnecessary.
   CImageList::DeleteTempMap();
// </Snippet9>

   CImageList* pil = ConvertHandle(m_myImageList);
   UNREFERENCED_PARAMETER(pil);

   CImageList* pil2 = ConvertHandlePermanent(m_myImageList);
   UNREFERENCED_PARAMETER(pil2);

   {
// <Snippet15>
   // Get the safe handle to the image list.
   HIMAGELIST hImageList = m_myImageList.GetSafeHandle();
// </Snippet15>
   UNREFERENCED_PARAMETER(hImageList);
   }

   {
// <Snippet16>
   // Get the safe handle to the image list.
   HIMAGELIST hImageList = m_myImageList;   
// </Snippet16>
   UNREFERENCED_PARAMETER(hImageList);
   }

   {
// <Snippet17>
   // Open the archive to store the image list in.
   CFile   myFile(_T("myfile.data"), CFile::modeCreate | CFile::modeWrite);
   CArchive ar(&myFile, CArchive::store);

   // Store the image list in the archive.
   m_myImageList.Write(&ar);
// </Snippet17>
   }

   {
// <Snippet18>
   // Open the archive to load the image list from.
   CFile   myFile(_T("myfile.data"), CFile::modeRead);
   CArchive ar(&myFile, CArchive::load);
   CImageList myImgList;

   // Load the image list from the archive.
   myImgList.Read(&ar);   
// </Snippet18>
   }

// <Snippet19>
   // Remove every other image from the image list.
   for (int i = 0; i < m_myImageList.GetImageCount(); i++)
   {
      m_myImageList.Remove(i);
   }
// </Snippet19>

// <Snippet20>
   // Set the background color to white.
   m_myImageList.SetBkColor(RGB(255, 255, 255));
   ASSERT(m_myImageList.GetBkColor() == RGB(255, 255, 255));
// </Snippet20>

   {
// <Snippet23>
   // Get the safe handle to the image list.
   HIMAGELIST hImageList = m_myImageList.m_hImageList;
// </Snippet23>
   UNREFERENCED_PARAMETER(hImageList);
   }

   return TRUE;  // return TRUE unless you set the focus to a control
}

// <Snippet3>
void CImageListDlg::OnLButtonDown(UINT nFlags, CPoint point)
{
   // Initialize the drag image (usually called from WM_LBUTTONDOWN).
   m_myImageList.BeginDrag(0, CPoint(0, 0));
   m_myImageList.DragEnter(this, point);

   CDialog::OnLButtonDown(nFlags, point);
}
// </Snippet3>

// <Snippet4>
void CImageListDlg::OnMouseMove(UINT nFlags, CPoint point)
{
   m_myImageList.DragMove(point);

   CDialog::OnMouseMove(nFlags, point);
}
// </Snippet4>

// <Snippet5>
void CImageListDlg::OnLButtonUp(UINT nFlags, CPoint point)
{
   // Terminate the drag image (usually called from WM_LBUTTONUP).
   m_myImageList.DragLeave(this);
   m_myImageList.EndDrag();

   CDialog::OnLButtonUp(nFlags, point);
}
// </Snippet5>

void CImageListDlg::OnPaint()
{
   CPaintDC dc(this); // device context for painting

   ASSERT(0 <= m_PaintStyle && m_PaintStyle < psCount);

   switch (m_PaintStyle)
   {
   case psDrawEx:
   {
// <Snippet10>
      m_myImageList.DrawEx(&dc, 0, CPoint(0, 0), CSize(16, 16), CLR_DEFAULT, 
         CLR_DEFAULT, ILD_IMAGE);
// </Snippet10>
      break;
   }

   case psDrawIndirect:
   {
// <Snippet11>
      int i, dx, cx, cy, nCount = m_myImageList.GetImageCount();

      ::ImageList_GetIconSize(m_myImageList, &cx, &cy);

      // Draw the images of the image list on the DC.
      for (dx = 0, i = 0; i < nCount; i++)
      {
         m_myImageList.DrawIndirect(&dc, i, CPoint(dx, 0), 
            CSize(cx, cy), CPoint(0, 0));
         dx += cx;
      }      
// </Snippet11>   
      break;
   }

   case psExtractIcon:
   {
// <Snippet12>
      int   i, dx, cx, cy, nCount = m_myImageList.GetImageCount();
      HICON hIcon;

      ::ImageList_GetIconSize(m_myImageList, &cx, &cy);

      // Draw the images of the image list on the DC.
      for (dx = 0, i = 0; i < nCount; i++)
      {
         hIcon = m_myImageList.ExtractIcon(i);

         dc.DrawIcon(dx, 0, hIcon);
         dx += cx;
      }
// </Snippet12>
      break;
   }

   case psOverlayImage:
   {
// <Snippet22>
      // Add a new image to the image list.
      int nIndex = m_myImageList.Add(AfxGetApp()->LoadStandardIcon(IDI_QUESTION));

      if (nIndex != -1)
      {
         // Make the new image an overlay image.
         m_myImageList.SetOverlayImage(nIndex, 1);
         
         // Draw the first image in the image list with an overlay image.
         m_myImageList.Draw(&dc, 0, CPoint(0, 0), INDEXTOOVERLAYMASK(1));
      }
// </Snippet22>
      break;
   }

   default:
      AfxMessageBox(_T("What the heck?"));
      break;
   }
}

void CImageListDlg::OnRButtonDown(UINT nFlags, CPoint point)
{
   m_PaintStyle = (PaintStyle)((m_PaintStyle + 1) % psCount);

   CDialog::OnRButtonDown(nFlags, point);
}

void CImageListDlg::OnMButtonDown(UINT nFlags, CPoint point)
{
// <Snippet21>
   // Set the image count of the image list to be 10 with
   // all images being the system question mark icon.
   m_myImageList.SetImageCount(10);
   HICON hIcon = AfxGetApp()->LoadStandardIcon(IDI_QUESTION);

   for (int i=0;i < 10;i++)
   {
      m_myImageList.Replace(i, hIcon);
   }
// </Snippet21>

   CDialog::OnMButtonDown(nFlags, point);
}
