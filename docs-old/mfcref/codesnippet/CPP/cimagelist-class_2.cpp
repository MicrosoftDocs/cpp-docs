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