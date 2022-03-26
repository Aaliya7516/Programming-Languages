import { Component, OnInit } from '@angular/core';
import { FormBuilder, FormGroup, Validators } from '@angular/forms';
import { login } from 'classes/login';
import { verify } from 'classes/verify';
import { AuthService } from '../auth.service';

@Component({
  selector: 'app-otp-login',
  templateUrl: './otp-login.component.html',
  styleUrls: ['./otp-login.component.css']
})
export class OtpLoginComponent implements OnInit {
  createOtp: FormGroup;
  userData = [];
  sendOtp: number;
  constructor(private authService: AuthService, private formbuild: FormBuilder) { 
    this.otpForm(),
    this.sendOtp = 0
  }

  objLogin: login;
  objVerify: verify;

  ngOnInit(): void {
    this.authService.get().subscribe((data: any[])=>{
      this.userData = data;
    })

  }

  otpForm(){
    this.createOtp = this.formbuild.group({
      mobile: ['' ,[ Validators.required, Validators.pattern(/^[6-9]\d{9}$/)]],
      otp: ['', [Validators.required, Validators.pattern(/\d{4}/)]]
    })
  }

  getOtp(){
    var log = new login();
    log.mobile_number = this.createOtp.getRawValue().mobile;
    this.authService.login(log).subscribe(data=>{
      this.objLogin = data;  //.message -->> here 'data.message' to fatch 'message' from array namely 'data'
      // console.log(this.objLogin);
    })
    console.log(this.createOtp.getRawValue().mobile);
    this.sendOtp = 1;
  }

  verifyOtp(){
    var veri = new verify();
    veri.mobile_number = this.createOtp.getRawValue().mobile;
    veri.otp = this.createOtp.getRawValue().otp;
    this.authService.verify(veri).subscribe(data=>{
      this.objVerify = data;
    })

    console.log(this.createOtp.getRawValue().mobile);
    console.log(this.createOtp.getRawValue().otp);
  }

  resendOtp(){
    var res = new login();
    res.mobile_number = this.createOtp.getRawValue().mobile;
    this.authService.resendotp(res).subscribe(data=>{ 
      this.objLogin = data; //.message
    })

    console.log(this.createOtp.getRawValue().mobile);
  }

}
