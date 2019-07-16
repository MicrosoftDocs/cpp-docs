// Add a new image to the image list.
int nIndex = m_myImageList.Add(AfxGetApp()->LoadStandardIcon(IDI_QUESTION));

if (nIndex != -1)
{
   // Make the new image an overlay image.
   m_myImageList.SetOverlayImage(nIndex, 1);

   // Draw the first image in the image list with an overlay image.
   m_myImageList.Draw(&dc, 0, CPoint(0, 0), INDEXTOOVERLAYMASK(1));
}