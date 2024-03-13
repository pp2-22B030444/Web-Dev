import { Component, OnInit } from '@angular/core';
import { ActivatedRoute, Router } from '@angular/router';
import { AlbumsService } from '../album.service';

@Component({
  selector: 'app-album-photos',
  templateUrl: './album-photos.component.html',
  styleUrls: ['./album-photos.component.css'] // исправлено на styleUrls
})
export class AlbumPhotosComponent implements OnInit {
  photos: any;
  albumId!: number;

  constructor(
    private albumsService: AlbumsService, // исправлено на albumsService
    private router: Router,
    private route: ActivatedRoute
  ) {}

  ngOnInit(): void {
    this.albumId = +this.route.snapshot.params['id']; // исправлено на +this.route.snapshot.params['id']
    this.albumsService // исправлено на albumsService
      .getPhotos(this.albumId)
      .subscribe((data) => (this.photos = data));
  }

  goBack() {
    this.router.navigate(['/albums', this.albumId]);
  }
}
