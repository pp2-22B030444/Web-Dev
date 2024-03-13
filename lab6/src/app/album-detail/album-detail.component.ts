import { Component, OnInit } from '@angular/core';
import { ActivatedRoute, Router } from '@angular/router';
import { IAlbum } from '../album';
import { AlbumsService } from '../album.service';


@Component({
  selector: 'app-album-detail',
  // standalone: true,
  // imports: [],
  templateUrl: './album-detail.component.html',
  styleUrl: './album-detail.component.css'
})
export class AlbumDetailComponent implements OnInit{
  albumId!: number;
  album!: IAlbum;
  albumTitle!: string; // declared as optional

  constructor(
    private route: ActivatedRoute,
    private router: Router,
    private albumService: AlbumsService
  ) {}

  ngOnInit() {
    this.albumId = this.route.snapshot.params['id'];
    this.albumService.getAlbumById(this.albumId).subscribe((album) => {
      this.album = album;
      this.albumTitle = this.album.title;
    });
  }

  update() {
    if (this.album) {
      this.album.title = this.albumTitle;
      this.albumService.updateAlbum(this.album).subscribe(
        () => {
          console.log('Album updated successfully');
          // Добавьте дополнительную логику или уведомление об успешном обновлении
        },
        (error) => {
          console.error('Error updating album:', error);
          // Добавьте обработку ошибок или уведомление об ошибке
        }
      );
    }
  }


  goBack() {
    this.router.navigate(['/albums']);
  }

  viewPhotos() {
    this.router.navigate(['/albums', this.album.id, 'photos']);
  }

}
