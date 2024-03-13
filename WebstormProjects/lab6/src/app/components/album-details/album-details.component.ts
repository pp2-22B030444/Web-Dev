import { Component, OnInit } from '@angular/core';
import { ActivatedRoute, Router } from '@angular/router';
import { IAlbum } from 'src/app/models/album';
import { AlbumsService } from 'src/app/service/albums.service';

@Component({
  selector: 'app-album-details',
  templateUrl: './album-details.component.html',
  styleUrls: ['./album-details.component.css'],
})
export class AlbumDetailsComponent implements OnInit {
  albumId!: number;
  album!: IAlbum;
  albumTitle!: string;

  constructor(
    private route: ActivatedRoute,
    private router: Router,
    private albumService: AlbumsService
  ) {}

  ngOnInit(): void {
    this.albumId = +this.route.snapshot.params['id'];
    this.albumService.getAlbumById(this.albumId).subscribe(
      (album: IAlbum) => {
        this.album = album;
        this.albumTitle = this.album.title;
      },
      (error: any) => {
        console.error('Error fetching album details:', error);
      }
    );
  }

  update(): void {
    if (this.album) {
      this.album.title = this.albumTitle;
      this.albumService.updateAlbum(this.album).subscribe(
        (updatedAlbum: IAlbum) => {
          this.album = updatedAlbum;
          console.log('Album updated successfully:', updatedAlbum);
        },
        (error: any) => {
          console.error('Error updating album:', error);
        }
      );
    }
  }

  goBack(): void {
    this.update();
    this.router.navigate(['/albums']);
  }

  viewPhotos(): void {
    this.router.navigate(['/albums', this.album.id, 'photos']);
  }
}
