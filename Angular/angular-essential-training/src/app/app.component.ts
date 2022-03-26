import { Component } from '@angular/core';

@Component({
  selector: 'mw-app',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent {
  firstMediaItem = {
    id: 1,
    name: 'Firebug',
    medium: 'Series',
    category: 'Science Fiction',
    year: 2021,
    watchedOn: "12/3/2021 4:00 pm",
    isFavorite: false
  };
  secondMediaItem = {
    id: 2,
    name: 'Lost In Space',
    medium: 'Series',
    category: 'Science Fiction',
    year: 2020,
    watchedOn: "30/4/2020 9:00 pm",
    isFavorite: false
  };
  thirdMediaItem = {
    id: 3,
    name: 'Interstaller',
    medium: 'Movie',
    category: 'Science Fiction',
    year: 2020,
    watchedOn: "27/6/2020 7:00 pm",
    isFavorite: false
  };
}
