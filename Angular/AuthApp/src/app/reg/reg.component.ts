import { Component, OnInit } from '@angular/core';
import { FormBuilder, FormGroup, Validators } from '@angular/forms';
import { register } from 'classes/register';
import { AuthService } from '../auth.service';

@Component({
  selector: 'app-reg',
  templateUrl: './reg.component.html',
  styleUrls: ['./reg.component.css']
})
export class RegComponent implements OnInit {
  createReg: FormGroup;
  sendOtp: number;
  loggedin: boolean = false;
  loggerName: string;
  constructor(private formbuild: FormBuilder, private authService: AuthService,) {
    this.regForm(),
    this.sendOtp = 0
  }

  objReg: register;

  ngOnInit(): void {
  }

  regForm(){
    this.createReg = this.formbuild.group
    ({
      workshop_first_name: ['' , Validators.required ],
      workshop_last_name: [''],
      workshop_name: ['' , Validators.required ],
      workshop_email: ['' , [Validators.required,Validators.email] ],
      workshop_mobile_number_1: ['', [Validators.required, Validators.pattern(/^[6-9]\d{9}$/)] ],
      workshop_mobile_number_2: ['', [ Validators.pattern(/^[6-9]\d{9}$/)]],
      workshop_address: [''],
      workshop_state: [''],
      workshop_city: [''],
      workshop_pincode: [''],
      workshop_rtocode: ['' , Validators.required ], // Validators.pattern(/[a-zA-Z]{2}\d{2}$/)]
      two_wheeler: [0],
      three_wheeler: [0],
      four_wheeler: [0],
      six_wheeler: [0],
      terms_conditions: [0, Validators.required ],
      })
  }

boolToNum(name){
    if (name) return 1;
    else return 0;
  }
isEmpty(name){
  if (name == '') return 0;
  else return name
}

  reg(){
    var reg = new register();
    reg.workshop_first_name = this.createReg.getRawValue().workshop_first_name;
    reg.workshop_last_name = this.createReg.getRawValue().workshop_last_name;
    reg.workshop_name = this.createReg.getRawValue().workshop_name;
    reg.workshop_email = this.createReg.getRawValue().workshop_email;
    reg.workshop_mobile_number_1 = this.createReg.getRawValue().workshop_mobile_number_1;
    reg.workshop_mobile_number_2 = this.isEmpty(this.createReg.getRawValue().workshop_mobile_number_2);
    reg.workshop_address = this.createReg.getRawValue().workshop_address;
    reg.workshop_state = this.createReg.getRawValue().workshop_state;
    reg.workshop_city = this.createReg.getRawValue().workshop_city;
    reg.workshop_pincode = this.isEmpty(this.createReg.getRawValue().workshop_pincode);
    reg.workshop_rtocode = this.createReg.getRawValue().workshop_rtocode;
    reg.two_wheeler = this.boolToNum(this.createReg.getRawValue().two_wheeler);
    reg.three_wheeler = this.boolToNum(this.createReg.getRawValue().three_wheeler);
    reg.four_wheeler = this.boolToNum(this.createReg.getRawValue().four_wheeler);
    reg.six_wheeler = this.boolToNum(this.createReg.getRawValue().six_wheeler);
    reg.terms_conditions = this.boolToNum(this.createReg.getRawValue().terms_conditions);

    this.authService.register(reg).subscribe(data=>{ 
      this.objReg = data 
      if (data.success==true){
      this.loggedin = true
      }else{this.loggedin = false}
    })
    this.loggerName = reg.workshop_first_name
  }
}
