import { NgModule } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';
import { FormsModule, ReactiveFormsModule } from '@angular/forms'
import { RxReactiveFormsModule } from '@rxweb/reactive-form-validators';
import { HttpClientModule } from '@angular/common/http';
import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';
import { LoginComponent } from './login/login.component';
import { RegComponent } from './reg/reg.component';
import { DashboardComponent } from './dashboard/dashboard.component';
import { LoginOptionsComponent } from './login-options/login-options.component';
import { OtpLoginComponent } from './otp-login/otp-login.component';
import { AuthService } from './auth.service';
import { ImgUploadComponent } from './img-upload/img-upload.component';

@NgModule({
  declarations: [
    AppComponent,
    LoginComponent,
    RegComponent,
    DashboardComponent,
    LoginOptionsComponent,
    OtpLoginComponent,
    ImgUploadComponent,
  ],
  imports: [
    BrowserModule,
    AppRoutingModule,
    ReactiveFormsModule,
    FormsModule,
    HttpClientModule, 
    RxReactiveFormsModule
  ],
  providers: [AuthService],
  bootstrap: [AppComponent]
})
export class AppModule { }
