import { Component, OnInit } from '@angular/core';
import { FormBuilder, FormGroup, Validators } from '@angular/forms';
import { RxwebValidators } from '@rxweb/reactive-form-validators';
import { imgUpload } from 'classes/imgUpload';
import { AuthService } from '../auth.service';

@Component({
  selector: 'app-img-upload',
  templateUrl: './img-upload.component.html',
  styleUrls: ['./img-upload.component.css']
})
export class ImgUploadComponent implements OnInit {
  imgUpload: FormGroup;
  constructor(private formbuild: FormBuilder, private authService: AuthService ) { 
    this.imgForm()
  }

  objImgUpload: imgUpload;

  ngOnInit(): void {
  }

  imgForm(){
    this.imgUpload = this.formbuild.group({
      profilePic: ['', [Validators.required,RxwebValidators.extension({extensions:['png','jpg', 'jpeg']}), RxwebValidators.fileSize({maxSize:1024*1024*3 })]]
    })
  }

  imgUploadF(){
    var pic = new imgUpload();
    pic.profilePic = this.imgUpload.getRawValue().profilePic;
    this.authService.imgUpload(pic).subscribe(data=>{
      console.log(data)})
  }
}
