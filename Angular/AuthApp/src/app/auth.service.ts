import { Injectable } from '@angular/core';
import { HttpClient } from '@angular/common/http';
import { Observable } from 'rxjs';
import { login } from 'classes/login';
import { verify } from 'classes/verify';
import { register } from 'classes/register';
import { imgUpload } from 'classes/imgUpload';

@Injectable({
  providedIn: 'root'
})
export class AuthService {

  constructor( private httpClient: HttpClient ) {  }

  public get(): Observable<any>{
    return this.httpClient.get("http://localhost:3000/userData");
  }
  
  login(log:login): Observable<any>{
    return this.httpClient.post("http://mobilewebapitest-env.eba-nf3miwxn.ap-south-1.elasticbeanstalk.com/api/v1/web_jobcard/auth/login",log)
  }

  verify(veri:verify): Observable<any>{
    return this.httpClient.post("http://mobilewebapitest-env.eba-nf3miwxn.ap-south-1.elasticbeanstalk.com/api/v1/web_jobcard/auth/verifyotp",veri)
  }

  resendotp(res:login): Observable<any>{
    return this.httpClient.post("http://mobilewebapitest-env.eba-nf3miwxn.ap-south-1.elasticbeanstalk.com/api/v1/web_jobcard/auth/resendotp_web",res)
  }
  
  register(reg:register): Observable<any>{
    return this.httpClient.post("http://mobilewebapitest-env.eba-nf3miwxn.ap-south-1.elasticbeanstalk.com/api/v1/web_jobcard/auth/register",reg)
  }

  imgUpload(img: imgUpload): Observable<any>{
    return this.httpClient.post("http://localhost:5000/upload", img);
  }
}
