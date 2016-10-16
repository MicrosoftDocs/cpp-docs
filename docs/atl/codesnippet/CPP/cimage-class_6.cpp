// Performs a transparent blit from the source image to the destination 
// image using the images' current transparency settings
BOOL TransparentBlt(CImage* pSrcImage, CImage* pDstImage, int xDest, int yDest,
   int nDestWidth, int nDestHeight)
{
   HDC hDstDC = NULL;
   BOOL bResult;

   if(pSrcImage == NULL || pDstImage == NULL)
   {
      // Invalid parameter
      return FALSE;
   }

   // Obtain a DC to the destination image
   hDstDC = pDstImage->GetDC();

   // Perform the blit
   bResult = pSrcImage->TransparentBlt(hDstDC, xDest, yDest, nDestWidth, nDestHeight);

   // Release the destination DC
   pDstImage->ReleaseDC();

   return bResult;
}