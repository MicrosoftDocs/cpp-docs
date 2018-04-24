
// ChildView.cpp : implementation of the CChildView class
//

#include "stdafx.h"
#include "ParallelMandelbrot.h"
#include "ChildView.h"

//#ifdef _DEBUG
//#define new DEBUG_NEW
//#endif

using namespace Gdiplus;
// <snippet103>
using namespace concurrency;
// </snippet103>

// CChildView

CChildView::CChildView()
{
   // Initialize GDI+.
   GdiplusStartupInput gdiplusStartupInput;
   GdiplusStartup(&m_gdiplusToken, &gdiplusStartupInput, NULL);
}

CChildView::~CChildView()
{
   // Shutdown GDI+.
   GdiplusShutdown(m_gdiplusToken);
}

// <snippet202>
BEGIN_MESSAGE_MAP(CChildView, CWnd)
   ON_WM_PAINT()
   ON_WM_SIZE()
   ON_WM_SIZING()
   ON_WM_DESTROY()
END_MESSAGE_MAP()
// </snippet202>



// CChildView message handlers

BOOL CChildView::PreCreateWindow(CREATESTRUCT& cs) 
{
	if (!CWnd::PreCreateWindow(cs))
		return FALSE;

	cs.dwExStyle |= WS_EX_CLIENTEDGE;
	cs.style &= ~WS_BORDER;
	cs.lpszClass = AfxRegisterWndClass(CS_HREDRAW|CS_VREDRAW|CS_DBLCLKS, 
		::LoadCursor(NULL, IDC_ARROW), reinterpret_cast<HBRUSH>(COLOR_WINDOW+1), NULL);

	return TRUE;
}

// <snippet204>
void CChildView::OnSize(UINT nType, int cx, int cy)
{
   // The window size has changed; cancel any existing drawing tasks.
   m_DrawingTasks.cancel();
   // Wait for any existing tasks to finish.
   m_DrawingTasks.wait();

   // If the new size is non-zero, create a task to draw the Mandelbrot 
   // image on a separate thread.
   if (cx != 0 && cy != 0)
   {      
      m_DrawingTasks.run([cx,cy,this]() {
         DrawMandelbrot(BitmapPtr(new Bitmap(cx, cy)));
      });
   }
}
// </snippet204>

// <snippet203>
void CChildView::OnSizing(UINT nSide, LPRECT lpRect)
{
   // The window size is changing; cancel any existing drawing tasks.
   m_DrawingTasks.cancel();
}
// </snippet203>

// <snippet205>
void CChildView::OnDestroy()
{
   // The window is being destroyed; cancel any existing drawing tasks.
   m_DrawingTasks.cancel();
   // Wait for any existing tasks to finish.
   m_DrawingTasks.wait();
}
// </snippet205>

// <snippet105>
void CChildView::OnPaint() 
{
   CPaintDC dc(this); // device context for painting

   // If the unbounded_buffer object contains a Bitmap object, 
   // draw the image to the client area.
   BitmapPtr pBitmap;
   if (try_receive(m_MandelbrotImages, pBitmap))
   {
      if (pBitmap != NULL)
      {
         // Draw the bitmap to the client area.
         Graphics g(dc);
         g.DrawImage(pBitmap.get(), 0, 0);
      }
   }
   // Draw the image on a worker thread if the image is not available.
   else
   {
      RECT rc;
      GetClientRect(&rc);
      m_DrawingTasks.run([rc,this]() {
         DrawMandelbrot(BitmapPtr(new Bitmap(rc.right, rc.bottom)));
      });
   }
}
// </snippet105>

// <snippet206>
// Implements the Resource Acquisition Is Initialization (RAII) pattern 
// by calling the specified function after leaving scope.
class scope_guard 
{
public:
   explicit scope_guard(std::function<void()> f)
      : m_f(std::move(f)) { }

   // Dismisses the action.
   void dismiss() {
      m_f = nullptr;
   }

   ~scope_guard() {
      // Call the function.
      if (m_f) {
         try {
            m_f();
         }
         catch (...) {
            terminate();
         }
      }
   }

private:
   // The function to call when leaving scope.
   std::function<void()> m_f;

   // Hide copy constructor and assignment operator.
   scope_guard(const scope_guard&);
   scope_guard& operator=(const scope_guard&);
};
// </snippet206>

// Draws the Mandelbrot fractal to the specified Bitmap object.
void CChildView::DrawMandelbrot(BitmapPtr pBitmap)
{   
   if (pBitmap == NULL)
      return;

   // Get the size of the bitmap.
   const UINT width = pBitmap->GetWidth();
   const UINT height = pBitmap->GetHeight();

   // Return if either width or height is zero.
   if (width == 0 || height == 0)
      return;

   // Lock the bitmap into system memory.
   BitmapData bitmapData;   
   Rect rectBmp(0, 0, width, height);
   pBitmap->LockBits(&rectBmp, ImageLockModeWrite, PixelFormat32bppRGB, 
      &bitmapData);

   // <snippet207>
   // Create a scope_guard object that unlocks the bitmap bits when it
   // leaves scope. This ensures that the bitmap is properly handled
   // when the task is canceled.
   scope_guard guard([&pBitmap, &bitmapData] {
      // Unlock the bitmap from system memory.
      pBitmap->UnlockBits(&bitmapData);      
   });
   // </snippet207>

   // Obtain a pointer to the bitmap bits.
   int* bits = reinterpret_cast<int*>(bitmapData.Scan0);
      
   // Real and imaginary bounds of the complex plane.
   double re_min = -2.1;
   double re_max = 1.0;
   double im_min = -1.3;
   double im_max = 1.3;

   // Factors for mapping from image coordinates to coordinates on the complex plane.
   double re_factor = (re_max - re_min) / (width - 1);
   double im_factor = (im_max - im_min) / (height - 1);

   // The maximum number of iterations to perform on each point.
   const UINT max_iterations = 1000;
   
   /*
   // <snippet301>
   // Compute whether each point lies in the Mandelbrot set.
   parallel_for (0u, height, [&](UINT row)
   {
      // Loop body omitted for brevity.
   });
   // </snippet301>
   */

   // Compute whether each point lies in the Mandelbrot set.
   parallel_for (0u, height, [&](UINT row)
   {
      // Obtain a pointer to the bitmap bits for the current row.
      int *destPixel = bits + (row * width);

      // Convert from image coordinate to coordinate on the complex plane.
      double y0 = im_max - (row * im_factor);

      for (UINT col = 0u; col < width; ++col)
      {
         // Convert from image coordinate to coordinate on the complex plane.
         double x0 = re_min + col * re_factor;

         double x = x0;
         double y = y0;

         UINT iter = 0;
         double x_sq, y_sq;
         while (iter < max_iterations && ((x_sq = x*x) + (y_sq = y*y) < 4))
         {
            double temp = x_sq - y_sq + x0;
            y = 2 * x * y + y0;
            x = temp;
            ++iter;
         }

         // If the point is in the set (or approximately close to it), color
         // the pixel black.
         if(iter == max_iterations) 
         {         
            *destPixel = 0;
         }
         // Otherwise, select a color that is based on the current iteration.
         else
         {
            BYTE red = static_cast<BYTE>((iter % 64) * 4);
            *destPixel = red<<16;
         }

         // Move to the next point.
         ++destPixel;
      }
   });

   /*
   // <snippet104>
   // Unlock the bitmap from system memory.
   pBitmap->UnlockBits(&bitmapData);

   // Add the Bitmap object to image queue.
   send(m_MandelbrotImages, pBitmap);

   // Post a paint message to the UI thread.
   PostMessage(WM_PAINT);
   // Invalidate the client area.
   InvalidateRect(NULL, FALSE);
   // </snippet104>
   */

   // <snippet208>
   // Unlock the bitmap from system memory.
   pBitmap->UnlockBits(&bitmapData);

   // Dismiss the scope guard because the bitmap has been 
   // properly unlocked.
   guard.dismiss();

   // Add the Bitmap object to image queue.
   send(m_MandelbrotImages, pBitmap);

   // Post a paint message to the UI thread.
   PostMessage(WM_PAINT);
   // Invalidate the client area.
   InvalidateRect(NULL, FALSE);
   // </snippet208>
}

