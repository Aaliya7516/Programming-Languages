# Image Upload API

Here, using this API, we can upload image and view it <br>
<br>

## Image Upload

On sending *POST* request with choosing image file from frontend, the API will add this data to database. The below image demonstartes the same: <br>
> File selection:<br>
!["img"](./demoImages/API_imgUpload_fileSelected.PNG) <br>
> If File is Sucessfully Uploaded:<br>
!["img"](./demoImages/API_imgUpload_fileUploaded.PNG) <br>
> If File already exists in the DB:<br>
!["img"](./demoImages/API_imgUpload_fileAlreadyExists.PNG) <br>
<br><br>

## Retriving the Image

On sending *GET* request with writing the image ID as it's Parameter, the API will fetch its data from database. The below image demonstartes the same: <br>
> If File exists:<br>
!["img"](./demoImages/API_imgUpload_fileRetrived.PNG) <br>
> If file with respective ID not found:<br>
!["img"](./demoImages/API_imgUpload_fileNotFound.PNG) <br>
<br><br>

