import { Component } from '@angular/core';
import { Router } from '@angular/router';
import { IAlbum } from 'src/app/models/album';
import { AlbumsService } from 'src/app/service/albums.service';

@Component({
  selector: 'app-albums',
  templateUrl: './albums-page.component.html',
  styleUrls: ['./albums-page.component.css'],
})
export class AlbumsPageComponent {
  albums: IAlbum[] = [];

  constructor(private albumsService: AlbumsService, private router: Router) {
    this.albumsService.getAlbums().subscribe((data) => (this.albums = data));
  }

  viewDetails(album: IAlbum) {
    this.router.navigate(['/albums', album.id]);
  }

  deleteAlbum(album: IAlbum) {
    this.albumsService.deleteAlbum(album.id).subscribe(
      () => {
        this.albums = this.albums.filter((a) => a !== album);
      },
      (error) => {
        console.error('Error deleting album:', error);
      }
    );
  }
}
