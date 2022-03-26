import { Component, OnInit } from '@angular/core';
import { FormBuilder, FormGroup, Validators } from '@angular/forms';
import { AuthService } from "../auth.service";

@Component({
  selector: 'app-login',
  templateUrl: './login.component.html',
  styleUrls: ['./login.component.css']
})

export class LoginComponent implements OnInit {
  createLogin: FormGroup;
  userData = [];
  flag: number;
  constructor(private authService: AuthService, private formbuild: FormBuilder,) {
    this.loginForm()
   }
  ngOnInit() {
    this.authService.get().subscribe((data: any[])=>{
      this.userData = data;
    })
  }

  loginForm(){
    this.createLogin = this.formbuild.group({
      username: ['' , Validators.required ],
      password: ['' , Validators.required ],
    })
  }

  login(){
    console.log(this.createLogin.getRawValue().username);
    console.log(this.createLogin.getRawValue().password);
    this.flag = 0;
    for (let index = 0; index < this.userData.length; index++)
    {
      const element = this.userData[index];
      if (element.user == this.createLogin.getRawValue().username)
      { 
        if (element.pass == this.createLogin.getRawValue().password)
        {
          this.flag = 1;
        }
      }
    }
    if(this.flag == 1){ console.log("Welcome to Coder's Coffee");}
    else{ console.log("Invalid Credantials");}
  }

}