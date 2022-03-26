import { CommonModule } from '@angular/common';
import { NgModule } from '@angular/core';
import { RouterModule, Routes } from '@angular/router';
import { DashboardComponent } from './dashboard/dashboard.component';
import { ImgUploadComponent } from './img-upload/img-upload.component';
import { LoginOptionsComponent } from './login-options/login-options.component';
// import { LoginComponent } from './login/login.component';
import { OtpLoginComponent } from './otp-login/otp-login.component';
import { RegComponent } from './reg/reg.component';

const routes: Routes = [
  {path: '', component: LoginOptionsComponent},
  {path: 'login', component: OtpLoginComponent},
  {path: 'register', component: RegComponent},
  {path: 'dashboard', component: DashboardComponent},
  {path: 'image-upload', component: ImgUploadComponent},
  {path: '**', redirectTo: '', pathMatch: 'full' },
];

@NgModule({
  imports: [CommonModule,RouterModule.forRoot(routes)],
  exports: [RouterModule]
})
export class AppRoutingModule { }
