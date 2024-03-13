import { Component } from '@angular/core';
import { Router } from '@angular/router';
import { IAlbum } from '../album';
import { AlbumsService } from '../album.service';
import { catchError } from 'rxjs/operators';
import { throwError } from 'rxjs';

@Component({
  selector: 'app-albums',
  templateUrl: './albums.component.html',
  styleUrls: ['./albums.component.css'] // исправлено на styleUrls
})
export class AlbumsComponent {
  albums: IAlbum[] = [];

  constructor(private albumsService: AlbumsService, private router: Router) {
    this.fetchAlbums();
  }

  fetchAlbums() {
    this.albumsService.getAlbums()
      .subscribe(
        (data) => {
          this.albums = data;
        },
        (error) => {
          console.error('Error fetching albums:', error);
        }
      );
  }

  viewDetails(album: IAlbum) {
    this.router.navigate(['/albums', album.id]);
  }

  deleteAlbum(album: IAlbum) {
    this.albumsService.deleteAlbum(album.id)
      .pipe(
        catchError((error) => {
          console.error('Error deleting album:', error);
          return throwError(error);
        })
      )
      .subscribe(
        () => {
          this.albums = this.albums.filter((a) => a !== album);
        }
      );
  }
}
